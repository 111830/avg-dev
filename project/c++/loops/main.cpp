import <iostream>;
import <print>;

using namespace std;

int main(){
	// While Loops
	int i {0};
	while (i < 5){
		println("This is silly.");
		++i;
	}

	// do/while Loop
	i = {100};
	do{
		println("This is silly.");
		++i;
	} while (i < 5);


	// For loop
	for(int i {0}; i < 5; i++){
		println("This is silly.");
	}

	// Ranke-Based for loop
	array arr {1, 2, 3, 4, 5};
	for (int i : arr) {
		println("{}", i);
	}

	return 0;
}	
