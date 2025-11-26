#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    float ipk;
};
int main()
{
    Mahasiswa mhs1, mhs2, mhs3;

    cout << "=======Mahasiswa 1=======" << endl;
    mhs1.nim = "20250801101";
    mhs1.nama = "Anjas karel S";
    mhs1.ipk = 3.75;

    cout << "nim: " << mhs1.nim << endl;
    cout << "nama: " << mhs1.nama << endl;
    cout << "ipk: " << mhs1.ipk << endl;

    cout << "==========Mahasiswa 2==========" << endl;
    mhs2.nim = "20250801075";
    mhs2.nama = " Evos Adli Nur Aziz";
    mhs2.ipk = 3.55;

    cout << "nim: " << mhs2.nim << endl;
    cout << "nama: " << mhs2.nama << endl;
    cout << "ipk: " << mhs2.ipk << endl;

    cout << "==========Mahasiswa 3==========" << endl;
    mhs3.nim = "2025080119";
    mhs3.nama = " RRQ Rendy dyren ";
    mhs3.ipk = 2.75;

    cout << "nim: " << mhs3.nim << endl;
    cout << "nama: " << mhs3.nama << endl;
    cout << "ipk: " << mhs3.ipk << endl;

    return 0;
}