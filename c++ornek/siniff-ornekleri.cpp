#include <iostream>
using namespace std;

/*
	class ornek1
	{
		public:
		int i;
		void yaz()
		{
		cout<<"i= "<<i<<endl;	
		}	
	};




int main() {
	
	ornek1 x;
	x.i=10;
	x.yaz();
	
	return 0;
}

-------------------------------------------------------------------
	
	class ornek2
	{
		public:
			int i;
			void yaz()
			{
				y=5.2;
				z=9;
				cout<<"i= "<<i<<endl;
				cout<<"y= "<<y<<endl;
				cout<<"z= "<<z<<endl;
			}
		private:
		float y;
		int z;	
	};
	
	int main()
	{
		ornek2 nsn;
		nsn.i=12;
		nsn.yaz();
		return 0;
		
	}


---------------------------------------------------------------


	class B
	{
		public:
			int a;
	};
	
	int main()
	{
		B m,n;
		n.a=10;
		cout<<"n nesnesinin a uyesi: "<<n.a<<endl;
		m=n;
		cout<<"m nesnesinin a uyesi: "<<m.a<<endl;
		B &ref=n;
		cout<<"ref referansin a uyesi: "<<ref.a<<endl;
		ref.a=4;
		cout<<"ref referasnsi a uyesi: "<<ref.a<<endl;
		B kere[3];
		kere[2].a=6;
		cout<<"kere dizisinin 2.nesnesinin a uyesi: "<<kere[2].a<<endl;
		
		return 0;
	}


-------------------------------------------

	class ornek3
	{
		public:
			int i;
			void yaz();
	};
	
	void ornek3::yaz()
	{
		cout<<"Merhaba "<<endl;
		cout<<"i degeri: "<<i<<endl;
		
	}
	
	int main()
	{
		ornek3 x;
		x.i=10;
		x.yaz();
		return 0;
	}


---------------------------------------------------


	
	class sayi
	{
		int n;
		public:
		void sakla (int=0);
		int al;	
	};
	
	void sayi::sakla() (int x)
	{
		n=x;
	}
	int sayi::al()
	{
		return n;
	}
	
	int main()
	{
		sayi no;
		no.sakla();
		cout<<"n= "<<no.al()<<endl;
		no.sakla(10);
		cout<<"n= "<<no.al()<<endl;
		return 0;
	}


-----------------------------------------------------------------------------
	
	
# define  SINIF_MEVCUDU 2


	class ogrenci
	{
		int no,vize,final;
		public:
			int noAl(){return no;}
			int vizeAl(){return vize;}
			int finalAl(){return final;}
			void noAta(int _no) {no=_no;}
			void vizeAta(int _vize) {no=_vize;}
			void finalAta(int _final) {no=_final;}
	};	
	
	
	int main()
	{
		ogrenci sinif[SINIF_MEVCUDU];
		int no,vize,final;
		float ortalama;
		for(int i=0;i<SINIF_MEVCUDU;i++)
		{
			cout<<endl<<"ogrenci numaranizi, vize ve finalini giriniz: ";
			cin>>no>>vize>>final;
			ogrenci orrenci;
			orrenci.noAta(no);
			orrenci.vizeAta(vize);
			orrenci.finalAta(final);
			sinif[i]=orrenci;
		}
		for(int i=0;i<SINIF_MEVCUDU;i++)
		{
			ortalama=0.4*sinif[i].vizeAl() + 0.6*sinif[i].finalAl();
			cout<<sinif[i].noAl()<<"numarali ogrencinin ortalamasi: "<<ortalama<<endl;
		}
		return 0;
	}
		
		
	
	-------------------------------------------------------
	
	
	class daire
	{
		double yaricap;
		public:
		void yaricapata(double _yaricap){yaricap= _yaricap;}
		double yaricapal(){return yaricap;}
		double alan(){return 3.14*yaricap*yaricap;}
		double cevre(){return 3.14*yaricap*2;}
			
	};
	
	int main()
	{
		daire d;
		double r;
		cout<<endl<<"daire yaricapi: ";
		cin>>r;
		d.yaricapata(r);
		double alan= d.alan();
		double cevre=d.cevre();
		cout<<"r= "<<d.yaricapal()<<" alan: "<<alan<<"cevre: "<<cevre<<endl;
		
		return 0;
	}



---------------------------------------------------------------------


#define PI 3.1415
	
	class silindir
	{
		public:
		int yukseklik;
		int tabanyaricap;
		float yuzeyalanihesapla();
		float hacimhesapla();
	};
	
	float silindir::yuzeyalanihesapla()
	{
		return 2*PI*tabanyaricap*yukseklik + 2*PI*tabanyaricap*tabanyaricap;
	}
	
	float silindir::hacimhesapla()
	{
		return PI*tabanyaricap*tabanyaricap*yukseklik;
	}
	
	int main()
	{
		silindir ssilindir;
		cout<<"yukseklik: ";cin>>ssilindir.yukseklik;
		cout<<"taban yaricapi: ";cin>>ssilindir.tabanyaricap;
		cout<<"-----------------------------"<<endl;
		cout<<"yuzey alani: "<<ssilindir.yuzeyalanihesapla()<<endl;
		cout<<"hacim: "<<ssilindir.hacimhesapla()<<endl;
		return 0;
	}
	
	
*/		
	
	class kolamakinesi
	{
		float fiyat;
		int sayi;
		public:
			void ilkyukleme(float f=2.5,int s=100);
			void kolaverme();
			void goster();
			
	};
	
	
	void kolamakinesi::ilkyukleme(float f,int s)
	{
	fiyat=f; 
	sayi=s;
	}
	
	
	void kolamakinesi::kolaverme()
	{
	float ode,fark;
	cout<<"kolanin fiyati:"<<fiyat<<"lira."<<endl;
	cout<<"odemeniz: ";
	cin>>ode;
	
	
	if((ode>=fiyat)&&(sayi>0))
	{
		cout<<"kolaniz veriliyor."<<endl;
		sayi--;
		fark=ode-fiyat;
		if(fark>0)
		{
			cout<<"para ustunuz: ";
			if(fark>1.0)
			cout<<fark<<"lira."<<endl;
			else 
			cout<<fark*100<<"kurus"<<endl;
		}
	}
		else 
		cout<<"kola verilemiyor";
}
	
	void kolamakinesi::goster()
	{
		cout<<"son durum: "<<endl;
		cout<<"kolanin fiyati: "<<fiyat<<endl;
		cout<<"kalan kola sayisi: "<<sayi<<endl;
	}
	
	int main()
	{
		kolamakinesi univ;
		univ.ilkyukleme();
		univ.kolaverme();
		univ.goster();
		return 0;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




























