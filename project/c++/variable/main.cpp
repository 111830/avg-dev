import <iostream>;
import <print>;
using namespace std;
#include <limits>

int main(){
	int uninitializedInt;
	int initializedInt {7};
	/* * This is an uninitialized variable. It takes whatever value is currently in memory.
	 * The system interprets those existing bits as a number (garbage value),
	 * which is a source of countless bugs.
	 **/

	println("{} is a random value", uninitializedInt);
	println("{} was assigned as an initail value", initializedInt);

	// <limits> is a standard library used to find the maximum and minimum values that a data type can hold.

	println("int: ");
	println("Max int value: {}", numeric_limits<int>::max());
	println("Min int value: {}", numeric_limits<int>::min());
	println("Lowest int value: {}", numeric_limits<int>::lowest());

	println("\ndouble: ");
	println("Max double value: {}", numeric_limits<double>::max());
	println("Min double value: {}", numeric_limits<double>::max());
	println("Lowest double value: {}", numeric_limits<double>::lowest());

	// Variables can be initialized to 0 with {0} or  with a zero initializer {}
	int myInt {};
	println("My int: {}", myInt);


	//Variables can be converted to other types by casting them. the first method is haldover for c is not recomandet but still commonly use, the second is rarely use and the third methods is most vebose but is also the cleanest and therefore recommended.
	 float myFloat {3.14};
	 int i1 {(int)myFloat}; // method 1
	 int i2 { int(myFloat)}; // method 2
	 int i3 { static_cast<int>(myFloat)}; // method 3

	return 0;
}


