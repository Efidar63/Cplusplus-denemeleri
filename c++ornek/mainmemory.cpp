#include <iostream>
using namespace std;



class example{
	
	public:
		int x,y;
		example(int mainx=0, int mainy=0){
			this->x=mainx;
			this->y=mainy;
			cout<<"constructor worked."<<endl;
		}
		~example(){
			cout<<"destructor woked."<<endl;
		}
		void print(){
			cout<<"x value: "<<x<<"y value: "<<y<<endl;
		}
		example addexample(example& oth){
			this->x+=oth.x;
			this->y+=oth.y;
			return *this;
		}
};



int main(){
	
	
	example exobj, *exptr;
	exptr=&exobj;
	
	
	exobj.x=5;
	exobj.y=3;
	exobj.print();
	
	
	return ;
}
