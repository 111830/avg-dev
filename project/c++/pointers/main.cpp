import std;

struct Employee
{
	char firstInitial;
	char lastInitial;
	int employeeNumber;
	int salary;
};

int main()
{
	int *myIntegerPointer{nullptr};
	myIntegerPointer = new int;
	*myIntegerPointer = 8;

	/* * The 'new' operator works similarly to 'malloc' in C.
	 * It allocates memory on the Heap for the integer or structure and initializes it.
	 * Essentially, it reserves space in memory and returns a pointer to it,
	 * just like we learned with pointers in C, but with cleaner syntax.
	 */

	Employee *anEmployee{
		new Employee{
			.firstInitial = 'J',
			.lastInitial = 'D',
			.salary = 80'000}};

	std::println("The salary is {}", anEmployee->salary);
	std::println("The salary is {}", (*anEmployee).salary);

	delete myIntegerPointer;
	delete anEmployee;

	return 0;
}
