"""
Saya Villeneuve Andhira Suwandhi NIP 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

# Import #
from SivitasAkademik import SivitasAkademik

# Class declaration #
class Dosen(SivitasAkademik):
    # Private class #
    __employeeID = ""               # NIP
    __lastEdu = ""                  # pend_terakhir
    __skill = ""                    # keahlian

    # default constructor #
    def __init__(self, NIK = "", nama = "", jenis_kelamin = "", email_edu = "", asal_universitas = "", fakultas = "", NIP = "", pend_terakhir = "", keahlian = ""):
        super().__init__(NIK, nama, jenis_kelamin, email_edu, asal_universitas, fakultas)
        self.__employeeID = NIP
        self.__lastEdu = pend_terakhir
        self.__skill = keahlian
    
    # setter #
    def setEmployeeID(self, NIP):
        self.__employeeID = NIP
    def setLastEdu(self, pend_terakhir):
        self.__lastEdu = pend_terakhir
    def setSkill(self, keahlian):
        self.__skill = keahlian
    
    # getter #
    def getEmployeeID(self):
        return self.__employeeID
    def getLastEdu(self):
        return self.__lastEdu
    def getSkill(self):
        return self.__skill