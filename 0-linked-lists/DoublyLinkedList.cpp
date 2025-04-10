#include <iostream>
#include <stdlib.h>
#include <string>
#include "DoublyLinkedList.h"
//================================================
//Default constructor
//Parameter : void
//Default constructor that compiler use to create object
//set head and tail pointer to null and size = 0
//Return empty list
//================================================
template <class T>
    DoublyLinkedList<T>::DoublyLinkedList (void) {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
//================================================
//Copy constructor
//Parameter: List of class doublylinkedlist
//perform a deep copy of the list
// Return a list with the exact same item and size.
//================================================
template <class T>
    DoublyLinkedList<T>::DoublyLinkedList (const DoublyLinkedList<T> &List) {
        head = nullptr;
        tail = nullptr;
        size = 0;
        deepCopy(List);
    }
//================================================
//Destructor
//Parameter: void
//loops through the linked list and delete item until
// there is no item. Set size = 0
//================================================
template <class T>
    DoublyLinkedList<T>::~DoublyLinkedList ( void ) {
        Node *current;
        while (head != nullptr) {
            current = head;
            head = head->next;
            delete current;
        }
        size = 0;
    }
//===============================================
/*
Prepend: This adds an element to the beginning of the list
Parameters: item of type T
Returns: nothing
*/
template <class T>
void DoublyLinkedList<T>::prepend(const T &item)
{
    // Create a new node and assign item, previous, and next variables s.t. item is added to front of list.
    Node *newNode = new Node;
    newNode->item = item;
    newNode->previous = nullptr;
    newNode->next = head;

    // Conditionals to check if list is empty or not. If not empty, original head's previous points to newNode.
    if (head != nullptr)
    {
        head->previous = newNode;
    }
    else // if empty list, newnode is head and tail.
    {
        tail = newNode;
    }

    // Update head and size
    head = newNode;
    size++;
}
//===============================================
/*
Append: This adds an element to the end of the list
Parameters: item of type T
Returns: nothing
*/
template <class T>
void DoublyLinkedList<T>::append(const T &item)
{
    // Create a new node and assign item, previous, and next variables s.t. item is added to front of list.
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = nullptr;
    newNode->previous = tail;

    // Conditionals to check if list is empty or not. If not empty, original tail's next points to newNode.
    if (tail != nullptr)
    {
        tail->next = newNode;
    }
    else // if empty list, newnode is head and tail.
    {
        head = newNode;
    }

    //Update tail and size
    tail = newNode;
    size++;
}
//===============================================
/*
Insert: This adds an element to a specified index in the list.
Parameters: item of type T, and int index value. index value should not be negative or exceed that of list size,
or else the method will throw an index out of range error.
Returns: nothing
*/
template <class T>
void DoublyLinkedList<T>::insert(const T &item, int index)
{
    //Checking if index is in bounds
    if (index < 0 || index > size)
    {
        throw out_of_range("index out of range");
    }
    //In this case, prepend.
    if (index == 0)
    {
        prepend(item);
        return;
    }
    //In this case, append.
    if (index == size)
    {
        append(item);
        return;
    }

    // Create a new node to locate insertion point (by looping to index).
    Node *current = new Node;
    for (int i=0; i < index-1; i++)
    {
        current = current->next;
    }

    //Create new node and insert item into list at given index. increment size.
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = current->next;
    newNode->previous = current;
    current->next->previous = newNode; // Assigning the element after newNode to have previous point to newNode.
    current->next = newNode;
    size++;

}
//===============================================
// length()
// parameter: void
// return size of the linkedlist. Prebuilt attribute
//===============================================
template <class T>
    int DoublyLinkedList<T>::length (void) const {
        return size;
    }

//================================================
// empty()
// parameter: void
// return a boolean that is true if list is empty,
// false otherwise.
//================================================
template <class T>
    bool DoublyLinkedList<T>::empty (void) const {
        return size == 0; //(compare size with zero to get answer)
    }

//================================================
// concat()
// parameter: DoublylinkedList Type T List
// return a new list which is the concatination of the two lists
//================================================
template <class T>
    DoublyLinkedList<T> DoublyLinkedList<T>::concat (const DoublyLinkedList<T> &List ) const {
        DoublyLinkedList newlist(*this); //copy constructor the list that calls the method
        Node *current = List.head;
        for (int i =0; i < List.size; i ++) {
            newlist.append(current->item); //loop through and append the second list
            current = current->next;
        }
        
        return newlist;
    }
//==============================================================
// deepCopy
// parameter: DoublylinkedList Type T mylist
// return nothing
// helper function that perform a deep copy of a list. Deep copy
// are independent from the original list so any modification 
// in the original will not be made to the new list as they have
// different pointers
//==============================================================
template <class T>
void DoublyLinkedList<T>::deepCopy (const DoublyLinkedList<T> &mylist) {
    Node* current = mylist.head;
    while (current != nullptr) {
        append(current->item);
        current = current->next;
    }
}

//==============================================================
// remove() emoves the item at the position specified by index.
// Generate an out of range exception if index < 0 or index > size
// Parameter: index > 0 && index < size.
// Return: 
//==============================================================
template <class T>
void DoublyLinkedList<T>::remove(int index)
{
    if (index < 0 || index > size)
    {
        throw out_of_range("Index is out of range");
    }
    Node *current = head;
    for (int i = 0; i < index; i++)
    {
        current = current->next;
    }
    if (current->previous == NULL)
    {
        head = head->next;
        if (head != NULL)
        {
            head->previous = NULL;
        }
        delete current;
    }
    else if (current->next == NULL)
    {
        current->previous->next = NULL;
        tail=current->previous;
        delete current;
    }
    else
    {
        current->previous->next = current->next;
        current->next->previous = current->previous;
        delete current;
    }
    size--;
    if (size == 0) {
        head = NULL;
    }
}

//==============================================================
// search() finds the index of the first instance of item in the list.
// Parameter: 
// Return: index of the found item
//         -1 if item is not found
//==============================================================
template <class T>
int DoublyLinkedList<T>::search(const T &item ) const
{
    Node *current = head;
    int count = 0;
    while(current != NULL && current->item != item) {
        count++;
        current = current->next;
    }

    if (current == NULL || current->item != item)
        return -1;

    // If the integer is present
    return (count);

}

//==============================================================
// operator[] returns a reference to the item at the index position.
// Generate an out of range exception if index < 0 or index > size
// Parameter: index > 0 && index < size.
// Return: item at the index.
//==============================================================
template <class T>
T & DoublyLinkedList<T>::operator[] (int index) 
{
    if (index < 0 || index > size)
    {
        throw out_of_range("Index is out of range");
    }
    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->item;
}

//==============================================================
// operator= assignment operator that deletes current list and calls copy constructor
// Parameter: current list is different from the assigning list
// Return: list with elements from the assigning list
//==============================================================
template <class T>
DoublyLinkedList<T>& DoublyLinkedList<T>::operator= ( const DoublyLinkedList<T> &mylist )
{
    if (this != &mylist) {
        Node *current;
        while (head != NULL) {
            current = head;
            head = head->next;
            delete current;
        }
        deepCopy(mylist);
    }
    return *this;
}
