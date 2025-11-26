#include <iostream>
using namespace std;

enum Esports_Team_Mobile_legends
{
    Evos = 1,
    RRQ_Hoshi
};

int main()
{

    int pilihan;
    cout << "Pilih Team Esports:\n";
    cout << "3. Evos\n";
    cout << "7. RRQ Hoshi\n";
    cout << "Masukan pilihan (3 atau 7): ";
    cin >> pilihan;

    Esports_Team_Mobile_legends EsportsTerpilih = static_cast<Esports_Team_Mobile_legends>(pilihan);

    if (pilihan == 3)
        cout << "Anda memilih Esports: Evos" << endl;
    else if (pilihan == 7)
        cout << "Anda memilih Esports: RRQ Hoshi" << endl;
    else
        cout << "Pilihan tidak valid" << endl;

    return 0;
}
