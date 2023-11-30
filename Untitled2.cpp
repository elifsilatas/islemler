#include <iostream>

using namespace std;

int main()
{
	int a;//tipi,ismi
	a = 10;//değer
	cout << a << endl;
	a++;//bir arttırır. postfix(sonra eklenir) olarak kullanılır.
	cout << a << endl;
	++a;//bir arttırır. prefix(önce eklenir) olarak kullanılır.
	cout << a << endl;
	int b = 20;
	cout << a+b << endl;//en son a ile b'yi toplar.
	cout << a+b*2 << endl;//matematiksel işlem önceliği kuralları geçerlidir.
	cout << 15%2 << endl;//'%'sembolü mod alma işlemini gerçekleştirir.
	a--;//a'nın değerini bir azalt.
	cout << a << endl;
	a = a-1;//a-- ile aynı işlemi yapar. 
	cout << a << endl;
	cout << a++ << endl;//a'nın değeri alınıp kullanılır sonra 1 arttırılır.
	//ekrana 10 basılıyor ama hafızada artık 11.
	cout << ++a << endl;//a'nın değeri önce 1 arttırılır sonra denkleme konur.
	//ekrana 12 basılıyor ve hafızada da artık 12. 
	int x = 10;
	x = x-1;
	x--;
	--x;
	x -= 1;
	x += 5;//x = x + 5
	cout << x << endl;
	x *= 2;//x = x*2
	cout << x << endl;
	return 0;
	
}