## Read File Example

This example demonstrates how to read the contents of a text file line by line using Qt (Qt6-compatible code).

### 📂 File: `colors.txt`

The file contains a list of color names:

crimson
amber
charcoal
mint
indigo
coral
ivory
olive
peach
plum

### 🧾 Code Overview

The program:

1. Opens the `colors.txt` file in read-only mode.
2. Reads each line using a `QTextStream`.
3. Prints each line to the console.

### 🧱 Technologies Used

- C++ (Qt 6)
- QFile for file handling
- QTextStream for input/output

### ▶️ Example Output

When you run the program, it prints:

crimson
amber
charcoal
mint
indigo
coral
ivory
olive
peach
plum
