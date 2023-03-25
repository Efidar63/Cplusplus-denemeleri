#include <iostream>
using namespace std;
/*
	class dikdortgen
	{
		int en,boy;
		public:
			dikdortgen(int e, int b)
			{
				en=e;
				boy=b;
			}
			int alan()
			{
				return en*boy;
			}
	};



int main( ) {
	
	dikdortgen x(10,2);
	cout<<"alan= "<<x.alan()<<endl;
	
	
	
	
	return 0;
}


------------------------------------------------------------------

	class nokta
	{
		int x,y;
		public:
			nokta(int a=0, int b=0)
			{
				x=a;
				y=b;
			}
			int xal()
			{
				return x;
			}
	};

	int main()
	{
		nokta bir(5,4);
		nokta iki(10);
		nokta uc;
		cout<<"bir x in koordinati: "<<bir.xal()<<endl;
		cout<<"iki x in koordinati: "<<iki.xal()<<endl;
		cout<<"uc x in koordinati: "<<uc.xal()<<endl;
		return 0;
	}




--------------------------------------------------------------------------------



#include <string>

	class eleman
	{
		int no;
		string isim;
		public:
			eleman(){};
			eleman(int,string);
			void noata(int _no){no=_no;}
			int noal(){return no;}
			void isimata(string _isim){isim=_isim;}
			string isimal(){return isim;}
			void yaz()
			{
			cout<<"isim: "<<isim<<" no: "<<no<<endl;
			}
	};
	eleman::eleman(int i,string s)
	{
		no=i;
		isim=s;
	}
	
	int main(){
	eleman e1;
	eleman e2(123,"ali");
	int no;
	string isim;
	cout<<"elemanin numara ve ismini giriniz: ";
	cin>>no>>isim;
	e1.noata(no);
	e1.isimata(isim);
	e1.yaz();
	e2.yaz();
		return 0;
	}



-------------------------------------------------------------------



	class a
	{
		int no;
		public:
			a();
			a(a &par);
	};
	
	a::a()
	{
		no =0;
		cout<<"varsayilan yapici: "<<endl;
	}
	a::a(a &par)
	{
		no=par.no;
		cout<<"kopya yapici: "<<endl;
	}


	int main()
	{
		a a1;
		a a2(a1);
		a a3=a2;
		
		return 0;
	}



----------------------------------------------------------------------------------


	class rasyonel
	{
		int pay,payda;
		public:
		rasyonel(int x, int y):pay(x),payda(y){} 
		int payal(){return pay;}
		int paydaal(){return payda;}
		rasyonel carp(rasyonel &);
	};
	
	rasyonel rasyonel::carp(rasyonel& r)
	{
		int a=r.payal();
		int b=r.paydaal();
		return rasyonel(pay*a,payda*b);
		
	}
	
	int main()
	
	{
	rasyonel s(1,3),t(4,5);
	rasyonel son=s.carp(t);
	cout<<s.payal()<<"/"<<s.paydaal();
	cout<<" * "<<t.payal()<<"/"<<t.paydaal();
	cout<<" = "<<son.payal()<<"/"<<son.paydaal()<<endl;
	return  0;
	}



---------------------------------------------------


	class eleman
	{ 
	int no;
	public:
		eleman(int=0);
		~eleman();
	}; 
	
	eleman::~eleman()
	{
		cout<<"yikici fonksiyon: "<<endl;
		cout<<"no: "<<no<<endl;
	};
	eleman::eleman (int x) 
	{
	no=x;
	cout<<"yapici fonksiyon: "<<endl;
	}
	
	int main()
	{
		eleman kisi(123),kisi2;
		return 0;
	}



*/

































