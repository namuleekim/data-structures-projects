# CS 271 Project 2 – Binary Search Trees & Red-Black Trees

Authors: Namu Lee Kim, Jin Seok Youn, Trinity Meckel  
Date: November 7, 2024  
Language: C++

## 📌 Overview

This project implements **Binary Search Trees (BST)** and **Red-Black Trees (RBT)** in C++, including key tree operations such as insertion, deletion, traversal, and rebalancing. The focus was on understanding tree properties, managing dynamic memory, and debugging pointer-heavy structures.

---

## 📂 Project Structure

- `BSTNode.*` – Node class for BST with methods for construction, traversal, min/max, etc.  
- `BST.*` – BST class implementation with insertion, deletion, and basic tree operations  
- `RBTreeNode.*` – Node class for Red-Black Tree with color attribute  
- `RBTree.*` – RBT class with rotation and fixup methods for maintaining balancing properties  
- `mytests.cpp` – Central testing file with custom test cases for both trees  
- `customexceptions.hpp` – Custom exception classes for tree operations  
- `Makefile` – Compiles all components of the project

---

## 💡 Design Decisions

- **Enum class for colors** in RBT made node attributes clearer and more intuitive  
- Used `nullptr` instead of a sentinel NIL node for RBT implementation (for compatibility across node classes)  
- Implemented **uniform documentation style** to support collaboration and version control  
- Shared testing logic across BST and RBT classes using generalized property checks  
- Created `fixup()` methods to enforce RBT invariants after insert/delete operations