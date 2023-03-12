/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
#include "header.hh"

// default constructor
Mahasiswa::Mahasiswa() : SivitasAkademik() {
    this->studentID = "";
}
// parameter constructor
Mahasiswa::Mahasiswa(string nik, string nama, string jenis_kelamin, string email, string asal_univ, string fakultas, string nim) : SivitasAkademik(nik, nama, jenis_kelamin, email, asal_univ, fakultas) {
    this->studentID = nim;
}

// setter and getter
void Mahasiswa::setStudentID(string nim) {
    this->studentID = nim;
}
string Mahasiswa::getStudentID() {
    return this->studentID;
}

// destructor
Mahasiswa::~Mahasiswa() {
}