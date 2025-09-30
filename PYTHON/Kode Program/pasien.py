from person import Person

# kelas Pasien yang mewarisi kelas Person
class Pasien(Person):
    def __init__(self, nama="", umur=0, gender="", alamat="", status="", penyakit="", id_pasien=""):
        super().__init__(nama, umur, gender, alamat)
        self.__status = status
        self.__penyakit = penyakit
        self.__id_pasien = id_pasien

    # Getter & Setter
    def get_status(self): return self.__status
    def set_status(self, status): self.__status = status

    def get_penyakit(self): return self.__penyakit
    def set_penyakit(self, penyakit): self.__penyakit = penyakit

    def get_id_pasien(self): return self.__id_pasien
    def set_id_pasien(self, id_pasien): self.__id_pasien = id_pasien
    # method untuk menampilkan info pasien
    def tampilkan_info(self):
        print(f"{self.get_nama():15}{self.get_umur():<10}{self.get_gender():15}{self.get_alamat():15}{self.__status:15}{self.__penyakit:15}{self.__id_pasien:15}")
