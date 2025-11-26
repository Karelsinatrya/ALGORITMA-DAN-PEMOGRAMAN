#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    float nilai_akhir;
};
int main()
{
    Mahasiswa mhs[5];
    float total = 0.0;

    cout << "=== Input Data Mahasiswa ===" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama           : ";
        cin >> mhs[i].nama;
        cout << "Nilai Akhir    : ";
        cin >> mhs[i].nilai_akhir;

        total += mhs[i].nilai_akhir;
        cout << endl;
    }

    float rata_rata = total / 5;

    cout << "===================================" << endl;
    cout << "Nilai rata-rata kelas: " << rata_rata << endl;

    return 0;
}