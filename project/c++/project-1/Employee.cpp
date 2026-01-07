module employee;
import std;
using namespace std;

namespace Records {
	Employee::Employee(const string& firstName, const string& lastName)
		: m_firstName { firstName }, m_lastName { lastName }
	{
	}

	void Employee::promote(int raiseAmount){
		setSalary(getSalary() + raiseAmount);
	}
