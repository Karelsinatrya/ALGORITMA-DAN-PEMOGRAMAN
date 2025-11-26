#include <iostream>
using namespace std;

struct Alamat
{
    string Kabupaten;
    string provinsi;
};

struct Mahasiswa
{
    string nama;
    string nim;
    Alamat Alamat;
};

int main()
{

    Mahasiswa mhs;

    cout << "====Input Data Mahasiswa===" << endl;
    cout << "Nama      :";
    getline(cin, mhs.nama);
    cout << "nim       :";
    getline(cin, mhs.nim);
    cout << "kabupaten :";
    getline(cin, mhs.Alamat.Kabupaten);
    cout << "provinsi  :";
    getline(cin, mhs.Alamat.provinsi);

    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "Nama       : " << mhs.nama << endl;
    cout << "nim        : " << mhs.nim << endl;
    cout << "kabupaten  : " << mhs.Alamat.Kabupaten << endl;
    cout << "provinsi   : " << mhs.Alamat.provinsi << endl;

    return 0;
}