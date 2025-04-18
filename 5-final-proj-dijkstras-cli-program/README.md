# Computing-shortest-paths-with-Dijkstras
## How to Run
To run this program, first make sure you have a file with data to be read in this directory. There are already some files in here to test, but if you would like to test your own, the file should follow this format: <br>
    n m <br>
    ID_1 x_1 y_y <br>
    ... <br>
    ID_n x_n y_n <br>
    u_1 v_1 w_1 (s_1)* <br>
    u_m v_m w_m (s_m)* <br>
In this format, n is the number of verteces and m is the number of edges. The following n lines are data for each vertex, ID being the node ID x and y being its coordinates. Then, the following m lines are edge pairs and their weights. U and V are node IDs and W is their respective weight. S is an optional parameter, a string for a name to be assiciated with the edge (e.g. street name). Our program however does not currently support a way to display street names yet. <br>
<br>
To run the program, simply type "make run" in a terminal. You will then be prompted to insert a file name, if no such file exists in the directory, the program will quit and you will have to insert a file and run again, or run again and fix any typos you might have had. After this you will be prompted to enter a start coordinate from the given file and an end coordniate. If the coordinate doesn's exist, or it was entered incorrectly, you will be continuously prompted until you enter a corret one. After you enter a valid start and end, the shortest path between the two will be displayed as: <br>
    The shortest path from (x_start, y_start) to (x_end, y_end) is: <br>
    (x_start, y_start) -> ... -> (x_end, y_end) with a weight of: &lt;Path weight&gt; <br>
You can then enter more coordinates or click q at anytime to quit.

# CS 271 Final Project – Dijkstra’s Algorithm on Weighted Graphs

Authors: Namu Lee Kim, Andrew McCutchan  
Date: December 18, 2024  
Language: C++

## 📌 Overview

This project implements Dijkstra’s shortest path algorithm using a custom weighted graph and priority queue in C++. The application features a CLI interface that allows users to load campus map data and compute shortest paths between nodes on Denison’s campus.

---

## 📂 File Structure

- `weightedGraph.hpp / .cpp` – Weighted graph class with Dijkstra's algorithm implementation  
- `priorityQueue.hpp / .cpp` – Custom priority queue used for efficient edge selection  
- `mytests.cpp` – Contains both test cases and the command-line interface logic  
- `denison.out` – Main dataset: graph representation of Denison campus  
- `testData.txt` – Smaller sample dataset for testing  
- `Makefile` – Compiles and runs the program  
- `customexceptions.hpp` – Custom error handling for graph operations  
- `README.md` – Instructions and project overview

---

## 💡 Design Decisions

- **Data Simplification**: Street names were excluded to streamline parsing  
- **Adjacency List Update**: Refactored to use `std::map<int, pair<parent, distance>>` for fast lookup and cleaner logic  
- **CLI Architecture**: Built using `getline()` for input stability (to avoid `cin` conflicts)  
- **Single Driver File**: Testing and UI coexist in `mytests.cpp` for easy access and portability
