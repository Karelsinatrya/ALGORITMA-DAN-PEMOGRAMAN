#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menampilkan isi array
void tampilkanData(const vector<int> &data)
{
    for (int i : data)
        cout << i << " ";
    cout << endl;
}

// Fungsi Bubble Sort menggunakan void dan menghitung langkah
void bubbleSort(vector<int> &data, int &langkah)
{
    langkah = 0;
    int n = data.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            langkah++; // setiap perbandingan
            if (data[j] > data[j + 1])
            {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

// Fungsi Insertion Sort menggunakan void dan menghitung langkah
void insertionSort(vector<int> &data, int &langkah)
{
    langkah = 0;
    int n = data.size();
    for (int i = 1; i < n; i++)
    {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key)
        {
            langkah++; // perbandingan true
            data[j + 1] = data[j];
            j--;
        }
        if (j >= 0)
            langkah++; // perbandingan terakhir (false)

        data[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    vector<int> data(n);
    cout << "Masukkan " << n << " angka integer:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    cout << "\nData sebelum diurutkan:\n";
    tampilkanData(data);

    // Salin data untuk dua algoritma
    vector<int> dataBubble = data;
    vector<int> dataInsertion = data;
    int langkahBubble = 0, langkahInsertion = 0;

    // Jalankan pengurutan
    bubbleSort(dataBubble, langkahBubble);
    insertionSort(dataInsertion, langkahInsertion);

    // Tampilkan hasil
    cout << "\n=== HASIL PENGURUTAN ===\n";
    cout << "Hasil Bubble Sort (Ascending): ";
    tampilkanData(dataBubble);
    cout << "Jumlah langkah/perbandingan: " << langkahBubble << endl;

    cout << "\nHasil Insertion Sort (Ascending): ";
    tampilkanData(dataInsertion);
    cout << "Jumlah langkah/perbandingan: " << langkahInsertion << endl;

    // Kesimpulan sederhana
    cout << "\n=== KESIMPULAN ===\n";
    if (langkahBubble < langkahInsertion)
        cout << "Bubble Sort lebih efisien pada data ini.\n";
    else if (langkahBubble > langkahInsertion)
        cout << "Insertion Sort lebih efisien pada data ini.\n";
    else
        cout << "Kedua algoritma memiliki efisiensi yang sama pada data ini.\n";

    return 0;
}
