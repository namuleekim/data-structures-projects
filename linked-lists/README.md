# Project0-cs271 Doubly Linked List
List of contributors: Namu Lee Kim, Damian Nguyen, Andrew Nguyen\
This project is an implementation of the data structure Doubly Linked List. It includes a constructor, copy constructor, destructor and in total 11 methods & operators overload. The entirety of the project is in a parent folder named "Group4". Besides this md file, the project consists of 4 different files which are:
- DoublyLinkedList.h: This is the header file that defines all the methods and function. It also includes the friend fuction for ostream overload.
- DoublyLinkedList.cpp: This is a C++ file that implements all the methods and function.
- mytests.cpp: This is a driver that has the test case.
- makefile: This is a series of Linux commands that compiles DoublyLinkedList.h and DoublyLinkedList.cpp to make a Doublylinkedlist object and compile mytests.cpp to test the correctness of the implementation.

In the design process, we have decided to write a helper function deepCopy that does a deep copy of a Doublylinkedlist object. This is to save time in functions like copy constructor, concat, etc... We tried to define the friend ostream overload function in the header file and implement it in the .cpp file but it didn't work so we kept the friend function inside the header file. I think this is because since it is not a member of a class but a friend of the class so it cannot be done in similar manner like that of methods. 


