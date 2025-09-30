# kelas Ruangan
class Ruangan:
    def __init__(self, id_ruangan="", tipe="", kapasitas=0):
        self.__id_ruangan = id_ruangan
        self.__tipe = tipe
        self.__kapasitas = kapasitas

    # Getter & Setter
    def get_id_ruangan(self): return self.__id_ruangan
    def set_id_ruangan(self, id_ruangan): self.__id_ruangan = id_ruangan

    def get_tipe(self): return self.__tipe
    def set_tipe(self, tipe): self.__tipe = tipe

    def get_kapasitas(self): return self.__kapasitas
    def set_kapasitas(self, kapasitas): self.__kapasitas = kapasitas

# method untuk menampilkan info ruangan
    def tampilkan_info(self):
        print(f"{self.__id_ruangan:10}{self.__tipe:15}{self.__kapasitas:<10}")
