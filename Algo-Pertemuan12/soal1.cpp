
#include <iostream>
#include <vector>
using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string prodi;
    string matkul;
};

vector<Mahasiswa> dataMahasiswa;

// CREATE
void tambahData()
{
    Mahasiswa m;
    cout << "Masukkan NIM           : ";
    cin >> m.nim;
    cin.ignore();
    cout << "Masukkan Nama          : ";
    getline(cin, m.nama);
    cout << "Masukkan Program Studi : ";
    getline(cin, m.prodi);
    cout << "Masukkan Mata Kuliah   : ";
    getline(cin, m.matkul);

    dataMahasiswa.push_back(m);
    cout << "Data mahasiswa berhasil ditambahkan.\n";
}

// READ
void tampilData()
{
    if (dataMahasiswa.empty())
    {
        cout << "Data mahasiswa kosong.\n";
        return;
    }

    cout << "\n=== DAFTAR MAHASISWA ===\n";
    for (int i = 0; i < dataMahasiswa.size(); i++)
    {
        cout << "NIM  : " << dataMahasiswa[i].nim << endl;
        cout << "Nama : " << dataMahasiswa[i].nama << endl;
        cout << "Prodi: " << dataMahasiswa[i].prodi << endl;
        cout << "Matkul: " << dataMahasiswa[i].matkul << endl;
        cout << "------------------------\n";
    }
}

// UPDATE
void ubahData()
{
    string cariNIM;
    cout << "Masukkan NIM yang akan diubah: ";
    cin >> cariNIM;
    cin.ignore();

    for (int i = 0; i < dataMahasiswa.size(); i++)
    {
        if (dataMahasiswa[i].nim == cariNIM)
        {
            cout << "Masukkan Nama Baru          : ";
            getline(cin, dataMahasiswa[i].nama);
            cout << "Masukkan Program Studi Baru : ";
            getline(cin, dataMahasiswa[i].prodi);
            cout << "Masukkan Mata Kuliah Baru   : ";
            getline(cin, dataMahasiswa[i].matkul);

            cout << "Data berhasil diubah.\n";
            return;
        }
    }
    cout << "Data tidak ditemukan.\n";
}

// DELETE
void hapusData()
{
    string cariNIM;
    cout << "Masukkan NIM yang akan dihapus: ";
    cin >> cariNIM;

    for (int i = 0; i < dataMahasiswa.size(); i++)
    {
        if (dataMahasiswa[i].nim == cariNIM)
        {
            dataMahasiswa.erase(dataMahasiswa.begin() + i);
            cout << "Data berhasil dihapus.\n";
            return;
        }
    }
    cout << "Data tidak ditemukan.\n";
}

int main()
{
    int pilihan;

    do
    {
        cout << "\n=== SISTEM PERKULIAHAN ===\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Tampilkan Data Mahasiswa\n";
        cout << "3. Ubah Data Mahasiswa\n";
        cout << "4. Hapus Data Mahasiswa\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tambahData();
            break;
        case 2:
            tampilData();
            break;
        case 3:
            ubahData();
            break;
        case 4:
            hapusData();
            break;
        case 5:
            cout << "Terima kasih. Program selesai.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}
