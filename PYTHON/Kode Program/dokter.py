from person import Person

# kelas Dokter yang mewarisi kelas Person
class Dokter(Person):
    def __init__(self, nama="", umur=0, gender="", alamat="", spesialis="", id_dokter="", no_telp=""):
        super().__init__(nama, umur, gender, alamat)
        self.__spesialis = spesialis
        self.__id_dokter = id_dokter
        self.__no_telp = no_telp

    # Getter & Setter
    def get_spesialis(self): return self.__spesialis
    def set_spesialis(self, spesialis): self.__spesialis = spesialis

    def get_id_dokter(self): return self.__id_dokter
    def set_id_dokter(self, id_dokter): self.__id_dokter = id_dokter

    def get_no_telp(self): return self.__no_telp
    def set_no_telp(self, no_telp): self.__no_telp = no_telp

    # method untuk menampilkan info dokter
    def tampilkan_info(self):
        print(f"{self.get_nama():15}{self.get_umur():<10}{self.get_gender():15}{self.get_alamat():15}{self.__spesialis:15}{self.__id_dokter:10}{self.__no_telp:15}")
