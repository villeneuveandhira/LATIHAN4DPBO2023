/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
#include "header.hh"

// default constructor
Human::Human() {
    this->num = "";
    this->name = "";
    this->gender = "";
}
// Parameter constructor
Human::Human(string n, string nama, string jenis_kelamin) {
    this->num = n;
    this->name = nama;
    this->gender = jenis_kelamin;
}

// setter and getter
void Human::setNum(string n) {
    this->num = n;
}
void Human::setName(string nama) {
    this->name = nama;
}
void Human::setGender(string jenis_kelamin) {
    this->gender = jenis_kelamin;
}
string Human::getNum() {
    return this->num;
}
string Human::getName() {
    return this->name;
}
string Human::getGender() {
    return this->gender;
}

// destructor
Human::~Human() {
}