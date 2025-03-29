
#include "file_search.h"
#include <iostream>
#include <fstream>
#include <vector>

void FileSearch::searchFiles(const std::string& query) {
    std::ifstream indexFile("data/index.txt");
    if (!indexFile) {
        std::cerr << "Error opening index file!" << std::endl;
        return;
    }
    std::string filePath;
    std::vector<std::string> results;
    while (std::getline(indexFile, filePath)) {
        if (filePath.find(query) != std::string::npos) {
            results.push_back(filePath);
        }
    }
    indexFile.close();
    
    if (results.empty()) {
        std::cout << "No files found matching: " << query << std::endl;
    } else {
        std::cout << "Found files: " << std::endl;
        for (const auto& file : results) {
            std::cout << file << std::endl;
        }
    }
}
