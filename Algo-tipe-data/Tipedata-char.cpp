#include <iostream>
using namespace std;

int main()
{
    char huruf;

    cout << "Masukan satu huruf: ";
    cin >> huruf;

    cout << "kode ASCI dari" << huruf << "adalah" << int(huruf) << endl;

    return 0;
}