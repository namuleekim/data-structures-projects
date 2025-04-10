//=============================================
//Group4
//DoublyLinkedList header file
//Contains all methods definition of the doublylinked list 
//=============================================

#include <iostream>
#include <string>
using namespace std;

#ifndef LIST_H
#define LIST_H



template <class T> 
class DoublyLinkedList
{
private:
	struct Node
	{
		T		item;
		Node 	*next;
		Node    *previous;
	};
	
	Node	*head;
	Node 	*tail; 
	int size;
	void deepCopy (const DoublyLinkedList<T> &mylist);
public:
		DoublyLinkedList			( void );
		DoublyLinkedList			( const DoublyLinkedList<T> &List );
		~DoublyLinkedList			( void );
void					prepend     	( const T &item );
void					append		( const T &item	);
void					insert		( const T &item, int index );
void					remove		( int index );
int 					search		(const T &item ) const;
T &					operator[]	( int index );
DoublyLinkedList<T>&			operator=	( const DoublyLinkedList<T> &mylist );
int					length		( void ) const;
bool					empty		( void ) const;
DoublyLinkedList<T>			concat		( const DoublyLinkedList<T> &List ) const; 

friend ostream & operator<< ( ostream &os, DoublyLinkedList<T> &List ) {
	Node *ptr = List.head;  // Access Node type from the template class

    while (ptr != nullptr) {
        os << ptr->item;
        if (ptr->next != nullptr) {
            os << " ";  // Add space only between items
        }
        ptr = ptr->next;
    }
    
    return os;
} 

};


#include "DoublyLinkedList.cpp"

#endif


