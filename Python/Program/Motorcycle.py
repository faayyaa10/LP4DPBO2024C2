#Vehicle import Vehicle
from Vehicle import Vehicle
class Motorcycle(Vehicle):
    def __init__(self, jenis_motor="", kapasitas_tangki="", plat_nomor="", merk="", tahun_produksi="", warna=""):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)  #memanggil konstruktor kelas induk
        self.jenis_motor = jenis_motor  #inisialisasi atribut jenis_motor
        self.kapasitas_tangki = kapasitas_tangki  #inisialisasi atribut kapasitas_tangki

    def set_jenis_motor(self, jenis_motor):  #metode untuk mengatur jenis_motor
        self.jenis_motor = jenis_motor

    def set_kapasitas_tangki(self, kapasitas_tangki):  #metode untuk mengatur kapasitas_tangki
        self.kapasitas_tangki = kapasitas_tangki

    def get_jenis_motor(self):  #metode untuk mendapatkan jenis_motor
        return self.jenis_motor

    def get_kapasitas_tangki(self):  #metode untuk mendapatkan kapasitas_tangki
        return self.kapasitas_tangki

    def display(self):  #metode untuk menampilkan informasi kendaraan
        super().display()  #memanggil metode display dari kelas induk
        print("Jenis Motor:", self.jenis_motor)  #menampilkan jenis_motor
        print("Kapasitas Tangki:", self.kapasitas_tangki)  #menampilkan kapasitas_tangki
