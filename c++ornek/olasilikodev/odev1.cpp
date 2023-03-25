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
    int n;
    float top=0;
    float top2=0;
    float v,ss,oms,dk,ort;
    
    cout << "kac deger gireceksiniz: ";
    cin >> n;
    
    float dizi[n];
    
    for(int i=0;i<n;i++)
    {
        cout << i+1 << " . eleman: ";
        cin >> dizi[i];
    }
    
    for(int i=0;i<n;i++)
    {
        top=top+dizi[i];
    }
    
    ort=top/n;

    for(int i=0;i<n;i++)
    {
        top2=top2+(dizi[i]-ort)*(dizi[i]-ort);
    }
    v=top2/(n-1);
    cout << "Varyans: " << v << endl;
    
    ss=sqrt(v);
    cout << "Standart sapma: " << ss << endl;
    
    top2=0;
    for(int i=0;i<n;i++)
    {
        top2=top2+abs(dizi[i] - ort );
    }
    oms=top2/n;
    cout << "OMS: " << oms << endl;
    
    dk=ss/ort;
    cout << "Degisim katsayisi: " << dk << endl;
    
    float min=dizi[0];
    float max=dizi[0];
    for(int i=0;i<n;i++)
    {
        if(dizi[i] < min)
        {
            min=dizi[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(dizi[i] > max)
        {
            max=dizi[i];
        }
    }
    
    float R=max-min;
    float k=1;
    
    while(k <= sqrt(n))
    {
        k++;
    }
    int boyut=k;
    
    float h=R/k;
    h=ceil(h);
    
    float sinifLA[boyut];
    float sinifLU[boyut];
    float sinifSA[boyut];
    float sinifSU[boyut];
    float sinifF[boyut];
    
    
    // Sýnýf alt limitleri
    for(int i=0;i<boyut;i++)
    {
        sinifLA[i]=min;
        min=min+h;
    }
    // Sýnýf üst limitleri
    float temp;
    if(sinifLA[1] - (int)sinifLA[1] == 0)
    {
        temp=sinifLA[1]-1;
    }
    else
    {
        temp=sinifLA[1]-0.1;
    }
    for(int i=0;i<boyut;i++)
    {
        sinifLU[i]=temp;
        temp=temp+h;
    }
    // Sýnýf üst sýnýrlarý
    float temp2=(sinifLA[1]+sinifLU[0])/2;
    for(int i=0;i<boyut;i++)
    {
        sinifSU[i]=temp2;
        temp2=temp2+h;
    }
    float temp3=sinifSU[0]-h;
    for(int i=0;i<boyut;i++)
    {
        sinifSA[i]=temp3;
        temp3=temp3+h;
    }
    
    // Sýnýf frekanslarý
    float temp4;
    for(int i=0;i<k;i++)
    {
        temp4=0;
        for(int j=0;j<n;j++)
        {
            if(dizi[j]>=sinifSA[i] && dizi[j]<=sinifSU[i])
            {
                temp4++;
            }
        }
        sinifF[i]=temp4;
    }
    
    float Q1,L1,j1,fq1,n1=0,Q3,L3,j3,fq3,n3=0,frekans1,frekans2;
    
    frekans1=n/4.0;
    int temp5=0;
    float sayac=0;
    
    for(int i=0;i<k;i++)
    {
        if(frekans1 < sayac)
        {
            break;
        }
        temp5++;
        sayac=sayac+sinifF[i];
    }
    
    temp5=temp5-1;
    for(int i=0;i<temp5;i++)
    {
        n1=n1+sinifF[i];
    }
    
    j1=frekans1-n1;
    fq1=sinifF[temp5];
    L1=sinifSA[temp5];
    Q1=L1+((j1*h)/fq1);
    
    cout << "Q1: " << Q1 << endl;
    
    
    frekans2=(3*n)/4.0;
    int temp6=0;
    float sayac2=0;
    
    for(int i=0;i<k;i++)
    {
        if(frekans2 < sayac2)
        {
            break;
        }
        temp6++;
        sayac2=sayac2+sinifF[i];
    }
    
    temp6=temp6-1;
    for(int i=0;i<temp6;i++)
    {
        n3=n3+sinifF[i];
    }
    
    j3=frekans2-n3;
    fq3=sinifF[temp6];
    L3=sinifSA[temp6];
    Q3=L3+((j3*h)/fq3);
    
    cout << "Q3: " << Q3 << endl;
    return 0;
}

