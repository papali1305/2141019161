#include "file_explorer.h"
#include <iostream>

int main() {
    FileExplorer explorer;
    
    std::cout << "Linux File Explorer\n";
    std::cout << "Current directory: " << explorer.getCurrentPath() << "\n\n";
    
    explorer.listCurrentDirectory();
    
    return 0;
}
