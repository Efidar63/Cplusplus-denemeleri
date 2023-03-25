// ilkodev.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{
	int x, temp;
	cout << "kac adet veri girmek istiyorsunuz: " << endl;
	cin >> x;

	int dizi[x];
	for (int i = 0; i < x; i++)
	{
		cout << "lutfen siralamak istediginiz degerleri giriniz: " << endl;
		cin >> dizi[x];
		int mineleman;
		for (int b = 0; b < x; b++)
		{
			mineleman = dizi[b];
			for (int a = b; a < x; a++) {
				if (mineleman > dizi[a])
				{
					mineleman = dizi[a];
					temp = dizi[b];
					dizi[b] = dizi[a];
					dizi[a] = temp;
				}
			}
		}
		for (int a = 0; a < x; a++)
		{
			cout << dizi[a] << endl;
		}

	}

}

