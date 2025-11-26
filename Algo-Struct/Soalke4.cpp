#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    float ipk;
};

void tampilData(Mahasiswa m)
{
    cout << "\n=== Data Mahasiswa ===\n";
    cout << "Nama   : " << m.nama << endl;
    cout << "NIM    : " << m.nim << endl;
    cout << "IPK    : " << m.ipk << endl;
}

int main()
{
    int jumlah;

    cout << "Masukan jumlah mahasiswa: ";
    cin >> jumlah;
    cin.ignore();

    Mahasiswa mhs[jumlah];

    for (int i = 0; i < jumlah; i++)
    {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Masukan Nama   : ";
        getline(cin, mhs[i].nama);
        cout << "Masukan NIM    : ";
        getline(cin, mhs[i].nim);
        cout << "Masukan IPK    : ";
        cin >> mhs[i].ipk;
        cin.ignore();
    }

    cout << "\n=== DAFTAR MAHASISWA ===";
    for (int i = 0; i < jumlah; i++)
    {
        tampilData(mhs[i]);
    }
    return 0;
}