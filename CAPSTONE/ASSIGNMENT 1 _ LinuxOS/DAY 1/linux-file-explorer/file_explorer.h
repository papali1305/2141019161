#ifndef FILE_EXPLORER_H
#define FILE_EXPLORER_H

#include <vector>
#include <string>

class FileExplorer {
public:
    FileExplorer();
    void listCurrentDirectory();
    std::string getCurrentPath() const;
    
private:
    std::string currentPath;
};

#endif // FILE_EXPLORER_H
