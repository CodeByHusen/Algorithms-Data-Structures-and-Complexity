# Comparison of Sorting Methods 📊🧠

This repository contains an implementation and runtime comparison of fundamental **sorting algorithms** using the C programming language. It demonstrates how algorithm performance scales with increasing input size.

## 🧠 Algorithms Implemented

- **Bubble Sort** (currently active)
- **Insertion Sort** (included but commented out)
- **Selection Sort** (included but commented out)

All sorting algorithms work on randomly generated arrays of integers and are tested with increasing array sizes to analyze runtime behavior.

## 🎯 Purpose

This project is designed to:

- Illustrate the **time complexity** of basic sorting algorithms
- Show how sorting performance changes with larger input sizes
- Provide a practical example of using `clock()` to measure algorithm runtime
- Serve as a learning tool for students or anyone interested in performance analysis

## ⚙️ How It Works

1. An array of random integers is generated using `rand()`.
2. The array is sorted using a selected sorting algorithm (default: **Bubble Sort**).
3. The execution time is measured using the `clock()` function from `<time.h>`.
4. Results are printed, showing the number of elements and the CPU time required.

## 📤 Sample Output

CLOCKS_PER_SEC=1000000
    1000     4200
    2000    15300
    3000    33200
