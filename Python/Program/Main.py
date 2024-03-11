from Car import Car  #mengimpor kelas Car
from Motorcycle import Motorcycle  #mengimpor kelas Motorcycle
from Garage import Garage  #mengimpor kelas Garage
from ParkingLot import ParkingLot  #mengimpor kelas ParkingLot

def main():
    #membuat input beberapa kendaraan
    car1 = Car(6, 2, "B A1B2 AJZ", "Toyota", "2020", "Hitam")  #instansiasi objek Car
    motorcycle1 = Motorcycle("Beat", "4.2", "D C2F5F XYZ", "Honda", "2019", "Hitam")  #instansiasi objek Motorcycle

    #membuat garasi dan menambahkan kendaraan
    my_garage = Garage("Rumah", 6, 4)  #instansiasi objek Garage
    my_garage.add_vehicle(car1)
    my_garage.add_vehicle(motorcycle1)

    #menampilkan semua kendaraan di garasi
    my_garage.display_all_vehicles()

    #membuat tempat parkir dan menambahkan kendaraan
    parking_lot = ParkingLot(4, 0)  #instansiasi objek ParkingLot
    parking_lot.add_vehicle(car1)
    parking_lot.add_vehicle(motorcycle1)
    parking_lot.display_status()

if __name__ == "__main__":
    main()
