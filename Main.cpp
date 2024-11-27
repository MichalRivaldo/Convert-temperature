#include <iostream>
using namespace std;

int main()
{
    // Variabel untuk suhu dan pilihan konversi
    float suhu, hasil;
    int pilihan;

    cout << "Program Perubahan Suhu\n";
    cout << "Pilih jenis konversi suhu:\n";
    cout << "1. Celsius ke Fahrenheit\n";
    cout << "2. Fahrenheit ke Celsius\n";
    cout << "Masukkan pilihan (1/2): ";
    cin >> pilihan;

    while (pilihan != 1 && pilihan != 2)
    {
        cout << "\033[31mPilihan tidak Valid\033[0m" << endl;
        cout << "Pilihlah antara 1 atau 2: ";
        cin >> pilihan;
    }

    // Proses konversi berdasarkan pilihan
    if (pilihan == 1)
    {
        // Konversi Celsius ke Fahrenheit
        cout << "Masukkan suhu dalam Celsius: ";
        cin >> suhu;
        hasil = (suhu * 9 / 5) + 32;
        cout << "Suhu dalam Fahrenheit: " << hasil << " °F\n";
    }
    else if (pilihan == 2)
    {
        // Konversi Fahrenheit ke Celsius
        cout << "Masukkan suhu dalam Fahrenheit: ";
        cin >> suhu;
        hasil = (suhu - 32) * 5 / 9;
        cout << "Suhu dalam Celsius: " << hasil << " °C\n";
    }

    return 0;
}