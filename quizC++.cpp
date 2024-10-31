#include <iostream>
using namespace std;

void hitungEK(double massa, double kecepatan) {
    double energiKinetik = 0.5 * massa * kecepatan * kecepatan;
    cout << "Energi Kinetik : " << energiKinetik << " Joule";
}

int main() {
    double massa, kecepatan;

    cout << "Massa (kg) : ";
    cin >> massa;

    cout << "Kecepatan (m/s) : ";
    cin >> kecepatan;

    hitungEK(massa, kecepatan);

    return 0;
 
}
