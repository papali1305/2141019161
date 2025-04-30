#include "file_explorer.h"
#include <iostream>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <climits> // For PATH_MAX

FileExplorer::FileExplorer() {
    char buffer[PATH_MAX];
    if (getcwd(buffer, sizeof(buffer)) != nullptr) {
        currentPath = std::string(buffer);
    } else {
        currentPath = ".";
    }
}

void FileExplorer::listCurrentDirectory() {
    DIR *dir;
    struct dirent *ent;
    
    std::cout << "Contents of " << currentPath << ":\n";
    
    if ((dir = opendir(currentPath.c_str())) != nullptr) {
        while ((ent = readdir(dir)) != nullptr) {
            std::string name = ent->d_name;
            if (name != "." && name != "..") {
                std::cout << "- " << name << "\n";
            }
        }
        closedir(dir);
    } else {
        std::cerr << "Error opening directory\n";
    }
}

std::string FileExplorer::getCurrentPath() const {
    return currentPath;
}
