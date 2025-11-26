#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 25;

    int i = 0;

    while (i < size && arr[i] != x)
    {
        i++;
    }

    if (i < size)
    {
        cout << "Elemen ditemukan di indeksi: " << i << endl;
    }
    else
    {
        cout << " Elemen tidak ditemukan" << endl;
    }

    return 0;
}