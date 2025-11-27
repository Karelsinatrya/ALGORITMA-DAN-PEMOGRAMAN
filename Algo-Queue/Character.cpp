#include <iostream>
using namespace std;

const int MAX = 10;
char q[MAX];
int frontIndex = -1;
int rearIndex = -1;

// Mengecek apakah queue kosong
bool is_Empty()
{
    return (frontIndex == -1 && rearIndex == -1);
}

// Mengecek apakah queue penuh
bool is_full()
{
    return (rearIndex == MAX - 1);
}

// Menambahkan elemen ke queue
void insert(char data)
{
    if (is_full())
    {
        cout << "Queue penuh, tidak bisa menambah data.\n";
        return;
    }
    if (is_Empty())
    {
        frontIndex = rearIndex = 0;
    }
    else
    {
        rearIndex++;
    }
    q[rearIndex] = data;
}

void remove_element()
{
    if (is_Empty())
    {
        cout << "Queue kosong, tidak bisa menghapus.\n";
        return;
    }
    cout << "Menghapus elemen: " << q[frontIndex] << endl;

    if (frontIndex == rearIndex)
    {
        frontIndex = rearIndex = -1;
    }
    else
    {
        frontIndex++;
    }
}

// Menampilkan isi queue
void display()
{
    if (is_Empty())
    {
        cout << "Queue kosong.\n";
        return;
    }
    cout << "Isi queue: ";
    for (int i = frontIndex; i <= rearIndex; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Mengisi queue dengan huruf A, R, I, F
    insert('A');
    insert('N');
    insert('J');
    insert('A');
    insert('S');

    cout << "Setelah insert A, N, J, A, S:\n";
    display();

    // Menghapus 2 elemen
    cout << "\nMenghapus 2 elemen...\n";
    remove_element();
    remove_element();

    // Menampilkan queue kembali
    cout << "\nIsi queue setelah menghapus 2 elemen:\n";
    display();

    return 0;
}