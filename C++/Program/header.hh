/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

/* Using standard namespace */
using namespace std;

/* Kelas Manusia */
class Human {
    private:
        string num;     // NIK
        string name;    // nama
        string gender;  // jenis_kelamin

    public:
        // default constructor
        Human();
        // paramter constructor
        Human(string n, string nama, string jenis_kelamin);

        // setter and getter
        void setNum(string n);
        void setName(string nama);
        void setGender(string jenis_kelamin);
        string getNum();
        string getName();
        string getGender();

        // destructor
        ~Human();
};

/* Kelas Sivitas */
class SivitasAkademik : public Human {
    private:
        string emailEdu;    // email_edu
        string univ;        // asal_universitas
        string faculty;     // fakultas

    public:
        // default constructor
        SivitasAkademik();
        // paramter constructor
        SivitasAkademik(string nik, string nama, string jenis_kelamin, string email, string asal_univ, string fakultas);

        // setter and getter
        void setEmailEdu(string email);
        void setUniv(string asal_univ);
        void setFaculty(string fakultas);
        string getEmail();
        string getUniv();
        string getFaculty();

        // destructor
        ~SivitasAkademik();
};

/* Kelas Mahasiswa */
class Mahasiswa : public SivitasAkademik {
    private:
        string studentID;   // NIM

    public:
        // default constructor
        Mahasiswa();
        // paramter constructor
        Mahasiswa(string nik, string nama, string jenis_kelamin, string email, string asal_univ, string fakultas, string nim);

        // setter and getter
        void setStudentID(string nim);
        string getStudentID();

        // destructor
        ~Mahasiswa();
};

/* Kelas Dosen */
class Dosen : public SivitasAkademik {
    private:
        string employeeID;  // NIP
        string lastEdu;     // pend_terakhir
        string skill;       // keahlian

    public:
        // default constructor
        Dosen();
        // paramter constructor
        Dosen(string nik, string nama, string jenis_kelamin, string email, string asal_univ, string fakultas, string nip, string pend_terakhir, string keahlian);

        // setter and getter
        void setEmployeeID(string nip);
        void setLastEdu(string pend_terakhir);
        void setSkill(string keahlian);
        string getEmployeeID();
        string getLastEdu();
        string getSkill();

        // destructor
        ~Dosen();
};

/* Kelas Mata-kuliah */
class Course {
    private:
        string codeMK;  // kode_matkul
        string nameMK;  // nama_matkul

    public:
        // default constructor
        Course();
        // paramter constructor
        Course(string kode_matkul, string nama_matkul);

        // setter and getter
        void setCodeMK(string kode_matkul);
        void setNameMK(string nama_matkul);
        string getCodeMK();
        string getNameMK();
        
        // destructor
        ~Course();
};

/* Kelas Prodi */
class ProgramStudi {
    private:
        string prodi;                   // nama_prodi
        string kode;                    // kode_prode
        vector<Course> matkul;          // componen: maktul
        vector<Mahasiswa> mahasiswa;    // component: mahasiswa
        vector<Dosen> dosen;            // component: dosen

    public:
        // default constructor
        ProgramStudi();
        // paramter constructor
        ProgramStudi(string nama_prodi, string kode, vector<Course> matkul, vector<Mahasiswa> mhs, vector<Dosen> dsn);

        // setter and getter
        void setProdi(string nama_prodi);
        void setKode(string kode);
        void setMatkul(vector<Course> matkul);
        void setMahasiswa(vector<Mahasiswa> mhs);
        void setDosen(vector<Dosen> dsn);
        string getProdi();
        string getKode();
        vector<Course> getMatkul();
        vector<Mahasiswa> getMahasiswa();
        vector<Dosen> getDosen();
        
        // destructor
        ~ProgramStudi();
};