/*
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

/* Import */
#include "header.hh"

/* Program */
int main() {
    // Clear console
    system ("cls");

    // Instantiate vector (to save temporary data)
    vector<Mahasiswa> student;
    vector<Dosen> teacher;
    vector<Course> course;
    vector<ProgramStudi> study;
    int i;

    // Initialize
    i = 0;

    /* Set the data (Hardcoded) */
    // Data 'matkul'
    course.push_back(Course("IK101", "Alpro1"));
    course.push_back(Course("IK201", "Alpro2"));
    course.push_back(Course("IK301", "Stuktur Data"));
    course.push_back(Course("IK401", "DPBO"));

    // Data 'mahasiswa'
    student.push_back(Mahasiswa("001", "Villen", "Laki-laki", "v.andhira@upi.edu", "UPI", "FPMIPA", "2108067"));
    student.push_back(Mahasiswa("002", "Naufal", "Laki-laki", "algahniyu@upi.edu", "UPI", "FPMIPA", "2105673"));
    student.push_back(Mahasiswa("003", "Leo", "Laki-laki", "audryloo@upi.edu", "UPI", "FPMIPA", "2102268"));

    // Data 'dosen'
    teacher.push_back(Dosen("101", "Prof. Satria", "Laki-laki", "satria@upi.edu", "UPI", "FPMIPA", "1500234", "S4", "Coding"));
    teacher.push_back(Dosen("201", "Prof. Aryo", "Laki-laki", "aryo@upi.edu", "UPI", "FPMIPA", "1610254", "S5", "Coding"));
    teacher.push_back(Dosen("301", "Prof. Sekar", "Perempuan", "sekar@upi.edu", "UPI", "FPMIPA", "1700421", "S6", "Coding"));

    // Data 'prodi'
    study.push_back(ProgramStudi("Ilmu Komputer", "IK", course, student, teacher));

    /* OUTPUT */
    for(ProgramStudi prodi : study) {
        cout << "Program Studi    : " << prodi.getProdi() << endl;
        cout << "Kode             : " << prodi.getKode() << endl;
        cout << "   List matkul :" << endl;
        for (Course matkul : course) {
            cout << "    - " << matkul.getNameMK() << endl;
        }
        cout << endl;
        cout << "    Data Mahasiswa :" << endl;
        for (Mahasiswa mhs : student) {
            cout << "    - "<< mhs.getName() << endl;
        }
        cout << "    Data Dosen : " << endl;
        for (Dosen dsn : teacher) {
            cout << "    - " << dsn.getName() << endl;
        }
    }

    cout << " \n====================== " << endl;

    cout << " \nData Diri Mahasiswa :" << endl;
    i = 0;
    for(Mahasiswa mhs : student) {
        cout << " - " << i + 1 << endl;
        cout << "    NIM              :" << mhs.getStudentID() << endl;
        cout << "    Nama             :" << mhs.getName() << endl;
        cout << "    Jenis kelamin    :" << mhs.getGender() << endl;
        cout << "    e-mail           :" << mhs.getEmail() << endl;
        i++;
    }

    cout << " \nData Diri Dosen :" << endl;
    i = 0;
    for(Dosen dsn : teacher) {
        cout << " - " << i + 1 << endl;
        cout << "    NIP                    :" << dsn.getEmployeeID() << endl;
        cout << "    Nama                   :" << dsn.getName() << endl;
        cout << "    Jenis kelamin          :" << dsn.getGender() << endl;
        cout << "    e-mail                 :" << dsn.getEmail() << endl;
        cout << "    Pendidikan terakhir    :" << dsn.getLastEdu() << endl;
        i++;
    }

    return 0;
}
