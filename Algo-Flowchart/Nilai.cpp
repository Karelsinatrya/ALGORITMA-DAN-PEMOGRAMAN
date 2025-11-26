#include <iostream>
using namespace std;

int main()
{
    double nilai;

    cout << "PROGRAM PENENTU KELULUSAN DAN KATEGORI NILAI" << endl;
    cout << "===========================================" << endl;
    cout << "Masukan nilai ujian: ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100)
    {
        cout << "Nilai tidak valid! Harus antara 0-100." << endl;
        return 1;
    }

    cout << "===========================================" << endl;
    cout << "Nilai: " << nilai << endl;

    if (nilai >= 85)
    {
        cout << "Status: LULUS dengan predikat SANGAT BAIK (A)" << endl;
    }
    else if (nilai >= 75)
    {
        cout << "Status: LULUS dengan predikat BAIK (B)" << endl;
    }
    else if (nilai >= 65)
    {
        cout << "Status: LULUS dengan predikat CUKUP (C)" << endl;
    }
    else if (nilai >= 60)
    {
        cout << "Status: LULUS dengan predikat KURANG (D)" << endl;
    }
    else
    {
        cout << "Status: TIDAK LULUS (E)" << endl;
    }

    return 0;
}