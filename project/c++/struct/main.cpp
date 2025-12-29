import <iostream>;
import <print>;
import employee; // Import our employee module
using namespace std;
int main()
{
    // Create and populate an employee.
    Employee anEmployee;
    anEmployee.firstInitial = 'J';
    anEmployee.lastInitial = 'D';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;
    // Output the values of an employee.
    println("Employee: {}{}", anEmployee.firstInitial, anEmployee.lastInitial);
    println("Number: {}", anEmployee.employeeNumber);
	println("Salary: ${}", anEmployee.salary);
}
