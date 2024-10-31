#include <iostream>
using namespace std;

double total(double beratApel, double beratJeruk, double beratSemangka) {
	double apel = 24000;
	double jeruk = 32500;
	double semangka = 8000;
	double totalBerat = beratApel + beratJeruk + beratSemangka;
	double hasil;

	double total = (apel * beratApel) + (jeruk * beratJeruk) + (semangka * beratSemangka);


	if (totalBerat >= 10) {
		hasil = (5.0 / 100) * total;
	}
	else if (totalBerat >= 8) {
		hasil = (2.0 / 100) * total;
	}
	else {
		hasil = total;
	}

	return total - hasil;
}

int main()
{
	double beratApel, beratJeruk, beratSemangka;
	cout << "Berat Apel : ";
	cin >> beratApel;
	cout << "Berat Jeruk : ";
	cin >> beratJeruk;
	cout << "Berat Semangka : ";
	cin >> beratSemangka;

	cout << "Total : ";
	cout << total(beratApel, beratJeruk, beratSemangka);
}
