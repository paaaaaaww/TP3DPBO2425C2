# kelas Person sebagai kelas dasar
class Person:
    def __init__(self, nama="", umur=0, gender="", alamat=""):
        self.__nama = nama
        self.__umur = umur
        self.__gender = gender
        self.__alamat = alamat

    # Getter & Setter
    def get_nama(self): return self.__nama
    def set_nama(self, nama): self.__nama = nama

    def get_umur(self): return self.__umur
    def set_umur(self, umur): self.__umur = umur

    def get_gender(self): return self.__gender
    def set_gender(self, gender): self.__gender = gender

    def get_alamat(self): return self.__alamat
    def set_alamat(self, alamat): self.__alamat = alamat
