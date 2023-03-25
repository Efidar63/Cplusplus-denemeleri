    #include <iostream>
	#include <cstdlib>
	#include <stdio.h>
	#include <string.h>
	#include <math.h>
	#include <time.h>
	#include <cassert>
	#include <exception>

using namespace std;
int main() {
	
	
	/*
	
			
			
	int baslangic, bitis, adet;
	
	cout<<"kac adet sayi girilecek: "<<endl;
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
	*/
	
	
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


	
		

	return 0;
}

