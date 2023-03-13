#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");

	//system("color B5");
	int chose;
	double rub;// = 100;
	double tenge;// = rub * 5.81;
	double yuan;// = rub * 0.091747;
	double shekel;// = rub * 0.047545;
	//cout << rub << " рублей\n";
	//cout << tenge << " тенге\n";
	//cout << yuan << " юаней\n";
	//cout << shekel << " шекелей\n";
	cout << "\nВыберите валюту\n (1-RUB 2-TENGE 3-YUAN 4-SHEKEL)\n";
	cin >> chose;
	switch (chose) {
	case 1:
		cout << "Введите кол-во Рублей\n";
		cin >> rub;
		tenge = rub * 5.81;
		yuan = rub * 0.091747;
		shekel = rub * 0.047545;
		cout << rub << " рублей\n";
		cout << tenge << " тенге\n";
		cout << yuan << " юаней\n";
		cout << shekel << " шекелей\n";
		break;
	case 2:
		cout << "Введите кол-во Тенге\n";
		cin >> tenge;
		rub = tenge * 0.1722;
		yuan = tenge * 0.015791;
		shekel = tenge * 0.008145;
		cout << rub << " рублей\n";
		cout << tenge << " тенге\n";
		cout << yuan << " юаней\n";
		cout << shekel << " шекелей\n";
		break;
	case 3:
		cout << "Введите кол-во Юаней\n";
		cin >> yuan;
		rub = yuan * 10.9;
		tenge = yuan * 63.33;
		shekel = yuan * 0.5177;
		cout << rub << " рублей\n";
		cout << tenge << " тенге\n";
		cout << yuan << " юаней\n";
		cout << shekel << " шекелей\n";
		break;
	case 4:
		cout << "Введите кол-во Шекелей\n";
		cin >> shekel;
		rub = shekel * 21.24;
		tenge = shekel * 122.77;
		yuan = shekel * 1.93;
		cout << rub << " рублей\n";
		cout << tenge << " тенге\n";
		cout << yuan << " юаней\n";
		cout << shekel << " шекелей\n";
		break;
	}
}
