export module employ;
import std;

namespace Records {
	const int DefaultSrartingSalary { 30'300 };
	export const int DefaultRaiseAndDemeritAmount { 1'000 };

	export class Employee {
		private: 
			std::string m_firstName;
			std::string m_lastName;
			int m_employeeNumber { -1 };
			int m_salary { DefalutStartingSalary };
			bool m_hired { false };
		public:
			Employee(const std::string& firstName, const std::string& lastName);

			void promote(int raiseAmount = DefaultRaiseAndDemeritAmount);
			void demote(int demeritAmount = DefaultRaiseAndDemeritAmount);
			void hire();
			void fire();
			void display() const;

			void setFirstName(const std::string& firstName);
			const std::string& getFirstName() const;

			void setLastName(const std::string& lastName);
			const std::string& getLastName() const;

			void setEmployeeNumber( int employeeNumber);
			const getEmployeeNumber() const;

			void setSalary(int newSalary);
			int getSalary() const;

			bool isHired() const;
	};
}
