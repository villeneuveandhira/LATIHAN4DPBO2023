# Data diri
NIM               : 2108067<br />
Nama              : Villeneuve Andhira Suwandhi<br />
Program Studi     : Ilmu Komputer C1 2021<br />

# LATIHAN4DPBO2023
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan
Python yang mengimplementasikan konsep inheritance, composition, dan array of
object pada kelas-kelas tersebut:
<br />
●  Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi<br />
● Human: NIK, nama, jenis_kelamin<br />
● SivitasAkademik: asal_universitas, email_edu<br />
● Dosen: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian<br />
● Course: nama_matakuliah,<br />
● Program Studi: nama_prodi, kode, course<br />
<br />
Note.<br />
● Boleh menambahkan properti/atribut baru<br />
● Tampilkan data selengkap-lengkapnya dalam bentuk list/tabel<br />
● Program dikumpulkan pada repository GitHub yang dibuat public dengan nama
“LATIHAN4DPBO2023”<br />
○ Hanya program pada branch main yang akan dinilai dan diperiksa<br />
○ Jika waktu pengumpulan sudah habis dan ingin mengupdate kode program,
update pada branch lain karena mengupdate branch Main setelah waktu
pengumpulan terlewat maka program tidak akan dinilai<br />
● Struktur folder<br />
○ CPP (program, screenshot)<br />
○ Python<br />
○ README.md<br />
● File README berisi desain program, penjelasan alur, dan dokumentasi saat
program dijalankan (screenshot/screen record)<br />

# Desain Program () {}

![UML](https://user-images.githubusercontent.com/101118033/224547686-30ebeaab-4530-4c26-8c93-781eab519306.png)

<br />
Latihan 4 DPBO -> buat kelas:<br />
- human<br />
- sivitas-akademik<br />
- mahasiswa<br />
- dosen<br />
- course<br />
- prodi<br />
- header (untuk menghindari re-definition)<br />
<br />
Berikut adalah kelas-kelasnya:<br />
Class 'Human' {<br />
      &nbsp;-> private atr :<br />
            &nbsp;&nbsp;- NIK,<br />
            &nbsp;&nbsp;- Nama,<br />
            &nbsp;&nbsp;- Jenis_kelamin,<br />
      &nbsp;-> constructor<br />
      &nbsp;-> public (setter-getter) :<br />
      &nbsp;-> destructor<br />
}<br />
<br />
Class 'Sivitas' is a 'Human' {<br />
      &nbsp;-> private atr :<br />
            &nbsp;&nbsp;- E-mail,<br />
            &nbsp;&nbsp;- Asal_universitas,<br />
            &nbsp;&nbsp;- Fakultas,<br />
      &nbsp;-> constructor:<br />
            &nbsp;&nbsp;- access(NIK, Nama, Jenis_kelamin),<br />
      &nbsp;-> public (setter-getter) :<br />
      &nbsp;-> destructor<br />
}<br />
<br />
Class 'Mahasiswa' is a 'Sivitas' {<br />
      &nbsp;-> private atr :<br />
            &nbsp;&nbsp;- NIM,<br />
      &nbsp;-> constructor<br />
            &nbsp;&nbsp;- access(NIK, Nama, Jenis_kelamin, E-mail, Asal_universitas, Fakultas),<br />
      &nbsp;-> public (setter-getter) :<br />
      &nbsp;-> destructor<br />
}<br />
<br />
Class 'Dosen' is a 'Sivitas' {<br />
      &nbsp;-> private atr :<br />
            &nbsp;&nbsp;- NIP,<br />
            &nbsp;&nbsp;- pendidikan_terakhir,<br />
            &nbsp;&nbsp;- keahlian,<br />
      &nbsp;-> constructor<br />
            &nbsp;&nbsp;- access(NIK, Nama, Jenis_kelamin, E-mail, Asal_universitas, Fakultas),<br />
      &nbsp;-> public (setter-getter) :<br />
      &nbsp;-> destructor<br />
}<br />
<br />
Class 'Course' {<br />
      &nbsp;-> private atr :<br />
            &nbsp;&nbsp;- kode_matkul,<br />
            &nbsp;&nbsp;- nama_matkul,<br />
      &nbsp;-> constructor<br />
      &nbsp;-> public (setter-getter) :<br />
      &nbsp;-> destructor<br />
}<br />
<br />
Class 'Prodi' {<br />
      &nbsp;-> private atr :<br />
            &nbsp;&nbsp;- nama_prodi,<br />
            &nbsp;&nbsp;- kode_prodi,<br />
            &nbsp;&nbsp;- component 'nama_matkul',<br />
            &nbsp;&nbsp;- component 'mahasiswa',<br />
            &nbsp;&nbsp;- component 'dosen',<br />
      &nbsp;-> constructor<br />
      &nbsp;-> public (setter-getter) :<br />
      &nbsp;-> destructor<br />
}<br />
<br />
Main program {<br />
      &nbsp;- clear/cls (optional) // supaya bersih aja<br />
      &nbsp;- 'new'/instansiasi (vektor untuk menyimpan data sementara),<br />
      &nbsp;- init (jika perlu),<br />
      &nbsp;- masukan data (HARDCODED),<br />
      &nbsp;- tampilan :<br />
            &nbsp;&nbsp;1. Data Prodi,<br />
            &nbsp;&nbsp;2. Data matkul,<br />
            &nbsp;&nbsp;3. Data mahasiswa;<br />
            &nbsp;&nbsp;4. Data dosen;<br />
      &nbsp;- Data detail seluruh mahasiswa :<br />
      &nbsp;- Data detail seluruh dosen :<br />
}<br />
<br />
Alasan urutan kelasnya:<br />
1. Hubungan 'Human' - 'Sivitas' = inheritance :
      &nbsp;- Secara objek antara mahasiswa dan sivitas itu sama yaitu manusia / human dan atribut pada kelas human dipakai semua di dalam kelas sivitas<br />
      &nbsp;- Secara objek antara mahasiswa dan sivitas itu sama yaitu manusia / human dan atribut pada kelas human dipakai semua di dalam kelas sivitas<br />
2. Hubungan 'Mahasiswa' & 'Dosen' - 'Sivitas' = inheritance:
      &nbsp;- Sivitas akademika artinya warga di lingkungan akademis tertentu, maka mahasiswa & dosen termasuk sivitas(akademika).<br />
      &nbsp;- Jadi menurut saya, base classnya adalah 'Human', lalu derived class 'Human' adalah 'Sivitas' (akademik),<br />
      &nbsp;&nbsp;dan kelas 'Sivitas' inherits dengan kelas 'Mahasiswa' dan kelas 'dosen'.
3. Hubungan 'Prodi' - 'Mahasiswa' & 'Dosen' = composite:
      &nbsp;- bukan sesama objek tapi program studi memiliki mahasiswa dan dosen dalam suatu sivitas akademik.<br />
4. Hubungan 'Prodi' - 'Course' = comopsite:
      &nbsp;- selain mahasiswa dan dosen, program studi memiliki mata kuliah agar dikontrak oleh mahasiswa dan diampu oleh dosen<br />

# Documentation () {}

![Screenshot 2023-03-12 200658](https://user-images.githubusercontent.com/101118033/224547734-1a586e93-8779-46f5-94a6-431a4cbe453f.png)

# Format janji
Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan Latihan 4<br />
dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.<br />
Aamiin.<br />
