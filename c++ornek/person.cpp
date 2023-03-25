#include <iostream>
using namespace std;

class person{
	public:
		string personname, personsurname;
	public:
		person(string name="",  string surname=""){
			personname=name;
			personsurname=surname;
			cout<<"person constructor worked."<<endl;
		}
		string getpersonname() const { return personname;};
		string getpersonsurname() const{return personsurname};
		void setpersonname( string name){personname= name;};
		void setpersonsurname( string surname){personsurname=surname;};
		void printf(){
			cout<<"name: "<<personname<<endl;
			cout<<"surname: "<<personsurname<<endl;
		}
};

class student:public person{
	private:
		int studentid, studentgrade;
		bool passorfail;
	public:
		student(string name, string surname, int id): person(name, surname){
			studentid=id;
			cout<<"student constructor worked."<<endl;
		}
		int getstudentid() const{return studentid;};
		void setstudentid(int id){studentid= id;};
		int getstudentgrade() const{return studentgrade;};
		void setstudentgrade(int grade){studentgrade=grade;};
		int setpassorfail()  const {return passorfail;};
		void setpassorfail(bool passfail){passorfail=passfail;};
		void print();
		person::printf();
		cout<<"id: "<<stduentid<<endl;
		cout<<"grade: "<<studentgrade<<endl;
};

class teacher: public person{
	private:
		string department;
	public:
	    teacher(string name, string surname, string dep): person(name, surname){
	    	department=dep;
	    	cout<<"teacher constructor worked."<<endl;
		}	
		tring getdepartment() const{return department;};
		void setdepartment(string dep){department=dep;};
		void print(){
			person::printf();
			cout<<"departmen: "<<department<<endl;
		}
		void passfailstatus(student* studentarray);
		void printstudentinformation(student* stduentarray);
};


void teacher::passfailstatus(student* studentarray){
	float average=0.0;
	for(int i=0; i<sizeof(studentarray); i++){
		average+=studentarray[i].getstudentgrade();
	}
	average=(float) average/sizeof(stduentarray);
	cout<<"class average: "<<average<<endl;
	cout<<"------------------------"<<endl;
	
	for(int i=0; i<sizeof(studentarray); i++){
		if(studentarray[i].getstudentgrade()>=average){
			studentarray[i].setpassorfail(true);
		}
		else{
			studentarray[i].setpassorfail(false);
		}
	}
}

void teacher::printstudentinformation(student* studentarray){
	for(int i=0; i<sizeod(studentarray);i++){
		stduentarray[i].print();
		if(stuedntarray[i].setpassorfail()==true){
			cout<<"status: pass"<<endl;
		}
		else{
			cout<<"status: fail"<<endl;
		}
		cout<<"---------------------------"<<endl;
	}
}

inst main(){
	srand(time(NULL));
    Student studentArray[] = { {"Ogun","Birinci",1000},{"Duygu","Keydal",1001},{"Eda","Deniz",1002,},{"Burak","Ikinci",1003} };
    Teacher teacher1("Oguz", "Birinci", "Software");

    for (int i = 0; i < 4; i++) {
        studentArray[i].setStudentGrade(rand() % 100 + 1);
        studentArray[i].print();
    }

    teacher1.passFailStatus(studentArray);
    teacher1.printStudentInformation(studentArray);
   */
	return ;
}





























