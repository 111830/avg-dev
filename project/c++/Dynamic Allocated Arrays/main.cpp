import std;

int main(){
	int arraySize { 8 };
	int* myVariableSizedArray { new int[arraySize] };
	myVariableSizedArray[3] = 2;
}
