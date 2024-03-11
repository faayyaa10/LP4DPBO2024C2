class Vehicle:  #membuat kelas induk Vehicle
    def __init__(self, plat_nomor="", merk="", tahun_produksi="", warna=""):  #inisialisasi atribut kendaraan
        self.plat_nomor = plat_nomor  #plat nomor kendaraan
        self.merk = merk  #merk kendaraan
        self.tahun_produksi = tahun_produksi  #tahun produksi kendaraan
        self.warna = warna  #warna kendaraan

    def set_plat_nomor(self, plat_nomor):  #metode untuk mengatur plat nomor kendaraan
        self.plat_nomor = plat_nomor

    def set_merk(self, merk):  #metode untuk mengatur merk kendaraan
        self.merk = merk

    def set_tahun_produksi(self, tahun_produksi):  #metode untuk mengatur tahun produksi kendaraan
        self.tahun_produksi = tahun_produksi

    def set_warna(self, warna):  #metode untuk mengatur warna kendaraan
        self.warna = warna

    def get_plat_nomor(self):  #metode untuk mendapatkan plat nomor kendaraan
        return self.plat_nomor

    def get_merk(self):  #metode untuk mendapatkan merk kendaraan
        return self.merk

    def get_tahun_produksi(self):  #metode untuk mendapatkan tahun produksi kendaraan
        return self.tahun_produksi

    def get_warna(self):  #metode untuk mendapatkan warna kendaraan
        return self.warna

    def display(self):  #metode untuk menampilkan informasi kendaraan
        print("Plat Nomor:", self.plat_nomor)  #tampilkan plat nomor
        print("Merk:", self.merk)  #tampilkan merk
        print("Tahun Produksi:", self.tahun_produksi)  #tampilkan tahun produksi
        print("Warna:", self.warna)  #tampilkan warna
