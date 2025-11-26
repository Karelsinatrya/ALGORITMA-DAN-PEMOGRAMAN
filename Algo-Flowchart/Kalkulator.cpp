#include <iostream>
using namespace std;

int main()
{
    double angka1, angka2;

    cout << "KALKULATOR SEDERHANA" << endl;
    cout << "===================" << endl;

    cout << "Masukan angka pertama: ";
    cin >> angka1;
    cout << "Masukan angka kedua: ";
    cin >> angka2;

    cout << "===================" << endl;
    cout << angka1 << " + " << angka2 << " = " << angka1 + angka2 << endl;
    cout << angka1 << " - " << angka2 << " = " << angka1 - angka2 << endl;
    cout << angka1 << " * " << angka2 << " = " << angka1 * angka2 << endl;

    if (angka2 != 0)
    {
        cout << angka1 << " / " << angka2 << " = " << angka1 / angka2 << endl;
    }
    else
    {
        cout << angka1 << " / " << angka2 << "= TAK Terdefinisi (pembagian nol)" << endl;
    }

    return 0;
}