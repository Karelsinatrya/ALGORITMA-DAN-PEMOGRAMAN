#include <iostream>
using namespace std;

const int MAX = 5; // contoh kapasitas kecil agar mudah melihat circular
int q[MAX];
int frontIndex = -1;
int rearIndex = -1;

// Mengecek apakah queue kosong
bool is_Empty()
{
    return (frontIndex == -1);
}

// Mengecek apakah queue penuh (circular)
bool is_full()
{
    return ((rearIndex + 1) % MAX == frontIndex);
}

// Menambah elemen (enqueue)
void enqueue(int data)
{
    if (is_full())
    {
        cout << "Queue penuh, tidak bisa menambah: " << data << endl;
        return;
    }

    if (is_Empty())
    {
        frontIndex = rearIndex = 0;
    }
    else
    {
        rearIndex = (rearIndex + 1) % MAX;
    }

    q[rearIndex] = data;
    cout << "Enqueue: " << data << endl;
}

void dequeue()
{
    if (is_Empty())
    {
        cout << "Queue kosong, tidak bisa menghapus.\n";
        return;
    }

    cout << "Dequeue: " << q[frontIndex] << endl;

    if (frontIndex == rearIndex)
    {
        // Queue menjadi kosong
        frontIndex = rearIndex = -1;
    }
    else
    {
        frontIndex = (frontIndex + 1) % MAX;
    }
}

// Menampilkan isi queue secara circular
void display()
{
    if (is_Empty())
    {
        cout << "Queue kosong.\n";
        return;
    }

    cout << "Isi queue: ";
    int i = frontIndex;

    while (true)
    {
        cout << q[i] << " ";
        if (i == rearIndex)
            break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}

int main()
{

    cout << "=== MENGISI QUEUE HINGGA PENUH ===\n";
    enqueue(15);
    enqueue(65);
    enqueue(35);
    enqueue(11);
    enqueue(54);

    cout << "\n=== MENGHAPUS 3 ELEMEN ===\n";
    dequeue();
    dequeue();
    dequeue();

    cout << "\n=== MENAMBAH 2 ELEMEN BARU ===\n";
    enqueue(10);
    enqueue(43);

    cout << "\n=== POSISI FRONT DAN REAR ===\n";
    cout << "Front = " << frontIndex << endl;
    cout << "Rear  = " << rearIndex << endl;

    cout << "\n=== MENAMPILKAN ISI QUEUE (CIRCULAR) ===\n";
    display();

    return 0;
}