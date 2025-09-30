from dokter import Dokter
from pasien import Pasien
from ruangan import Ruangan

# kelas RumahSakit
class RumahSakit:
    def __init__(self, nama="", alamat=""):
        self.__nama = nama
        self.__alamat = alamat
        self.__daftar_dokter = []
        self.__daftar_pasien = []
        self.__daftar_ruangan = []

    # metode untuk menambah data
    def tambah_dokter(self, dokter): self.__daftar_dokter.append(dokter)
    def tambah_pasien(self, pasien): self.__daftar_pasien.append(pasien)
    def tambah_ruangan(self, ruangan): self.__daftar_ruangan.append(ruangan)

    # metode untuk menampilkan garis
    def garis(self, n): print("-" * n)

    # method untuk menampilkan semua data
    def tampilkan_semua_data(self):
        print(f"\nRumah Sakit   : {self.__nama}")
        print(f"Alamat          : {self.__alamat}")

        # Dokter
        print("\n\n== Daftar Dokter ==")
        print(f"{'Nama':15}{'Umur':10}{'Gender':15}{'Alamat':15}{'Spesialis':15}{'ID':10}{'No. Telp':15}")
        self.garis(95)
        for d in self.__daftar_dokter: d.tampilkan_info()

        # Pasien
        print("\n\n== Daftar Pasien ==")
        print(f"{'Nama':15}{'Umur':10}{'Gender':15}{'Alamat':15}{'Status':15}{'Penyakit':15}{'ID':15}")
        self.garis(95)
        for p in self.__daftar_pasien: p.tampilkan_info()

        # Ruangan
        print("\n\n== Daftar Ruangan ==")
        print(f"{'ID':10}{'Tipe':15}{'Kapasitas':10}")
        self.garis(35)
        for r in self.__daftar_ruangan: r.tampilkan_info()
