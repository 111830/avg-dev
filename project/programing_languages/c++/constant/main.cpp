import std;


void mysteryFunction(const string* someString){ // and if it's not a pointer function again dont allowed to change the value.
	*someString = "Test"; // Will not compile
}

int main(){
	const int* ip = new int(10);
	*ip = 5; //ERROR! Not allowed to changes value.
	ip = new int; //OK! Allowed to change the addres .
	

	int* const ip2 = new int(10);
	*ip2 = 5; //OK! The value inside can change.
	ip = new int; //ERRORE! Not allowed to change the addres.
	

	const int* const ip = new int(10);
	*ip = 5; //ERROR!I`
	ip = new int; //ERROR!
	

	/* For easy-to-remember you can read from right to left
	 * int* const ip "ip is a const pointer to an int" 
	 * */

	string myString {"The string"};
	mysteryFunction(&myString); //&myString is a string*

	return 0;
}


