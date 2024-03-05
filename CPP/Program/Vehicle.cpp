//menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
//masukkan library yang digunakan
#include <iostream>
#include <string>

//deklarasi namespace
using namespace std;

// kelas Vehicle yang digunakan untuk merepresentasikan data Vehicle, 
// Vehicle merupakan kelas induk dari kelas SivitasAkademik dan buyut 
// dari kelas Mahasiswa dan Dosen

class Vehicle {
protected:
    // Atribut yang digunakan pada kelas Vehicle terdiri 
    // dari platNomor, mer, tahunProduksi, warna
    string platNomor;
    string merk;
    string tahunProduksi;
    string warna;

public:
    //contructor kosong
    Vehicle(){

    }

    //constructor yg diisi parameter
    Vehicle(string platNomor, string merk, string tahunProduksi, string warna){
        this->platNomor = platNomor;
        this->merk = merk;
        this->tahunProduksi = tahunProduksi;
        this->warna = warna;
    }

    //membuat getter setter
    //set plat nomor
    void setPlatNomor(string platNomor) {
        this->platNomor = platNomor;
    }

    //set merk
    void setMerk(string merk) {
        this->merk = merk;
    }

    //set tahun produksi
    void setTahunProduksi(string tahunProduksi) {
        this->tahunProduksi = tahunProduksi;
    }

    //set warna
    void setWarna(string warna) {
        this->warna = warna;
    }

    //get plat nomor
    string getPlatNomor() {
        return platNomor;
    }

    //get merk
    string getMerk() {
        return merk;
    }

    //get tahun produksi
    string getTahunProduksi() {
        return tahunProduksi;
    }

    //get warna
    string getWarna() {
        return warna;
    }

    //membuat fungsi untuk menampilkan atribut atribut yang ada di kelas vehicle
    virtual void display() const {
        cout << "Plat Nomor: " << platNomor << endl; //nampilin plat nomor
        cout << "Merk: " << merk << endl;   //nampilin merk
        cout << "Tahun Produksi: " << tahunProduksi << endl;    //nampilin tahun produksi
        cout << "Warna: " << warna << endl; //nampilin warna
    }
    
    //destructor
    ~Vehicle() {

    }
};

