import <iostream>;
import <print>;
#include <array>
#include <cstddef>
#include <vector>

using namespace std;

int main(){
	// Array in c 
	int	myArray1[3];
	myArray1[0] = 2;
	myArray1[1] = 3;
	myArray1[2] = 4;
	println("Let we see the value array1[2]: {}", myArray1[2]);
	println("Let we see the value array1[1]: {}", myArray1[1]);

	// We can initialize all of them by using a loop but we discat them later 
	// we can overite and do some changes in ours code 
	int myArray2[3] = {0};
	println("Let we see the value array2[2]: {}", myArray2[2]);
	int myArray3[3] = {}; // all this 2 lines tll us the value in pozi3 is 0
	println("Let we see the value array3[0]: {}", myArray3[0]);
	int myArray4[3] {}; // the equal signe is optional so we can modifie array like this
	println("Let we see the value array4[1]: {}", myArray4[1]);
	int myArray5[] {1, 2, 3, 4}; // The compiler cretes an array of 4 elements
	println("Let we see the value array5[3]: {}", myArray5[3]);

	// In the most modern c++ we use this methods
	size_t madhsia { size(myArray5) };
	println("{}", madhsia);

	// How to find the size of the aray in c we use this mothods this methods return the size of its argument in bytes.
	int size = sizeof(myArray5) / sizeof(myArray5[0]);
	println("{}", size);

	// And for the new type of array is like this 
	array<int, 3> arr {9, 8, 7};
	println("Array size = {}", arr.size());
	println("2nd element = {}", arr[1]);

	// In the array we have the fixed size which must known at compile time they cannot grw or shrink at run time. If you want a array with dynamic size its recommended to use vestors 
	
	vector<int> myVector {11, 22};

	myVector.push_back(33);
	myVector.push_back(44);

	println("First element: {}", myVector[0]);

	return 0;
}
