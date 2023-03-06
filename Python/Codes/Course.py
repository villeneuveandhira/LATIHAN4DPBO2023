"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

""" Class declaration """
class Course:
    # Private class #
    __codeMK = ""    # kode_matkul
    __nameMK = ""    # nama_matkul

    # default constructor #
    def __init__(self, kode_matkul = "", nama_matkul = ""):
        self.__codeMK = kode_matkul
        self.__nameMK = nama_matkul
    
    # setter #
    def setCodeMK (self, kode_matkul):
        self.__nameMK = kode_matkul
    def setNameMK (self, nama_matkul):
        self.__nameMK = nama_matkul

    # getter #
    def getCodeMK (self):
        return self.__codeMK
    def getNameMK (self):
        return self.__nameMK