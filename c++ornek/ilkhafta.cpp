    #include <iostream>
	#include <cstdlib>
	#include <string.h>
	#include <math.h>
	#include <time.h>
	#include <cassert>
	#include <exception>

using namespace std;
int main() {
	
	
	/*
			
			
	int baslangic, bitis, adet;
	
	cout<<"kaç adet sayi yazdýnýz: "<<endl;
	cin>>adet;
	
	cout<<"baslangic degerini giriniz: "<<endl;
	cin>>baslangic;
	
	cout<<"bitis degerini giriniz: "<<endl;
	cin>>bitis;
	
	if(adet > (bitis-baslangic+1))
	{
		for(int i=0;i<adet;i++)
		{
			cout<<rand()%(bitis-baslangic+1)<<endl;
		}
	}
	
	else if(adet < (bitis-baslangic+1))
	{
		srand(time(0));
		for(int i=0;i<adet;i++)
		{
			cout<<rand()%(bitis-baslangic+1)<<endl;
		}
	}
	
	
	2. ÖDEV
	
	
	int n , m, k, rastgelesayi;
	cout<<"n degerini giriniz: "<<endl;
	cin>>n;
	
	cout<<"m degerini giriniz: "<<endl;
	cin>>m;
	k=n/m;
	
	if(k%k !=0)
	{
		floor(k);
	}
	rastgelesayi=rand()%(k+1);
	cout<<"uretilen rastgele sayi: "<<rastgelesayi<<endl;
	
	for(int i=rastgelesayi; i<m;i+=k)
	{
		cout<<i<<endl;
	}
	
	*/
	
	int x, temp;
	cout<<"kac adet veri girmek istiyorsunuz: "<<endl;
	cin>>x;
	
	int dizi[x];
	for(int i=0;i<x;i++)
	{
		cout<<"lutfen siralamak istediginiz degerleri giriniz: "<<endl;
		cin>>dizi[x];
		int mineleman;
		for(int b=0;b<x;b++)
		{
			mineleman=dizi[b];
			for(int a=b; a<x; a++){
				if(mineleman>dizi[a])
				{
					mineleman=dizi[a];
					temp=dizi[b];
					dizi[b]=dizi[a];
					dizi[a]=temp;
				}
			}
		}
		for(int a=0;a<x; a++)
		{
			cout<<dizi[a]<<endl;
		}
		
	}
	
	return 0;
}

