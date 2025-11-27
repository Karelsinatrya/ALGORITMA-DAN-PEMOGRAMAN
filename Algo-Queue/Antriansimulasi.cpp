#include <iostream>
using namespace std;

struct Pelanggan
{
    int nomor;
    int lamaPelayanan;
    Pelanggan *next;
};

Pelanggan *frontPtr = nullptr;
Pelanggan *rearPtr = nullptr;
int counter = 1; // untuk nomor antrian

bool isEmpty()
{
    return (frontPtr == nullptr);
}

// Tambah pelanggan (enqueue)
void enqueue(int lama)
{
    Pelanggan *baru = new Pelanggan;
    baru->nomor = counter++;
    baru->lamaPelayanan = lama;
    baru->next = nullptr;

    if (isEmpty())
    {
        frontPtr = rearPtr = baru;
    }
    else
    {
        rearPtr->next = baru;
        rearPtr = baru;
    }

    cout << "Pelanggan nomor " << baru->nomor
         << " ditambahkan (lama pelayanan: "
         << lama << " detik)" << endl;
}

// Layani pelanggan (dequeue)
void dequeue()
{
    if (isEmpty())
    {
        cout << "Tidak ada pelanggan untuk dilayani.\n";
        return;
    }

    Pelanggan *hapus = frontPtr;
    cout << "Melayani pelanggan nomor " << hapus->nomor
         << " (lama pelayanan: "
         << hapus->lamaPelayanan << " detik)" << endl;

    frontPtr = frontPtr->next;
    delete hapus;

    if (frontPtr == nullptr)
        rearPtr = nullptr;
}

// Tampilkan semua pelanggan yang menunggu
void tampilkanAntrian()
{
    if (isEmpty())
    {
        cout << "Tidak ada pelanggan dalam antrian.\n";
        return;
    }

    Pelanggan *temp = frontPtr;
    cout << "Pelanggan yang sedang menunggu:\n";

    while (temp != nullptr)
    {
        cout << "- Nomor " << temp->nomor
             << " | Lama pelayanan: "
             << temp->lamaPelayanan << " detik" << endl;
        temp = temp->next;
    }
}

// Hitung jumlah pelanggan
int hitungPelanggan()
{
    int jumlah = 0;
    Pelanggan *temp = frontPtr;

    while (temp != nullptr)
    {
        jumlah++;
        temp = temp->next;
    }

    return jumlah;
}

int main()
{
    int pilihan, lama;

    do
    {
        cout << "\n=== SIMULASI ANTRIAN KASIR ===\n";
        cout << "1. Tambah pelanggan\n";
        cout << "2. Layani pelanggan\n";
        cout << "3. Tampilkan antrian\n";
        cout << "4. Jumlah pelanggan dalam antrian\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan lama pelayanan (detik): ";
            cin >> lama;
            enqueue(lama);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            tampilkanAntrian();
            break;

        case 4:
            cout << "Jumlah pelanggan dalam antrian: "
                 << hitungPelanggan() << endl;
            break;

        case 5:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 5);

    return 0;
}