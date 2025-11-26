#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = -1;
    int result = -1;

    cout << "Masukan angka yang dicari";
    cin >> x;

    if (x != -1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                result = i;
                break;
            }
        }
    }

    if (result != -1)
    {
        cout << "Angka Ditemukan di indeks ke" << result;
    }
    else
    {
        cout << "Data tidak ditemukan";
    }

    return 0;
}