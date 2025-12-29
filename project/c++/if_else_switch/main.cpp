import <iostream>;
import <print>;

using namespace std;

int main(){
	int a  = 5;
	int b {10};

	if (a == 5){
		println("Inside if statement (a == {})", a);
	}

	if (a > 5){
		println("a > 5 (which if)");
	}else if (b == 10){
		println("b == 10 (which else if)");
	}else {
		println("Any other case!");
	}


	switch(a){
		case 4:
			println(" {} == 4 (which sace 4)", a);
			break;
		case 5:
			println(" {} == 5 (within case 6)", a);
		    break;
		default:
			println(" a == {} (within default)", a);
			break;
	}	


	return 0;
}
