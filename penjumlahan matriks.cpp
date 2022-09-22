#include <iostream>

using namespace std;

int main()
{
    int i, j, jumlah_baris_matriks, jumlah_kolom_matriks, matriks_1[5][5], matriks_2[5][5], hasil[5][5];

    cout << "Rahmaditya Putri\n";
    cout << "21091397018\n";
    cout << "=== PENJUMLAHAN MATRIKS ===\n\n";

    cout << "Masukkan jumlah baris matriks : ";
    cin >> jumlah_baris_matriks;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> jumlah_kolom_matriks;

    cout << "Masukkan elemen matriks pertama: \n";
    for (i = 0; i < jumlah_baris_matriks; i++)
    {
        for (j = 0; j < jumlah_kolom_matriks; j++)
        {
            cin >> matriks_1[i][j];
        }
    }

    cout << "Masukkan elemen matriks kedua: \n";
    for (i = 0; i < jumlah_baris_matriks; i++)
    {
        for (j = 0; j < jumlah_kolom_matriks; j++)
        {
            cin >> matriks_2[i][j];
        }
    }

    cout << "Hasil penjumlahan matriks = \n";
    for (i = 0; i < jumlah_baris_matriks; i++)
    {
        for (j = 0; j < jumlah_kolom_matriks; j++)
        {
            hasil[i][j] = matriks_1[i][j] + matriks_2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
