#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string Nama, plug;
    long long int Nim;

    cout << "Masukkan :" << endl;
    cout << "Nama : ";
    cin >> Nama;
    cout << "NIM : ";
    cin >> Nim;
    cout << "Plug : ";
    cin >> plug;

    cout << "Inilah data Anda : " << endl;
    cout << "Nama : " << Nama << endl;
    cout << "NIM : " << Nim << endl;
    cout << "Plug : " << plug << endl << endl << endl;

    cout << "Dalam Bentuk tabel : " << endl;
    cout << "=========================================================\n";
    cout << "NIM      |         Nama          |         Plug          \n";
    cout << "=========================================================\n";
    cout << Nim << "|" << setw(14) << Nama << setw(10) << "|" << setw(13) << plug << setw(10) << endl;
    cout << "---------------------------------------------------------\n";
    cin.ignore();

    float Fahrenheit, Kelvin, Reamur, C;

    cout << "Masukkan Data Celsius" << endl;
    cout << "C : ";
    cin >> C;

    Fahrenheit = (9 * C / 5) + 32;
    Kelvin = 273 + C;
    Reamur = (4 * C / 5) + 32;

    cout << "Fahrenheit : " << Fahrenheit << endl;
    cout << "Kelvin : " << Kelvin << endl;
    cout << "Reamur : " << Reamur << endl;
    cout << "C : " << C;
    return 0;
   

    



}