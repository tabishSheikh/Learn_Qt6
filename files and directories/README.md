### 📁 Files & Directories in Qt6 – Practical Examples  
This folder covers how to handle files and directories using Qt6. These examples include reading/writing files, working with metadata, checking permissions, and creating or listing directories.

All examples are console-based and use `QTextStream` for output. They're great for beginners exploring file handling and directory operations in Qt with C++.

---

### 🧠 What You’ll Learn  
✅ Reading from and writing to files using `QFile` and `QTextStream`  
✅ Getting file metadata like size, path, suffix, and ownership  
✅ Checking and displaying file permissions  
✅ Copying, renaming, and creating files/directories  
✅ Listing files and folders with sorting and formatting  
✅ Printing standard paths (home, temp, current, root)

---

### 📂 File Overview  

| File Name               | Description |
|-------------------------|-------------|
| `writeFile.cpp`         | Writes a list of Linux distros to a file using `QTextStream` |
| `readFile.cpp`          | Reads lines from a file and prints them to the console |
| `fileSizeChecker.cpp`   | Prints the size of a file in bytes |
| `fileOwner.cpp`         | Displays the owner and group of a file |
| `fileTimes.cpp`         | Shows the last read and last modified time of a file |
| `fileInfo.cpp`          | Displays detailed file info like path, suffix, and base name |
| `filePermissions.cpp`   | Outputs file permissions in `rwxrwxrwx` format |
| `copyFile.cpp`          | Copies a file from source to destination |
| `dirOperations.cpp`     | Creates, renames, and creates nested directories |
| `pathInfo.cpp`          | Prints common Qt system paths (home, temp, etc.) |
| `listDir.cpp`           | Lists files and directories sorted by size with formatting |

---

### ⚙️ Compilation Instructions  
If you're using CMake, here's a basic structure to compile any of these:

```cmake
add_executable(readFile "FilesAndDirectories/readFile.cpp")
target_link_libraries(readFile Qt6::Core)
