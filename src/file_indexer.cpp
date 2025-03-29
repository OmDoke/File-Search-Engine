
#include "file_indexer.h"
#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

void FileIndexer::buildIndex(const std::string& directory) {
    std::ofstream indexFile("data/index.txt", std::ios::trunc);
    if (!indexFile) {
        std::cerr << "Error opening index file!" << std::endl;
        return;
    }
    for (const auto& entry : fs::recursive_directory_iterator(directory)) {
        if (entry.is_regular_file()) {
            indexFile << entry.path().string() << std::endl;
        }
    }
    indexFile.close();
    std::cout << "Indexing complete!" << std::endl;
}
