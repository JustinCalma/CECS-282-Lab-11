// Justin Calma
// CECS 282 Lab 11 Problem 2

// Driver file for the program containing the main function

// listplus.cpp
// demonstrates reverse(), merge(), and unique()

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// Driver function of the program
int main() {

	// Create 2 lists called list1 and list2. Store integer numbers.
	int arr1[] = { 40, 30, 20, 10 };
	int arr2[] = { 15, 20, 25, 30, 35 };
	
	// Determine the array size of arr1 and arr2
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	cout << "The size of arr1 is: " << size1 << endl;
	
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	cout << "The size of arr2 is: " << size2 << endl;
	
	// Push elements of array arr1 into list1
	list<int> list1;
	for (int i = 0; i < size1; i++) {
		list1.push_back(arr1[i]);
	}

	// Push elements of array arr2 into list2
	list<int> list2;
	for (int i = 0; i < size2; i++) {
		list2.push_back(arr2[i]);
	}	
	
	
	// Reverse list1: 10 20 30 40
	list1.reverse();
	
	// Merge list2 into list1
	list1.merge(list2);
	
	// Remove duplicate 20 and 30 from list 1
	list1.unique();
	
	cout << endl;
	
	// Diplay the content of list1 using iterator
	int count = 0;
	cout << "Printing list1..." << endl;
	for (list<int>::iterator i = list1.begin(); i != list1.end(); i++) {
		cout << "The value at index " << count++ << " is: " << *i << endl;
	}
	
	cout << endl;
	
	// Display the list1 in reverse
	list1.reverse();
	cout << "Printing list1 in reverse order..." << endl;
	for (list<int>::iterator i = list1.begin(); i != list1.end(); i++) {
		cout << "The value at index " << count++ << " is: " << *i << endl;
	}	
	
	cout << endl;
	
	// Find 25 in the list. If it's found, display "Found 25";otherwise, display "Did not find 25"
	list<int>::iterator found;
	found = find(list1.begin(), list1.end(), 25); // Finds the address that holds value 25
	if( found != list1.end() ) // If the iterator does not equal the end of the list
		cout << "Found 25" << endl;
	else {
		cout << "Did not find 25" << endl;
	}
	                           
	// Return 0 to main
	return 0;

}
