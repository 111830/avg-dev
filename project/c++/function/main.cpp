import <iostream>;
import <print>;

using namespace std;

// Void function dont returne any values in the main function 
// Ue can use another methods for returning tha value we can use type decution
// like auto <name_function>(...) and let the compiler to figure out what is the 
// type of function automaticly.
void myfunction(int i, char c){
	println("The value of i is {}.", i);
	println("The value of c is {}.", c);
}

// Int value that return the sum of two numbers
int addNumbers(int number1, int number2){
	println("Entering function {}", __func__);// This is a local predefindet variable containing the name of the functions.
	return number1 + number2;
}

// This is a overloading function this means a function means providing several
// functions with the same name but with a differentset of parameters
int addNumbers2(int a, int b){ return a + b; }
double addNumbers2(double a, double b){ return a + b; }

int main(){
	int someInt {6};
	char someChar {'c'};
	myfunction(8, 'a');
	myfunction(someInt, someChar);

	int sum { addNumbers(5, 3)};
	println("The sum of 5 + 3 = {}", sum);

	println("{}", addNumbers2(1, 2));
	println("{}", addNumbers2(1.11, 2.22));

	return 0;
}
