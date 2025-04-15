# CS 271 Project – Graph Algorithms

Authors: Namu Lee Kim, Huy Phan, Andrew McCutchan  
Date: December 9, 2024  
Language: C++

## 📌 Overview

This project implements a custom `Graph` class in C++ along with traversal algorithms:
- Breadth-First Search (BFS)
- Depth-First Search (DFS)

The purpose was to understand and apply fundamental graph traversal techniques using adjacency lists and recursive design.

---

## 📂 Project Structure

- `Graph.hpp` – Header file defining the `Graph` class and its methods  
- `Graph.cpp` – Implementation of graph methods and traversal algorithms  
- `mytests.cpp` – Testing logic and sample runs  
- `customexceptions.hpp` – Custom exception handling for graph-specific edge cases  
- `Makefile` – Build configuration for compiling the project

---

## 💡 Design Highlights

- Used vectors as local data structures (not globals) to track visited nodes, discovery times, and finish times  
- For DFS, state vectors were passed by reference into a `dfsVisit` helper function for clarity and modularity
