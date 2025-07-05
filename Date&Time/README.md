# 📅 Date & Time in Qt6 – Practical Examples

This folder explores **how to work with date and time in Qt6** using C++. The examples cover everything from initializing dates, formatting, comparing, working with Julian days, and converting between local/UTC time.

These examples are console-based and use `QTextStream` for output. They're ideal for beginners and intermediate learners who want to understand how Qt handles time-related operations.

---

## 🧠 What You’ll Learn

- ✅ How to use `QDate`, `QTime`, and `QDateTime`
- ✅ Custom and predefined date/time formats
- ✅ Checking date validity and comparing dates
- ✅ Calculating leap years, days between dates, and Julian day numbers
- ✅ Converting time to/from Unix epoch format
- ✅ Displaying time in both UTC and local formats

---

## 📂 File Overview

| File Name                          | Description |
|-----------------------------------|-------------|
| `CurrentDateTimeDisplay.cpp`      | Displays current date and time using `QDate` and `QTime` |
| `CurrentTimeDisplay.cpp`          | Prints only the current system time |
| `CurrentTimeFormatting.cpp`       | Formats current time in various custom ways |
| `CustomDateFormatting.cpp`        | Shows different custom date output formats |
| `DateAndJulianDayDisplay.cpp`     | Prints both Gregorian and Julian dates |
| `DateCalculations.cpp`            | Adds/subtracts days and calculates days to a future date |
| `DateComparison.cpp`              | Compares two dates to see which comes earlier |
| `DateFormatting.cpp`              | Demonstrates different formatting styles with `QDate` |
| `DateTimeToString.cpp`            | Converts `QDateTime` to a formatted string |
| `DateValidityCheck.cpp`           | Checks if given dates are valid using `.isValid()` |
| `DayOfWeekDisplay.cpp`            | Gets the day name from a date using `QLocale` |
| `DaysInMonthAndYear.cpp`          | Gets number of days in a month/year using `daysInMonth()` |
| `HistoricalDatesDifference.cpp`   | Calculates days between historical events and today |
| `LeapYearChecker.cpp`             | Checks which years in a list are leap years |
| `LocalAndUniversalDateTime.cpp`   | Displays current time in both local and UTC formats |
| `UnixTimestampConversion.cpp`     | Converts to/from Unix time (epoch) using `QDateTime` |
| `current_datetime.cpp`            | Retrieves and prints the current system date and time |

---

## ⚙️ Compilation Instructions

If you're using CMake, here's a basic structure to compile any of these:

```cmake
add_executable(current_datetime "Date&Time/current_datetime.cpp")
target_link_libraries(current_datetime Qt6::Core)
