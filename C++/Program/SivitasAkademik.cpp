/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
#include "header.hh"

// default constructor
SivitasAkademik::SivitasAkademik() : Human() {
    this->emailEdu = "";
    this->univ = "";
    this->faculty = "";
}
// parameter constructor
SivitasAkademik::SivitasAkademik(string nik, string nama, string jenis_kelamin, string email, string asal_univ, string fakultas) : Human(nik, nama, jenis_kelamin) {
    this->emailEdu = email;
    this->univ = asal_univ;
    this->faculty = fakultas;
}

// setter and getter
void SivitasAkademik::setEmailEdu(string email) {
    this->emailEdu = email;
}
void SivitasAkademik::setUniv(string asal_univ) {
    this->univ = asal_univ;
}
void SivitasAkademik::setFaculty(string fakultas) {
    this->faculty = fakultas;
}
string SivitasAkademik::getEmail() {
    return this->emailEdu;
}
string SivitasAkademik::getUniv() {
    return this->univ;
}
string SivitasAkademik::getFaculty() {
    return this->faculty;
}

// destructor
SivitasAkademik::~SivitasAkademik() {
}