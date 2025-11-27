#include <iostream>
using namespace std;

const int MAX = 10;
int queueArr[MAX];
int frontIndex, rearIndex;

void init()
{
    frontIndex = rearIndex = -1;
}

bool isEmpty()
{
    return (frontIndex == -1 && rearIndex == -1);
}

bool isFull()
{
    return (rearIndex == MAX - 1);
}

void enqueue(int data)
{
    if (isFull())
    {
        cout << "Queue penuh! Tidak ada data yang bisa ditambahkan .\n";
        return;
    }
    if (isEmpty())
    {
        frontIndex = rearIndex = 0;
    }
    else
    {
        rearIndex++;
    }
    queueArr[rearIndex] = data;
    cout << "Data" << data << "berhasil ditambahkan.\n";
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue kosong! Tidak ada data yang bisa dihapus.\n";
        return;
    }
    cout << "Data " << queueArr[frontIndex] << " dihapus dari queue.\n";

    if (frontIndex == rearIndex)
    {
        frontIndex = rearIndex = -1; // Queue menjadi kosong
    }
    else
    {
        frontIndex++;
    }
}

// Menampilkan isi queue
void display()
{
    if (isEmpty())
    {
        cout << "Queue kosong!\n";
        return;
    }
    cout << "Isi Queue: ";
    for (int i = frontIndex; i <= rearIndex; i++)
    {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int pilihan, nilai;

    init();

    do
    {
        cout << "\n=== MENU QUEUE (ARRAY) ===\n";
        cout << "1. Enqueue (Tambah data)\n";
        cout << "2. Dequeue (Hapus data)\n";
        cout << "3. Tampilkan queue\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan nilai integer: ";
            cin >> nilai;
            enqueue(nilai);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 4);

    return 0;
}