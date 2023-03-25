#include <iostream>
using namespace std;

class Employee {
public:
	string empName, empSurname;
	double empSalary;
	Employee(string name, string surname, double salary) {
		empName = name;
		empSurname = surname;
		empSalary = salary;
	}	
	virtual ~Employee() {
		cout << "Employee destructor worked." << endl;
	}
	 virtual void displayInformation() {
		cout << "Name:" << empName << endl;
		cout << "Surname:" << empSurname << endl;
		cout << "Salary:" << empSalary << endl;
	}
};

class Manager :public Employee {
public:
	string mngDepartment;
	Manager(string name, string surname, double salary, string department) :Employee(name, surname, salary) {
		mngDepartment = department;
	}
	~Manager() {
		cout << "Manager destructor worked." << endl;
	}
	void displayInformation() {
		Employee::displayInformation();
		cout << "Department:" << mngDepartment << endl;
	}
	void increaseSalary() {
		empSalary += 200;
	}
};
/*

//reference
	void print(employe& employetype){
		employetype.displayinformation();
	}
	
//pointer
	void print2(employe* employetype){
		employetype.displayinformation();
	}
//value
	void print3(employe employetype){
		employetype.displayinformation();
	}


	class animal{
		public:
			virtual void talk()=0;
	};
	
	class dog:public animal{
		public:
			void talk(){
				cout<<"hav hav"<<endl;
			}
	};
	
	class cat:public animal{
		public:
			void talk(){
				cout<<"meow meow"<<endl;
			}
	};
	
	class duck:public animal{
		public:
			void talk(){
				cout<<"vak vak"<<endl;
			}
	};


*/


int main(){
	
	Employee* emp1, * emp2;
    Manager mng("Ogun", "Birinci", 3500, "Software");
    Employee emp3("Duygu", "Keydal", 4000);

    emp1 = &mng;
    emp2 = &emp3;
    emp1->displayInformation();
    emp2->displayInformation();

    mng.displayInformation();
	return 0;
}
