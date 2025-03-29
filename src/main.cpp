
#include <iostream>
#include "file_indexer.h"
#include "file_search.h"

int main() {
    std::string directory;
    std::cout << "Enter directory to index: ";
    std::cin >> directory;

    FileIndexer indexer;
    indexer.buildIndex(directory);

    std::string query;
    std::cout << "Enter search query: ";
    std::cin >> query;

    FileSearch search;
    search.searchFiles(query);
    
    return 0;
}
