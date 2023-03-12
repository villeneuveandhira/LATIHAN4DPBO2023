/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
#include "header.hh"

// default constructor
Dosen::Dosen() : SivitasAkademik(){
    this->employeeID = "";
    this->lastEdu = "";
    this->skill = "";
}
Dosen::Dosen(string nik, string nama, string jenis_kelamin, string email, string asal_univ, string fakultas, string nip, string pend_terakhir, string keahlian) : SivitasAkademik(nik, nama, jenis_kelamin, email, asal_univ, fakultas) {
    this->employeeID = nip;
    this->lastEdu = pend_terakhir;
    this->skill = keahlian;
}

// setter and getter
void Dosen::setEmployeeID(string nip) {
    this->employeeID = nip;
}
void Dosen::setLastEdu(string pend_terakhir) {
    this->lastEdu = pend_terakhir;
}
void Dosen::setSkill(string keahlian) {
    this->skill = keahlian;
}
string Dosen::getEmployeeID() {
    return this->employeeID;
}
string Dosen::getLastEdu() {
    return this->lastEdu;
}
string Dosen::getSkill() {
    return this->skill;
}

// destructor
Dosen::~Dosen() {
}