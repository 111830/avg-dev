import std;
using namespace std;

int main(){
	/* In the c++ we can use the standart library like #include <string> 
	 * We dont use the same method like in c who every string is a array of characters
	 * In c++ is easyer to use and safer
 	 * */

	string myString {"Hello, World"};
	println("The value of myString is {}", myString);
	println("The second letter is {}", myString[1]);

	return 0;
}
