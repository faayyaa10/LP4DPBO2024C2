// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"


// Deklarasi namespace
using namespace std;


/*
    Kelas Garage yang digunakan untuk merepresentasikan data Garage,
    Kelas Garage merupakan composite untuk kelas Vehicle
*/
class Garage {
private:
    //Atribut yang digunakan pada kelas Garage terdiri dari
    //nama garasi, luas garasi, daftar kendaraan dan kapasitas 
    string namaGarasi;
    int luasGarasi;
    list<Vehicle*> daftarKendaraan;
    int kapasitas;
public:

    //constructor kosong
    Garage()
    {


    }

    //constructor yg diisi parameter
    Garage(const string& namaGarasi, int luasGarasi, int kapasitas)
        : namaGarasi(namaGarasi), luasGarasi(luasGarasi), kapasitas(kapasitas) {}

    //membuat getter dan setter
    void setNamaGarasi(string namaGarasi)
    {
        this->namaGarasi = namaGarasi;
    }


    void setLuasGarasi(int luasGarasi)
    {
        this->luasGarasi = luasGarasi;
    }

    string getNamaGarasi()
    {
        return namaGarasi;
    }


    int getLuasGarasi()
    {
        return luasGarasi;
    }

    //membuat fungsi untuk menambahkan kendaraan
    void addVehicle(Vehicle* kendaraan) {
        if (daftarKendaraan.size() < kapasitas) {
            daftarKendaraan.push_back(kendaraan);
        } else {
            cout << "Garasi penuh" << endl;
        }
    }

    //membuat fungsi untuk menampilkan informasi garasi
    void displayAllVehicles() const {
        cout << "Garasi " << namaGarasi << endl;
        cout << "Luas Garasi: " << luasGarasi << "m" << endl;
        cout << "Jumlah Kendaraan terparkir: " << daftarKendaraan.size() << " Kendaraan" << endl;
        cout << "Kapasitas: " << kapasitas << endl;
        cout << endl;
        cout << "Daftar Kendaraan Terparkir:" << endl;
        int i = 1;
        for (const auto& kendaraan : daftarKendaraan) {
            cout << "Kendaraan " << i++ << endl;
            kendaraan->display();
            cout << endl;
        }
    }

    // Destructor
    ~Garage()
    {


    }
};
