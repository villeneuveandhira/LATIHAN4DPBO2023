"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

""" Import """
from Human import Human

""" Class declaration """
class SivitasAkademik(Human):
    # Private class #
    __email = ""     # email_edu
    __univ = ""      # asal_universitas
    __faculty = ""   # fakultas

    # default constructor #
    def __init__(self, NIK = "", nama = "", jenis_kelamin = "", email_edu = "", asal_universitas = "", fakultas = ""):
        super().__init__(NIK, nama, jenis_kelamin)
        self.__email = email_edu
        self.__univ = asal_universitas
        self.__faculty = fakultas
    
    # setter #
    def setEmail (self, email_edu):
        self.__email = email_edu
    def setUniv (self, asal_universitas):
        self.__univ = asal_universitas
    def setFaculty (self, fakultas):
        self.__faculty = fakultas

    # getter #
    def getEmail (self):
        return self.__email
    def getUniv (self):
        return self.__univ
    def getFaculty (self):
        return self.__faculty