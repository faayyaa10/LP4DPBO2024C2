#include <bits/stdc++.h>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    //membuat beberapa kendaraan dengan input hardcode
    Car car1(6, 2, "B A1B2 AJZ", "Toyota", "2020", "Hitam");
    Motorcycle motorcycle1("Beat", "4.2", "D C2F5F XYZ", "Honda", "2019", "Hitam");

    //membuat garasi dan menambahkan kendaraan
    Garage myGarage("Rumah", 6, 4);
    myGarage.addVehicle(&car1);
    myGarage.addVehicle(&motorcycle1);

    //menampilkan semua kendaraan di garasi
    myGarage.displayAllVehicles();

    //membuat tempat parkir dan menambahkan kendaraan
    ParkingLot parkingLot(4, 0); //memasukkan 0 untuk jumlahKendaraanSaatIni karena awalnya tidak ada kendaraan terparkir
    parkingLot.addVehicle(&car1);
    parkingLot.addVehicle(&motorcycle1);
    parkingLot.displayStatus();

    return 0;
}