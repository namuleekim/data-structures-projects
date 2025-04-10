//========================================================
// Group4
// Fall 2024
// listdriver.cpp
// This file tests the DoublyLinkedList class.
//========================================================

#include <iostream>
#include "DoublyLinkedList.h"

int main ( void )
{	//test constructor
	DoublyLinkedList<int> 	list1;
	DoublyLinkedList<int> 	list4;
	cout << "list1 = " << list1 << endl;
	//test append
	for ( int i = 1; i <= 10; i++ )
		list1.append(i);
	//test cout with values 
	cout << "list1 = " << list1 << endl;
	//testing copy constructor
	DoublyLinkedList<int> list2(list1);
	cout << "list2 = " << list2 << endl;
	//testing insert and remove and [] operator overload
	list2[2] = 100;
	list1.insert(50,10);
	list1.insert(0,0);
	list1.remove(1);
	cout << "list2 = " << list2 << endl;
	cout << "list1 = " << list1 << endl;


	//testing search function
	
	
	cout << "7 is at position " << list2.search(7) << endl;
	DoublyLinkedList<int> list3;
	cout << "list3 size = " << list3.length() << endl;
	//testing empty function
	if ( list3.empty() )
		cout << "list3 empty\n";
	else
		cout << "list3 not empty\n";
	//testing assingment operator
	list3 = list2;
	cout << "list3 = " << list3 << endl;
	
	//testing size
	cout << "list3 size = " << list3.length() << endl;

	//testing concat
	list4 = list1.concat(list3);
	cout << "list1 = " << list4 <<endl;

	//testing out_of_range error
	try {
		list1.insert(100,100);
	}
	catch (const out_of_range& e) {
		cout << "out of range error. (insert)" << endl;
	}

	try {
		list1.remove(1000);
	}
	catch (const out_of_range& e) {
		cout << "out of range error. (remove)" << endl;
	}

	try {
		list1[100000];
	}
	catch (const out_of_range& e) {
		cout << "out of range error. ([] operator overload)" <<endl;
	}

	
}

