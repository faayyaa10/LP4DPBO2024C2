// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Car
#include <iostream>
#include <string>
#include "Vehicle.cpp"

//deklarasi namespace
using namespace std;

//kelas car yang terdiri dari jumlah kursi mobil dan jumlah pintu mobil
//kelas car merupakn turunan dari kelas induk Vehicle
class Car : public Vehicle {
private:
    // Atribut yang digunakan pada kelas Car terdiri dari asal jumlah kursi dan jumlah pintu
    int jumlahKursi;
    int jumlahPintu;

public:
    //constructor kosong
    Car(){ 

    }

    //constructor yang diisi parameter
    Car(int jumlahKursi, int jumlahPintu, string platNomor, string merk, string tahunProduksi, string warna)
    : Vehicle(platNomor, merk, tahunProduksi, warna), jumlahKursi(jumlahKursi), jumlahPintu(jumlahPintu) {}

    //membuat getter setter
    void setJumlahKursi(int jumlahKursi) {
        this->jumlahKursi = jumlahKursi;
    }

    void setJumlahPintu(int jumlahPintu) {
        this->jumlahPintu = jumlahPintu;
    }

    int getJumlahKursi() {
        return jumlahKursi;
    }

    int getJumlahPintu() {
        return jumlahPintu;
    }

    //membuat fungsi untuk menampilkan jumlah kursi dan jumlah pintu
    void display() const override {
        Vehicle::display();
        cout << "Jumlah Kursi: " << jumlahKursi << endl;
        cout << "Jumlah Pintu: " << jumlahPintu << endl;
    }

    // Destructor
    ~Car()
    {


    }
};
