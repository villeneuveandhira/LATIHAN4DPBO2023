"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

""" Import """
from Course import Course
from Mahasiswa import Mahasiswa
from Dosen import Dosen

""" Class declaration """
class ProgramStudi:
    # Private class #
    __prodi = ""                # nama_prodi
    __kode = ""                 # kode_prodi
    __matkul = Course()         # matkul
    __mahasiswa = Mahasiswa()   # mahasiswa
    __dosen = Dosen()           # dosen


    # default constructor #
    def __init__(self, nama_prodi = "", kode = "", matkul = Course(), mhs = Mahasiswa(), dosen = Dosen()):
        self.__prodi = nama_prodi
        self.__kode = kode
        self.__matkul = matkul
        self.__mahasiswa = mhs
        self.__dosen = dosen
    
    # setter #
    def setProdi (self, nama_prodi):
        self.__prodi = nama_prodi
    def setKode (self, kode):
        self.__kode = kode
    def setMatkul (self, matkul):
        self.__matkul = matkul
    def setMahasiswa (self, mhs):
        self.__mahasiswa = mhs
    def setDosen (self, dosen):
        self.__dosen = dosen

    # getter #
    def getProdi (self):
        return self.__prodi
    def getKode (self):
        return self.__kode
    def getMatkul (self):
        return self.__matkul
    def getMahasiswa (self):
        return self.__mahasiswa
    def getDosen (self):
        return self.__dosen