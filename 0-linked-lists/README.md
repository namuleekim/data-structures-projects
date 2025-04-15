# CS 271 Project 0 – Doubly Linked List

Authors: Namu Lee Kim, Damian Nguyen, Andrew Nguyen  
Date: September 20, 2024  
Language: C++

## 📌 Overview

This project implements a custom **Doubly Linked List** data structure in C++. It supports key operations such as insertion, deletion, traversal, deep copy, and operator overloading. The implementation demonstrates object-oriented design in C++ using constructors, destructors, and encapsulated logic.

---

## 📂 File Structure

All files are located in the `Group4/` folder:

- `DoublyLinkedList.h` – Header file declaring the class, its methods, and the `ostream` friend overload  
- `DoublyLinkedList.cpp` – Source file implementing all methods  
- `mytests.cpp` – Driver file containing test cases to verify implementation correctness  
- `Makefile` – Automates compilation of the linked list and test file

---

## 💡 Design Decisions

- Implemented a **`deepCopy` helper function** to simplify logic across the copy constructor, assignment operator, and `concat()`  
- Defined the `ostream` `<<` overload directly in the header file as a friend function, since placing the implementation in the `.cpp` caused linking issues  
- Focused on code clarity and modularity to support further extension or integration in later CS 271 projects
