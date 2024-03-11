from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, jumlah_kursi=0, jumlah_pintu=0, plat_nomor="", merk="", tahun_produksi="", warna=""):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)  #panggil konstruktor kelas induk
        self.jumlah_kursi = jumlah_kursi  #inisialisasi atribut jumlah_kursi
        self.jumlah_pintu = jumlah_pintu  #inisialisasi atribut jumlah_pintu

    def set_jumlah_kursi(self, jumlah_kursi):  #metode untuk mengatur jumlah_kursi
        self.jumlah_kursi = jumlah_kursi

    def set_jumlah_pintu(self, jumlah_pintu):  #metode untuk mengatur jumlah_pintu
        self.jumlah_pintu = jumlah_pintu

    def get_jumlah_kursi(self):  #metode untuk mendapatkan jumlah_kursi
        return self.jumlah_kursi

    def get_jumlah_pintu(self):  #metode untuk mendapatkan jumlah_pintu
        return self.jumlah_pintu

    def display(self):  #metode untuk menampilkan informasi mobil
        super().display()  #panggil metode display dari kelas induk
        print("Jumlah Kursi:", self.jumlah_kursi)  #tampilkan jumlah_kursi
        print("Jumlah Pintu:", self.jumlah_pintu)  #tampilkan jumlah_pintu
