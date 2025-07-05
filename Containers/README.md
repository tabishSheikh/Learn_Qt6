# 📦 Qt6 Containers – Practical Examples

This section of the repository is focused on exploring **Qt6 container classes** — some of the most useful tools for managing data in modern C++ development with Qt. These examples are beginner-friendly, concise, and meant to help you understand how to use containers like `QVector`, `QList`, `QSet`, `QMap`, and `QStringList` in real scenarios.

Whether you're just starting out with Qt or brushing up on your skills, these examples will give you a strong foundation in working with container types the Qt way.

---

## 📚 What You'll Learn

- ✅ How to use core Qt6 containers to store, sort, and access data
- ✅ Basic operations like appending, prepending, merging, and iterating
- ✅ How to sort custom class objects stored in Qt containers
- ✅ How to use `QTextStream` for clean console output with `Qt::endl`
- ✅ The difference between containers like `QList` and `QSet`

---

## 📂 Files & Examples

Here’s a breakdown of each file and what it covers:

| File / Folder                   | Description |
|-------------------------------|-------------|
| `QVector_Basics.cpp`           | Basic usage of `QVector<int>` – adding, accessing, and iterating |
| `QList_Sorting.cpp`            | Sorting a list of strings using `std::sort` and `QList<QString>` |
| `QSet_Union_Sort.cpp`          | Performing union of two `QSet<QString>` and sorting the result |
| `QMap_Keys_Values.cpp`         | Working with key-value pairs using `QMap<QString, int>` |
| `QStringList_Iteration.cpp`    | Splitting a string and iterating through the list using `QStringListIterator` |
| `CustomSorting/`               | Sorting custom `Book` class objects stored in a `QList<Book>` using `std::sort` |

---

## ⚙️ How to Compile & Run

These examples are designed to work with **CMake** and **Qt6**. If you're using your own `CMakeLists.txt`, just include each file like this:

```cmake
add_executable(qvector_basics "Containers in Qt6/QVector_Basics.cpp")
target_link_libraries(qvector_basics Qt6::Core)

