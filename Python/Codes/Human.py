"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

""" Class declaration """
class Human:
    # Private class #
    __num = ""      # NIK
    __name = ""     # nama
    __gender = ""   # jenis_kelamin

    # default constructor #
    def __init__(self, NIK = "", nama = "", jenis_kelamin = ""):
        self.__num = NIK
        self.__name = nama
        self.__gender = jenis_kelamin
    
    # setter #
    def setNum (self, NIK):
        self.__num = NIK
    def setName (self, nama):
        self.__name = nama
    def setGender (self, jenis_kelamin):
        self.__gender = jenis_kelamin

    # getter #
    def getNum (self):
        return self.__num
    def getName (self):
        return self.__name
    def getGender (self):
        return self.__gender