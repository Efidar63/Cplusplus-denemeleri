#include <iostream>
using namespace std;

class baseclass{
	public:
		int x;
		void setx(int mainx){x=mainx;}
		int getx() const{return x;}
		void print(){cout<<"x: "<<x<<endl;}
		baseclass( int mainx=0){
		x=mainx;
		cout<<"baseclass constructor worked."<<endl;
		}
		~baseclass(){
			cout<<"baseclass destructor worked."<<endl;
		}
		baseclass(const baseclass& oth){
			x=oth.x;
			cout<<"baseclass copyconstructor worked."<<endl;
		}
};
class drivedclass: public baseclass{
	public:
		int y;
		void sety(int mainy){y=mainy;}
		int gety() const{return y;}
		void print(){
			baseclass::print();
			cout<<"y: "<<y<<endl;
		}
		drivedclass(int mainx=0, int mainy=0):baseclass(mainx){
			y=mainy;
			cout<<"drivedclass constructor worked."<<endl;
		}
		~drivedclass(){
			cout<<"drivedclass destructor worked."<<endl;
		}
		drivedclass(const drivedclass& oth){
			x=oth.x;
			y=oth.y;
			cout<<"drivedclass copy consturctor worked."<<endl;
		}
};

class aclass{
	public:
		int a;
		aclass(){
			cout<<"aclass constructor  worked."<<endl;
		}
		~aclass(){
			cout<<"aclass destructor worked."<<endl;
		}	
};

class bclass{
	public:
		int b;
		bclass(){
			cout<<"bclass constructor  worked."<<endl;
		}
		~bclass(){
			cout<<"bclass destructor worked."<<endl;
		}	
};

class cclass:protected bclass, protected aclass{
	public:
		cclass():aclass(){
			cout<<"cclass constructor worked."<<endl;
		}
		~cclass(){
			cout<<"class destructor worked."<<endl;
		}
};

int main(){
	baseclass obj1(5);
	drivedclass obj2(8,3);
	drivedclass obj3(obj2);
	
	obj1.print();
	obj2.print();
	
	cout<<"for base: x: "<<obj1.getx()<<endl;
	cout<<"for drived: x: "<<obj2.getx()<<"y: "<<obj2.gety()<<endl;
	
	cclass cobject;
	
	
	
	
	return 0;
}





