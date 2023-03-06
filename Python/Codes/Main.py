"""
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
"""

# Import #
from os import system
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from ProgramStudi import ProgramStudi
from Course import Course

# Program #
def main():
    system("cls")

    # Instantiate #
    student = []            # array of object(s)
    teacher = []
    course = []
    study = []

    # set of objects #
    # # Data Matkul
    course.append(Course("IK101", "Alpro1"))
    course.append(Course("IK201", "Alpro2"))
    course.append(Course("IK301", "Struktur Data"))
    course.append(Course("IK401", "DPBO"))

    # Data Mahasiswa
    student.append(Mahasiswa("001", "Villen", "Laki-laki", "v.andhira@upi.edu", "UPI", "FPMIPA", "2108067"))
    student.append(Mahasiswa("002", "Naufal", "Laki-laki", "alghaniyu@upi.edu", "UPI", "FPMIPA", "2105673"))
    student.append(Mahasiswa("003", "Leo", "Laki-laki", "audryloo@upi.edu", "UPI", "FPMIPA", "2102268"))

    # Data Dosen
    teacher.append(Dosen("101", "Prof Satria", "Laki-laki", "satria@upi.edu", "UPI", "FPMIPA", "1500234", "S4", "Coding"))
    teacher.append(Dosen("101", "Prof Aryo", "Laki-laki", "aryo@upi.edu", "UPI", "FPMIPA", "1610254", "S5", "Coding"))
    teacher.append(Dosen("101", "Prof Sekar", "Perempuan", "sekar@upi.edu", "UPI", "FPMIPA", "1600421", "S6", "Coding"))

    # Data Prodi
    study.append(ProgramStudi("Ilmu Komputer", "IK", course, student, teacher))

    # Output #
    for Prodi in study:
        print("Program Studi    : ", Prodi.getProdi())
        print("Kode             : ", Prodi.getKode())
        print("   List matkul :")
        i = 0
        for n in course:
            print("    - ", Prodi.getMatkul()[i].getNameMK())
            i += 1
        print()
        i = 0
        print("    Data Mahasiswa :")
        for n in student:
            print("    - ", Prodi.getMahasiswa()[i].getName())
            i += 1
        print()
        i = 0
        print("    Data Dosen : ")
        for n in teacher:
            print("    - ", Prodi.getDosen()[i].getName())
            i += 1
    
    print()
    print(" ====================== ")

    print()
    print(" Data Diri Mahasiswa :")
    i = 0
    for mhs in student:
        print(" - ", i + 1)
        print("    NIM              :", mhs.getStudentID())
        print("    Nama             :", mhs.getName())
        print("    Jenis kelamin    :", mhs.getGender())
        print("    e-mail           :", mhs.getEmail())
        i += 1

    print()
    print(" Data Diri Dosen :")
    i = 0
    for dsn in teacher:
        print(" - ", i + 1)
        print("    NIP                  :", dsn.getEmployeeID())
        print("    Nama                 :", dsn.getName())
        print("    Jenis kelamin        :", dsn.getGender())
        print("    e-mail               :", dsn.getEmail())
        print("    Pendidikan terakhir  :", dsn.getLastEdu())
        i += 1


if __name__ == "__main__":
    main()
