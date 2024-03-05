//Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
//Memasukan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Motorcycle
#include <iostream>
#include <string>
#include "Vehicle.cpp"


//Deklarasi namespace
using namespace std;


/*
    Kelas Motorcycle yang digunakan untuk merepresentasikan data Motorcycle,
    kelas Motorcycle merupakan kelas turunan dari kelas induk Vehicle.
*/
class Motorcycle : public Vehicle
{
private:
    //Atribut yang digunakan pada kelas Motorcycle terdiri dari jenis motor dan kapasitas tangki
    string jenisMotor;
    string kapasitasTangki;
public:
    //constructor kosong
    Motorcycle()
    {


    }

    //contructor yang diisi parameter
    Motorcycle(string jenisMotor, string kapasitasTangki, string platNomor, string merk, string tahunProduksi, string warna)
    : Vehicle(platNomor, merk, tahunProduksi, warna)
    {
    this->jenisMotor = jenisMotor;
    this->kapasitasTangki = kapasitasTangki;
    }


    //membuat getter setter untuk jenis motor dan kapasitas tangki
    void setjenisMotor(string jenisMotor)
    {
        this->jenisMotor = jenisMotor;
    }


    void setKapasitasTangki(string kapasitasTangki)
    {
        kapasitasTangki = kapasitasTangki;
    }


    //Method get untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
    string getJenisMotor()
    {
        return jenisMotor;
    }


    string getKapasitasTangki()
    {
        return kapasitasTangki;
    }

    //membuat fungsi untuk menampilkan jenis motor dan kapasitas tangki
    void display() const override {
        Vehicle::display();
        cout << "Jenis Motor: " << jenisMotor << endl;
        cout << "Kapasitas Tangki: " << kapasitasTangki << endl;
    }
    

    //Destructor
    ~Motorcycle()
    {


    }
};
