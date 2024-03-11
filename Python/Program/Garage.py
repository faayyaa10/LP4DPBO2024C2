from Vehicle import Vehicle

class Garage:
    def __init__(self, nama_garasi="", luas_garasi=0, kapasitas=0):  #inisialisasi atribut garasi
        self.nama_garasi = nama_garasi  #nama garasi
        self.luas_garasi = luas_garasi  #luas garasi
        self.kapasitas = kapasitas  #kapasitas garasi
        self.daftar_kendaraan = []  #daftar kendaraan di garasi

    def set_nama_garasi(self, nama_garasi):  #metode untuk mengatur nama garasi
        self.nama_garasi = nama_garasi

    def set_luas_garasi(self, luas_garasi):  #metode untuk mengatur luas garasi
        self.luas_garasi = luas_garasi

    def get_nama_garasi(self):  #metode untuk mendapatkan nama garasi
        return self.nama_garasi

    def get_luas_garasi(self):  #metode untuk mendapatkan luas garasi
        return self.luas_garasi

    def add_vehicle(self, kendaraan):  #metode untuk menambahkan kendaraan ke garasi
        if len(self.daftar_kendaraan) < self.kapasitas:  #jika masih ada tempat kosong di garasi
            self.daftar_kendaraan.append(kendaraan)  #tambahkan kendaraan ke daftar
        else:
            print("Garasi penuh")  #jika garasi penuh, cetak pesan

    def display_all_vehicles(self):  #metode untuk menampilkan semua kendaraan di garasi
        print("Garasi", self.nama_garasi)  #tampilkan nama garasi
        print("Luas Garasi:", self.luas_garasi, "m")  #tampilkan luas garasi
        print("Jumlah Kendaraan terparkir:", len(self.daftar_kendaraan), "Kendaraan")  #tampilkan jumlah kendaraan terparkir
        print("Kapasitas:", self.kapasitas)  #tampilkan kapasitas garasi
        print()
        print("Daftar Kendaraan Terparkir:")  #tampilkan daftar kendaraan terparkir
        for i, kendaraan in enumerate(self.daftar_kendaraan, 1):  #loop melalui daftar kendaraan
            print("Kendaraan", i)  #tampilkan nomor kendaraan
            kendaraan.display()  #tampilkan informasi kendaraan
            print()  #baris kosong
