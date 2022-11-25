#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int jumlah_belanja, total_belanja, harga, kode_barang, pembayaran, hasil;

    do {
        cout << "======= OWL SAINT STORE =======" << endl;
        cout << "===============================" << endl;
        cout << "1. Celana Jeans" << endl;
        cout << "2. Jaket" << endl;
        cout << "3. Kaos" << endl;
        cout << "4. Kemeja" << endl;
        cout << "5. Selesai" << endl;
        cout << "===============================" << endl;
        cout << "Masukkan kode barang = ";
        cin >> kode_barang;

        if (kode_barang == 1) {
            // Celana Jeans
            cout << "Celana Jeans = 20.000" << endl;
            harga = 20000;
            cout << "Masukkan jumlah belanja = ";
            cin >> jumlah_belanja;
            total_belanja += harga * jumlah_belanja;
            cout << "Total belanja = Rp " << harga * jumlah_belanja << endl; 
            cout << "\n";
        } else if (kode_barang == 2) {
            // Jaket
            cout << "Jaket = 25.000" << endl;
            harga = 25000;
            cout << "Masukkan jumlah belanja = ";
            cin >> jumlah_belanja;
            total_belanja += harga * jumlah_belanja;
            cout << "Total belanja = Rp " << harga * jumlah_belanja << endl; 
            cout << "\n";
        } else if (kode_barang == 3) {
            // Kaos
            cout << "Kaos = 18.000" << endl;
            harga = 18000;
            cout << "Masukkan jumlah belanja = ";
            cin >> jumlah_belanja;
            total_belanja += harga * jumlah_belanja;
            cout << "Total belanja = Rp " << harga * jumlah_belanja << endl; 
            cout << "\n";
        } else if (kode_barang == 4) {
            // Kemeja
            cout << "Kemeja = 23.000" << endl;
            harga = 23000;
            cout << "Masukkan jumlah belanja = ";
            cin >> jumlah_belanja;
            total_belanja += harga * jumlah_belanja;
            cout << "Total belanja = Rp " << harga * jumlah_belanja << endl; 
            cout << "\n";
        } else if (kode_barang == 5) {
            cout << "Total seluruh belanja = Rp " << total_belanja << endl;
            cout << "Masukkan uang anda = Rp ";
            cin >> pembayaran;
            int hasil = pembayaran - total_belanja;
            
            if (hasil > 0) {
            	cout << "Kembalian anda Rp " << hasil << endl;
			} else if (hasil == 0) {
				cout << "Uang anda pas" << endl;
			} else {
				cout << "Uang anda kurang Rp " << hasil << endl;
			}
            cout << "Terima kasih sudah berbelanja di tempat kami :D";
        }
    } while (kode_barang <= 4);

    return 0;
}
