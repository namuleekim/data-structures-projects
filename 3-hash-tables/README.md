# CS 271 Project 3 – Hash Tables

Authors: Namu Lee Kim, Huy Phan, Andrew McCutchan  
Date: November 22, 2024  
Language: C++

## 📌 Overview

This project implements and tests multiple custom hash table data structures in C++, including:

- Hash Map (with separate chaining)
- Hash Map using a Red-Black Tree backend
- Set (built from scratch using vectors)
- Custom Hash Functions
- Doubly Linked List (used for chaining)

The goal was to understand the internal mechanics of hash tables and evaluate runtime and distribution performance through empirical testing.

---

## 📂 Project Structure

- `DoublyLinkedList.*` – Doubly linked list class used for chaining
- `HashFunction.*` – Custom hash function implementation
- `HashMap.*` – Core hash map class using chaining
- `HashMapTree.*` – Hash map using Red-Black Tree for chaining
- `RBTree.*`, `RBTreeNode.*` – Red-Black Tree implementation
- `Set.*` – Custom set class built using vectors
- `customexceptions.hpp` – Custom exception handling for hash operations
- `mytests.cpp` – All test cases and performance benchmarking
- `Makefile` – Build configuration for the project

---

## 💡 Design Decisions

- Avoided using the C++ STL set to deepen understanding; opted for a vector-backed implementation instead
- Focused performance analysis on `HashMap` due to time constraints, with limited testing on `Set`
- Built modular components to support flexible testing and substitution of data structures

---

## 📊 Observations

- `HashMap` generally outperformed `Set`, though results may reflect implementation differences more than inherent structural advantages
- For `HashMap`, search operations took the longest; for `Set`, insertion was the slowest, likely due to input scale
- Hash function distribution was visually acceptable, showing consistent value spread across varying input sizes
