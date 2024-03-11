from Vehicle import Vehicle

class ParkingLot:
    def __init__(self, kapasitas=0, jumlah_kendaraan_saat_ini=0):  #inisialisasi atribut
        self.kapasitas = kapasitas  #kapasitas tempat parkir
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini  #jumlah kendaraan saat ini
        self.daftar_kendaraan = []  #daftar kendaraan yang terparkir

    def set_kapasitas(self, kapasitas):  #metode untuk mengatur kapasitas tempat parkir
        self.kapasitas = kapasitas

    def set_jumlah_kendaraan_saat_ini(self, jumlah_kendaraan_saat_ini):  #metode untuk mengatur jumlah kendaraan saat ini
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini

    def get_kapasitas(self):  #metode untuk mendapatkan kapasitas tempat parkir
        return self.kapasitas

    def get_jumlah_kendaraan_saat_ini(self):  #metode untuk mendapatkan jumlah kendaraan saat ini
        return self.jumlah_kendaraan_saat_ini

    def add_vehicle(self, kendaraan):  #metode untuk menambahkan kendaraan ke tempat parkir
        if self.jumlah_kendaraan_saat_ini < self.kapasitas:  #jika masih ada tempat parkir kosong
            self.daftar_kendaraan.append(kendaraan)  #tambahkan kendaraan ke daftar
            self.jumlah_kendaraan_saat_ini += 1  #tambahkan 1 ke jumlah kendaraan saat ini
        else:
            print("Parking lot penuh")  #jika tempat parkir penuh, cetak pesan

    def display_status(self):  #metode untuk menampilkan status tempat parkir
        print("Jumlah Kendaraan terparkir:", self.jumlah_kendaraan_saat_ini, "Kendaraan")  #tampilkan jumlah kendaraan terparkir
        print("Kapasitas:", self.kapasitas)  #tampilkan kapasitas tempat parkir