/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
#include "header.hh"

// default constructor
Course::Course() {
    this->codeMK = "";
    this->nameMK = "";
}
Course::Course(string kode_matkul, string nama_matkul) {
    this->codeMK = kode_matkul;
    this->nameMK = nama_matkul;
}

// setter and getter
void Course::setCodeMK(string kode_matkul) {
    this->codeMK = kode_matkul;
}
void Course::setNameMK(string nama_matkul) {
    this->nameMK = nama_matkul;
}
string Course::getCodeMK() {
    return this->codeMK;
}
string Course::getNameMK() {
    return this->nameMK;
}

// destructor
Course::~Course() {
}