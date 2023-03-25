#include <iostream>
using namespace std;



class array{
	protected:
		int* data;
		int size;
		int capacity;
	public:
		array(int usercapacity=5){
			capacity=usercapacity;
			data= new int [capacity];
			size=0;
			cout<<"new int array is created with capacity"<<capacity<<endl;
			
		}
		~array(){
			delete[] data;
			cout<<"array destroyed."<<endl;
		}
		array(const array& copyarray){
			size=copyarray.size;
			capacity=copyarray.capacity;
			data = new int[capacity];
			for( int i=0; i<copyarray.size; i++){
				data[i]=copyarray.data[i];
			}
			cout<<"array copied to target"<<endl;
		}
		void printitems(){
			if(size!=0){
				for( int i=0; i<size; i++){
					cout<<data[i]<<endl;
				}
			}
			cout<<"\n"<<"capacity= "<<capacity<<"size= "<<size<<endl;
		}
		void removeindexitems(int index){
			if(index<0 || index>capacity){
				cout<<"ERROR no item at the index "<<endl;
				return;
			}
	
			for(int i= index; i<size; i++){
			data[i]=data[i+1];
			}
			size-=1;
			cout<<"item is succesfully deleted"<<endl;
			}
		void removeitem(int number){
			int counter =0;
			for(int i=0; i<=size; i++){
				if(data[i]==number){
					for(int j=i; j<size; j++){
						data[j]=data[j+1];
					}
					counter+=1;
				}
			}
			cout<<counter<<"items ("<<number<<")"<<"are deleted from the array"<<endl;
			size-=counter;	
			}
			int findindex(int a, int b=0){
			for(int i=b; i<size; i++){
				if(data[i]==a){
					return i;
				}
			}
			return -1;
			}
		
		void additem(int number){
			if(capacity==size){
				int* tempdata=new int [capacity * 2];
				for(int i=0; i<size; i++){
					tempdata[i]=data[i];
				}
				delete[] data;
				data=tempdata;
				capacity *=2;
			}
			data[size]= number;
			size++;
		}	
};


class unsortedarray :public array{
	public:
		unsortedarray(int usercapacity=5) :array(usercapacity){	};
		unsortedarray(const unsortedarray& oth) :array(oth){};
		void printitems(){
			cout<<"unsortdearray: "<<endl;
			array::printitems();
		}
};

class sortedarray: public array{
	public:
		sortedarray(int usercapacity=5) :array(usercapacity){	};
		sortedarray(const unsortedarray& oth) :array(oth){};
		void additem(int number){
			int i;
			if(capacity==size){
				int* tempdata=new int[capacity * 2];
				for(int i=0; i<size; i++){
					tempdata[i]=data[i];
				}
				delete[] data;
				data=tempdata;
				capacity*= 2;
			}
			for(i=size-1;(i>=0 && data[i]>number); i--){
				data[i+1]=data[i];
			}
			data[i+1]=number;
			size++;
		}
		void printitems(){
			cout<<"sorted array: "<<endl;
			array::printitems();
		}
		
};

	int main(){
		
		unsortedarray usarray(10);
		sortedarray  sarray(10);
		
		usarray.additem(10);
		usarray.additem(15);
		usarray.additem(18);
		usarray.additem(8);
		usarray.additem(20);
		usarray.additem(150);
		usarray.removeindexitems(0);
		usarray.removeitem(15);
		cout<<usarray.findindex(10)<<endl;
		usarray.printitems();
	
		
		return 0;
	}























