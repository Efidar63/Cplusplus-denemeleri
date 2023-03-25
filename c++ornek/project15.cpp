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
    double n,r,kom,per;
    cout << "n degerini giriniz: ";
    cin >> n;
    cout << "r degerini giriniz: ";
    cin >> r;
    
    double carp=1;
    
    for(double i=n;i>0;i--)
    {
        carp=carp*i;
    }
    
    double carp2=1;
    
    for(double i=r;i>0;i--)
    {
        carp2=carp2*i;
    }
    
    double carp3=1;
    double deger=n-r;
    
    for(double i=deger;i>0;i--)
    {
        carp3=carp3*i;
    }
    
    cout <<"C(n,r)= " << carp/(carp2*carp3) << endl;
    
    cout <<"P(n,r)= " << carp/carp3 << endl;
    
    return 0;
}
