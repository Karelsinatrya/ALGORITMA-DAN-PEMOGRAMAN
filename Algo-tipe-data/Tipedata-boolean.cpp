#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "Masukan angka: ";
    cin >> angka;

    bool genap = (angka % 2 == 0);

    cout << "Apakah genap? " << boolalpha << genap << endl;

    return 0;
}