#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
int i, j, m, n, matriks [10] [10], transpose [10] [10];

    cout << "Rahmaditya Putri\n";
    cout << "21091397018\n";
    cout << "=== PENJUMLAHAN MATRIKS ===\n\n";

cout << "Masukkan jumlah baris matriks : ";
cin >> m;
cout << "Masukkan jumlah kolom matriks : ";
cin >> n;

cout << "Masukkan elemen matriks : " << endl;
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
	cin >> matriks [i] [j];
	}
}
	
for (i = 0; i < m; i++) {
	for (j = 0; j < n; j++) {
		transpose [j] [i] = matriks[i] [j];
	}
}


cout << "Hasil transpose matriks = \n";
for (i = 0; i < n; i++) {
	for (j = 0; j < m; j++) {
		cout << transpose [i] [j] << "\t";
	}
	cout << endl;
}
getch();
return 0;
}
