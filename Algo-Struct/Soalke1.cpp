#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    float nilai;
};

int main()
{
    Mahasiswa mhs1;

    cout << "===========================================" << endl;
    mhs1.nim = "20250801101";
    mhs1.nama = "Anjas karel s";
    mhs1.nilai = 80.5;

    cout << "nim: " << mhs1.nim << endl;
    cout << "nama: " << mhs1.nama << endl;
    cout << "nilai: " << mhs1.nilai << endl;

    return 0;
}