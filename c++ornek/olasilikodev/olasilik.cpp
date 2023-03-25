#include <cstdlib>
#include <iostream>
#include <string.h>
#include <math.h>
#include <time.h>
#include <cassert>
#include <exception>
#include <ctime>
using namespace std;


int main()

{
    int adet;
    
    cout << "kac adet veri girilecek: ";
    cin >> adet; 
    
    int veriler[adet];
    int temp;
    
    cout << "verileri giriniz: " << endl;
    for(int i=0;i<adet;i++)
    {
        cin >> veriler[i];
    }
    
    cout << endl;
    
    cout << "veriler: " << endl;
    for(int i=0;i<adet;i++)
    {
        cout << veriler[i] << endl;
    }
    
    cout << endl;
    
    cout << "verilerin siralanmis hali: " << endl;
    for(int i=0;i<adet;i++)
    {
        for(int j=0;j<adet;j++)
        {
            if(veriler[j]>veriler[j+1])
            {
                temp=veriler[j];
                veriler[j]=veriler[j+1];
                veriler[j+1]=temp;
            }
        }
    }
    
    for(int i=0;i<adet;i++)
    {
        cout << veriler[i] << endl;
    }
    
    return 0;
}


















