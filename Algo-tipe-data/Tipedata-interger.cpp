#include <iostream>
using namespace std;

int main()
{
    int bil1, bil2;
    double bil3;

    cout << "Masukan bilangan bulat pertama: ";
    cin >> bil1;
    cout << "Masukan bilangan bulat kedua: ";
    cin >> bil2;
    cout << "Masukan bilangan desimal: ";
    cin >> bil3;

    double penjumlahan = bil1 + bil2 + bil3;
    double pengurangan = bil1 - bil2 - bil3;
    double perkalian = bil1 * bil2 * bil3;
    double pembagian = bil1 / bil3;

    cout << "Hasil penjumlahan: " << penjumlahan << endl;
    cout << "pengurangan: " << pengurangan << endl;
    cout << "perkalian: " << perkalian << endl;
    cout << "pembagian: " << pembagian << endl;

    return 0;
}