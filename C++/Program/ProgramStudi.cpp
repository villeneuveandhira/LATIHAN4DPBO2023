/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
#include "header.hh"

// default constructor
ProgramStudi::ProgramStudi() {
    this->prodi = "";
    this->kode = "";
    this->matkul = {};
    this->mahasiswa = {};
    this->dosen = {};
}
ProgramStudi::ProgramStudi(string nama_prodi, string kode, vector<Course> matkul, vector<Mahasiswa> mhs, vector<Dosen> dsn) {
    this->prodi = nama_prodi;
    this->kode = kode;
    this->matkul = matkul;
    this->mahasiswa = mhs;
    this->dosen = dsn;
}

// setter and getter
void ProgramStudi::setProdi(string nama_prodi) {
    this->prodi = nama_prodi;
}
void ProgramStudi::setKode(string kode) {
    this->kode = kode;
}
void ProgramStudi::setMatkul(vector<Course> matkul) {
    this->matkul = matkul;
}
void ProgramStudi::setMahasiswa(vector<Mahasiswa> mhs) {
    this->mahasiswa = mhs;
}
void ProgramStudi::setDosen(vector<Dosen> dsn) {
    this->dosen = dsn;
}
string ProgramStudi::getProdi() {
    return this->prodi;
}
string ProgramStudi::getKode() {
    return this->kode;
}
vector<Course> ProgramStudi::getMatkul() {
    return this->matkul;
}
vector<Mahasiswa> ProgramStudi::getMahasiswa() {
    return this->mahasiswa;
}
vector<Dosen> ProgramStudi::getDosen() {
    return this->dosen;
}

// destructor
ProgramStudi::~ProgramStudi() {
}