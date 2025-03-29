# File Search Engine

A fast and efficient file search engine built with C++ that indexes and searches files **faster than Windows Search!**

## 📌 Features
- **Recursive File Indexing**: Scans and stores file paths in a local index.
- **Fast Search**: Searches files based on filename or extension.
- **Lightweight & Efficient**: Uses a simple text-based index for quick lookups.
- **Cross-Platform**: Works on Windows, Linux, and macOS.


## 🚀 Installation & Compilation
### **1️⃣ Clone the Repository**
```sh
git clone https://github.com/yourusername/FileSearchEngine.git
cd FileSearchEngine
```

### **2️⃣ Compile the Program**
```sh
g++ -std=c++17 -Iinclude -o file_search src/main.cpp src/file_indexer.cpp src/file_search.cpp src/utils.cpp
```

### **3️⃣ Run the Program**
```sh
./file_search
```
Windows users:
```cmd
file_search.exe
```

## 📖 Usage
1. **Enter the directory** you want to index.
2. **Enter a filename or keyword** to search.
3. The program returns a list of matching files.

## 🔧 Future Enhancements
✅ Multi-threaded search for faster performance.
✅ Content-based search (search inside files).
✅ SQLite-based indexing for large datasets.

## 🛠️ Contributing
Contributions are welcome! Feel free to submit PRs to improve the project.


