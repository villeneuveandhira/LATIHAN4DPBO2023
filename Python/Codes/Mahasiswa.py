"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

# Import #
from SivitasAkademik import SivitasAkademik

# Class declaration #
class Mahasiswa(SivitasAkademik):
    # Private class #
    __studentID = ""     # NIM

    # default constructor #
    def __init__(self, NIK = "", nama = "", jenis_kelamin = "", email_edu = "", asal_universitas = "", fakultas = "", NIM = ""):
        super().__init__(NIK, nama, jenis_kelamin, email_edu, asal_universitas, fakultas)
        self.__studentID = NIM
    
    # setter #
    def setStudentID(self, NIM):
        self.__studentID = NIM
    
    # getter #
    def getStudentID(self):
        return self.__studentID