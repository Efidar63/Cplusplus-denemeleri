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
    int n, temp;

    float top = 0;

    cout << "kac adet deger gireceksiniz: ";
    cin >> n;

    int dizi[n];
    for (int i = 0; i < n; i++)
    {
        cout << "degeri giriniz: ";
        cin >> dizi[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dizi[j] > dizi[j + 1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

    cout << "Dizinin siralanmis hali: \n";
    for (int i = 0; i < n; i++)
    {
        cout << dizi[i] << endl;
    }

    cout << "Aritmetik ortalama: ";

    for (int i = 0; i < n; i++)
    {
        top = top + dizi[i];
    }

    cout << top / n << endl;

    float medyan;

    cout << "Medyan: ";
    if (n % 2 == 0)
    {
        medyan = float(dizi[(n / 2)] + dizi[(n / 2 - 1)]) / 2;
        cout << medyan << endl;
    }
    else
    {
        medyan = dizi[(n / 2)];
        cout << medyan << endl;
    }

    cout << "Mod: ";

    int mod = 0;
    int modval = dizi[0];

    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        for (int j = 0; j < n; j++)
        {
            if (dizi[j] == dizi[i])
            {
                counter++;
            }
        }
        if (counter > mod)
        {
            mod = counter;
            modval = dizi[i];
        }
    }

    if (mod == 0 && modval == dizi[0])
    {
        cout << "mod yoktur." << endl;
    }
    else
    {
        cout << modval << " -> " << mod << " kere" << endl;
    }
}