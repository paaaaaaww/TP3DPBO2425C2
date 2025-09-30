# TP3DPBO2425C2

Saya Fauzia Rahma Nisa mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berdasarkan Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

A. Desain Diagram Program
Program ini terdiri dari lima kelas utama, yaitu Person, Docter, Pasien, Ruangan, dan RumahSakit. Hubungan antar kelas dirancang menggunakan konsep inheritance dan composition.
- Person menjadi kelas dasar yang berisi atribut umum seseorang.
- Doctor dan Patient mewarisi atribut dari kelas Person dan juga menambahkan atribut khusus masing-masing.
- RumahSakit berperan sebagai pengelola utama data dokter, pasien, serta ruangan melalui composition (hubungan “has-a”).
- RumahSakit memiliki hubungan composition dengan Ruangan, dokter, pasien  
- Struktur relasinya dapat digambarkan seperti ini:

  

B. Atribut & Method
1. Person
Atribut:
- nama : Nama orang
- umur : Umur orang
- alamat : Alamat tempat tinggal
- gender : Jenis kelamin
Method:

Tidak ada method khusus, berfungsi sebagai superclass untuk Dokter & Pasien.

2. Dokter (extends Person)
Atribut tambahan:
- spesialis : Bidang keahlian dokter
- idDokter : ID unik dokter
- notelp : Nomor telepon dokter
Method:
- tampilkanInfo() : Menampilkan semua informasi dokter.

3. Pasien (extends Person)
Atribut tambahan:
- status : Status pasien (Rawat Inap / Rawat Jalan)
- penyakit : Penyakit pasien
- idPasien : ID unik pasien
Method:
- tampilkanInfo() : Menampilkan semua informasi pasien.

4. Ruangan
Atribut:
- id : Nomor/ID ruangan
- tipe : Jenis ruangan (ICU, Kelas 1, dll)
- kapasitas : Maksimal pasien yang bisa ditampung
Method:
- tampilkanInfo() : Menampilkan info ruangan beserta daftar pasien di dalamnya

5. RumahSakit
Atribut:
- nama : Nama rumah sakit
- alamat : Alamat rumah sakit
- daftarDokter : List semua dokter
- daftarPasien : List semua pasien
- daftarRuangan : List semua ruangan
Method:
tambahDokter(Dokter d) : Menambahkan dokter ke rumah sakit
tambahPasien(Pasien p) : Menambahkan pasien ke rumah sakit
tambahRuangan(Ruangan r) : Menambahkan ruangan ke rumah sakit
tampilkanSemuaData() : Menampilkan semua data rumah sakit, dokter, pasien, dan ruangan beserta pasien di tiap ruangan

C. Desain Program
  Konsep inheritance diterapkan dengan menjadikan Doctor dan Patient sebagai turunan dari Person. Hal ini dilakukan karena keduanya memiliki atribut dasar yang sama seperti nama dan usia. Dengan begitu, tidak perlu menuliskan ulang atribut atau method yang sama, sehingga kode menjadi lebih efisien dan terstruktur.

  Sementara itu, composition digunakan pada kelas RumahSakit. Objek Ruangan, Doctor, dan Patient “dimiliki” oleh rumah sakit. Artinya, ketika objek RumahSakit dihapus, maka semua objek yang dimilikinya juga ikut hilang. Desain ini mencerminkan hubungan nyata bahwa dokter, pasien, dan ruangan hanya relevan selama rumah sakit tersebut ada.
  
D. Alur Program
