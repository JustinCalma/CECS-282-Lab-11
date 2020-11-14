// Justin Calma
// CECS 282 Lab 11 Problem 1

// Driver function of the program containing the main function

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For accumulator operations
using namespace std;

int main() {                              

	// Define an array of type double
	double arr[] = { 1.1, 2.2, 3.3, 2.2, 4.4 };
	
	// Determine the array size
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "The array size is: " << size << endl;

	// Initialize vector v1 to array arr
	vector<double> v1(arr, arr + size);
	
	cout << endl;
	
	//Display the contents of vector v1
	for (vector<double>::size_type i = 0; i < size; i++) {
		cout << "The value at index " << i << " is: " << v1[i] << endl;
	}
	
	// Sorting the Vector in Ascending order
	sort(v1.begin(), v1.end());
	
	cout << endl;
	
	// Display the content of vector v1 after sorting
	cout << "Vector v1 after sorting..." << endl;
	for (vector<double>::size_type i = 0; i < size; i++) {
		cout << "The value at index " << i << " is: " << v1[i] << endl;
	}
	
	// Reversing the Vector v1
	reverse(v1.begin(), v1.end());
	
	cout << endl;
	
	// Display the content of vector v1
	cout << "Vector v1 after reversing the order..." << endl;
	for (vector<double>::size_type i = 0; i < size; i++) {
		cout << "The value at index " << i << " is: " << v1[i] << endl;
	}	
	
	cout << endl;
	
	// Display the maximum element of vector v1
	const double max = *max_element(v1.begin(), v1.end());
	cout << "The maximum element of vector v1 is: " << max << endl;
	
	cout << endl;
	
	// Display the minimum element of vector v1
	const double min = *min_element(v1.begin(), v1.end());
	cout << "The minimum element of vector v1 is: " << min << endl;
	
	cout << endl;
	
	// Starting the summation from 0
	double sum = accumulate(v1.begin(), v1.end(), 0.0);
	
	// Display the accumulation of all elements in vector v1
	cout << "The summation of all elements in vector v1 is: " << sum << endl;
	
	cout << endl;
	
	// Counts the occurrences of 2.2 from 1st to last element
	const int counts = count(v1.begin(), v1.end(), 2.2);
	
	// Display the counts
	cout << "The number of occurrences of 2.2 within vector v1 is: " << counts << endl;
	
	// Delete second element of vector
	v1.erase(v1.begin() + 1); // + 1 because the second element is located at index 1
	
	cout << endl;
	
	// Display the v1 after erasing the element
	cout << "Vector v1 after deleting the second element..." << endl;
	for (vector<double>::size_type i = 0; i < v1.size(); i++) {
		cout << "The value at index " << i << " is: " << v1[i] << endl;
	}	
	
	cout << endl;
	
	// Remove the duplicate occurrences
	sort(v1.begin(), v1.end()); // To find the unique elements the vector must be sorted
	auto duplicate = unique(v1.begin(), v1.end());
	v1.erase(duplicate, v1.end());
	
	cout << "Vector v1 after deleting the duplicate occurrences..." << endl;
	for (vector<double>::size_type i = 0; i < v1.size(); i++) {
		cout << "The value at index " << i << " is: " << v1[i] << endl;
	}	
		
	// Return 0 to the main function
	return 0;

}
