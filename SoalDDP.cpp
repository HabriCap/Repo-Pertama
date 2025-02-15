#include <iostream>
#include <iomanip>
using namespace std;

typedef struct {
    float diskon;
    float kembalian;
    float harga_Diskon;

} Transaksi;
Transaksi trs;

void Harga_barang()
{   
    string nama_barang[5] = {"Sapu","Kasur","Selimut","Kursi","Sofa"};
    cout << setw(30) << "List Harga Barang" << endl;
    cout << "=============================================" << endl;
    cout << "0" << setw(10) << "Sapu" << setw(24) << "12.000" << endl;
    cout << "1" << setw(10) << "Kasur" << setw(24) << "15.000" << endl;
    cout << "2" << setw(10) << "Selimut" << setw(24) << "30.000" << endl;
    cout << "3" << setw(10) << "Kursi" << setw(24) << "13.000" << endl;
    cout << "4" << setw(10) << "Sofa" << setw(24) << "20.000" << endl;
    cout << "=============================================" << endl;

}
int main() {
    int kode_barang;
    string Nama_barang[5] = {"Sapu","Kasur","Selimut","Kursi","Sofa"};
    int harga_barang[5] = {12000, 15000, 30000, 13000, 20000};
    int password;
    string nama;
    int maksimal_barang;
    float kembalian;
    int Jumlah_pembayaran;
    int jumlah_barang;
    int jenis_barang;
    int totalharga;
    int struck;
    cout << "=============================================" << endl;
    cout << setw(28) <<  "Toko Barang" << endl;
    cout << "=============================================" << endl;
    cout << "Silahkan masukkan username" << endl;
    cout << "Username : ";
    cin >> nama;
    cout << "Silahkan masukkan password" << endl;
    cout << "Password : ";
    cin >> password;
    cout << "=============================================" << endl;
    if (password == 126) {
        
        cout << setw(37) << " Selamat datang di Toko Barang" << endl;
        Harga_barang();
        cout << "Masukkan jumlah maksimal barang" << endl;
        cout << "Maksimal Barang : ";
        cin >> maksimal_barang;
        cout << endl;
        cout << "=============================================" << endl;
        cout << endl;
        for (int i = 0; i < maksimal_barang; i++) {
            cout << "Kode Barang ke-" << i+1 << " : ";
            cin >> kode_barang;
            cout << "Nama Barang : " << Nama_barang[kode_barang];
            cout << endl;
            cout << "Jumlah Barang : ";
            cin >> jumlah_barang;
            cout << "Harga Barang : " << harga_barang[kode_barang];
            cout << endl;
            cout << "=============================================" << endl;
            
        }
        cout << "                 Nama Barang                 " << endl;
        cout << "=============================================" << endl;
    
        totalharga = jumlah_barang * harga_barang[kode_barang];
        cout << "total Harga : " << totalharga << endl;
        
        if (totalharga > 100000) {
    
            trs.diskon = (totalharga * 0.95);
            cout << "Total Harga Diskon : " << trs.diskon;
            cout << endl;
            cout << "Masukkan jumlah pembayaran : ";
            cin >> Jumlah_pembayaran;
            kembalian = Jumlah_pembayaran - trs.diskon;
            cout << "Kembalian : " << kembalian; 
            cout << endl;
            cout << "Terima kasih telah berbelanja disini";   
        } else {
            
            cout << "Masukkan Jumlah pembayaran : ";
            cin >> Jumlah_pembayaran;
            kembalian = Jumlah_pembayaran - totalharga;
            cout << "Kembalian : " << kembalian;
            cout << endl;
            cout << "Terima kasih telah berbelanja disini";
        }
    } else {
        cout << "Password anda salah, silahkan coba lagi" << endl;
        main();
    }
}  

    