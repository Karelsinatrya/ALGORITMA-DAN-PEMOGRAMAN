#include <iostream>
using namespace std;

float stackArr[100];
int top = -1;
int kapasitas;

// PUSH
void push(float data)
{
    if (top >= kapasitas + 5)
    {
        cout << "Stack penuh! Tidak bisa push.\n";
    }
    else
    {
        top++;
        stackArr[top] = data;
        cout << "Data " << data << " berhasil ditambahkan.\n";
    }
}

// POP
void pop()
{
    if (top < 0)
    {
        cout << "Stack kosong! Tidak bisa pop.\n";
    }
    else
    {
        cout << "Data " << stackArr[top] << " berhasil di-pop.\n";
        top--;
    }
}

// PEEK
void peek()
{
    if (top < 0)
    {
        cout << "Stack kosong!\n";
    }
    else
    {
        cout << "Elemen paling atas (peek): " << stackArr[top] << endl;
    }
}

// ISEMPTY
void isEmpty()
{
    if (top < 0)
        cout << "Stack kosong.\n";
    else
        cout << "Stack tidak kosong.\n";
}

// SIZE
void sizeStack()
{
    cout << "Jumlah elemen stack saat ini: " << top + 1 << endl;
}

int main()
{
    int pilihan;
    float nilai;

    cout << "==============================\n";
    cout << "   PROGRAM STACK DENGAN ARRAY\n";
    cout << "==============================\n\n";

    cout << "Masukkan kapasitas maksimum stack: ";
    cin >> kapasitas;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. IsEmpty\n";
        cout << "5. Size\n";
        cout << "6. Exit\n";
        cout << "==============================\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan data (boleh desimal): ";
            cin >> nilai;
            push(nilai);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            isEmpty();
            break;

        case 5:
            sizeStack();
            break;

        case 6:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 6);

    return 0;
}