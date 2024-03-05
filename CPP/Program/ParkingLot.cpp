// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;


/*
    Kelas ParkingLot yang digunakan untuk merepresentasikan data ParkingLot.
    Parking lot merupakan composite untuk Vehicle
*/
class ParkingLot {
private:
    // Atribut yang digunakan pada kelas ParkingLot terdiri dari 
    //kapasitas, jumlah kendaraan saat ini dan daftar kendaraan 
    int kapasitas;
    int jumlahKendaraanSaatIni;
    vector<Vehicle*> daftarKendaraan;
public:
    // Constructor kosong
    ParkingLot()
    {


    }

    // Constructor :yg diisi parameter
    ParkingLot(int kapasitas, int jumlahKendaraanSaatIni)
    {
        this->kapasitas = kapasitas;
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
    }


    //membuat getter setter
    void setkapasitas(int kapasitas)
    {
        this->kapasitas = kapasitas;
    }


    void setjumlahKendaraanSaatIni(int jumlahKendaraanSaatIni)
    {
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
    }

    int getkapasitas()
    {
        return kapasitas;
    }


    int getjumlahKendaraanSaatIni()
    {
        return jumlahKendaraanSaatIni;
    }

    //membuat fungsi untuk cek jumlah kendaraan dengan kapasitas kendaraan di garasi
    void addVehicle(Vehicle* kendaraan) {
        if (jumlahKendaraanSaatIni < kapasitas) {
            daftarKendaraan.push_back(kendaraan);
            jumlahKendaraanSaatIni++;
        } else {
            cout << "Parking lot penuh" << endl;
        }
    }

    //mmembuat fungsi untuk menampilkan jumlah kendaraan terparkir dan kapasitas
    void displayStatus() const {
        cout << "Jumlah Kendaraan terparkir: " << jumlahKendaraanSaatIni << " Kendaraan" << endl;
        cout << "Kapasitas: " << kapasitas << endl;
    }

    // Destructor
    ~ParkingLot()
    {


    }
};
