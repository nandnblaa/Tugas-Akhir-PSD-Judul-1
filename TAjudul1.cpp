#include <iostream>
using namespace std;

int main() {
    const int jumlahHari = 7;
    int pengeluaran[jumlahHari];
    int total = 0;
    float rataRata;
    cout << "Program Pencatatan Pengeluaran Harian\n";

    for (int i = 0; i < jumlahHari; i++) {
        cout << "Masukkan pengeluaran hari ke-" << i+1 << ": Rp ";
        cin >> pengeluaran[i];
        total += pengeluaran[i];
    }

    rataRata = (float)total / jumlahHari;

    cout << "\nDaftar Pengeluaran Harian:\n";
    for (int i = 0; i < jumlahHari; i++) {
        cout << "Hari ke-" << i+1 << ": Rp " << pengeluaran[i] << endl;
    }

    cout << "\nTotal pengeluaran selama 1 minggu = Rp " << total << endl;
    cout << "Rata-rata pengeluaran per hari = Rp " << rataRata << endl;

    return 0;
}