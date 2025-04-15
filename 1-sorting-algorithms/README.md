# CS 271 Project 1 – Sorting Algorithms

Authors: Namu Lee Kim, Jin Seok Youn, Trinity Meckel  
Date: October 14, 2024

## 📌 Overview

This project implements and tests five classic sorting algorithms in C++:
- Insertion Sort  
- Merge Sort  
- Quick Sort  
- Improved Quick Sort (median-of-three pivot)  
- Randomized Quick Sort  

The goal was to compare performance across algorithms using different input conditions and array types, including worst-case scenarios.

---

## 📂 File Structure

- `sorting.hpp` – Declarations of all sorting algorithms and method signatures  
- `sorting.cpp` – Implementations of all sorting methods and helper functions (templated for generic data types)  
- `mytests.cpp` – Custom test cases for each algorithm across various array sizes and data types  
- `Makefile` – Build instructions for compiling the project  

---

## 💡 Design Highlights

- Modular helper functions simplified algorithm development and testing  
- Uniform method signatures enabled streamlined test cases  
- Performance testing included worst-case inputs (descending arrays)  

---

## 🧪 Observations

- Standard Quick Sort outperformed both its improved and randomized variants  
- All algorithms struggled significantly with reversed arrays (worst-case behavior)  
- Merge Sort required careful restructuring due to parameter constraints  