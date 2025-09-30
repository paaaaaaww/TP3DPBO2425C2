#ifndef RUMAHSAKIT_H
#define RUMAHSAKIT_H
#include <vector>
#include "Dokter.h"
#include "Pasien.h"
#include "Ruangan.h"

// Kelas RumahSakit yang mengelola dokter, pasien, dan ruangan
class RumahSakit {
private:
    string nama;
    string alamat;
    vector<Dokter> daftarDokter; // Menyimpan daftar dokter
    vector<Pasien> daftarPasien; // Menyimpan daftar pasien
    vector<Ruangan> daftarRuangan; // Menyimpan daftar ruangan

public:
// Constructor
    RumahSakit(string nama = "", string alamat = "") : nama(nama), alamat(alamat) {}

    //getter
    string getNama() { 
        return nama; 
    }
    string getAlamat() { 
        return alamat; 
    }
    // Getter untuk mendapatkan daftar dokter, pasien, dan ruangan
    const vector<Dokter>& getDaftarDokter() const { 
        return daftarDokter; 
    }
    const vector<Pasien>& getDaftarPasien() const { 
        return daftarPasien; 
    }
    const vector<Ruangan>& getDaftarRuangan() const { 
        return daftarRuangan; 
    }
    
    //setter
    void setNama(string nama) { 
        this->nama = nama; 
    }
    void setAlamat(string alamat) { 
        this->alamat = alamat; 
    }
    // Setter untuk mengatur daftar dokter, pasien, dan ruangan
    void setDaftarDokter(vector<Dokter> daftarDokter) { 
        this->daftarDokter = daftarDokter; 
    }
    void setDaftarPasien(vector<Pasien> daftarPasien) { 
        this->daftarPasien = daftarPasien; 
    }
    void setDaftarRuangan(vector<Ruangan> daftarRuangan) { 
        this->daftarRuangan = daftarRuangan; 
    }


    // Method untuk menambah data dokter
    void tambahDokter(const Dokter &d) { 
        daftarDokter.push_back(d); 
    }
    // Method untuk menambah data pasien
    void tambahPasien(const Pasien &p) { 
        daftarPasien.push_back(p); 
    }
    // Method untuk menambah data ruangan
    void tambahRuangan(const Ruangan &r) { 
        daftarRuangan.push_back(r); 
    }

    // Method untuk menampilkan garis pemisah
    void garis(int n) const {
        for (int i = 0; i < n; i++) cout << "-";
        cout << "\n";
    }

    // Method untuk menampilkan semua data
    void tampilkanSemuaData() const {
        cout << "\nRumah Sakit  : " << nama << "\n";
        cout << "Alamat         : " << alamat << "\n";

        // Tampilkan daftar dokter
        cout << "\n== Daftar Dokter ==\n";
        cout << left << setw(15) << "Nama"
             << setw(10) << "Umur"
             << setw(15) << "Gender"
             << setw(15) << "Alamat"
             << setw(15) << "Spesialis"
             << setw(15) << "No Telp" 
             << setw(10) << "ID" << "\n";
        garis(95);
        for (auto &d : daftarDokter) d.tampilkanInfo();

        // Tampilkan daftar pasien
        cout << "\n\n== Daftar Pasien ==\n";
        cout << left << setw(15) << "Nama"
             << setw(10) << "Umur"
             << setw(15) << "Gender"
             << setw(15) << "Alamat"
             << setw(15) << "Penyakit"
             << setw(15) << "Status"
             << setw(10) << "ID" << "\n";
        garis(95);
        for (auto &p : daftarPasien) p.tampilkanInfo();

        // Tampilkan daftar ruangan
        cout << "\n\n== Daftar Ruangan ==\n";
        cout << left << setw(10) << "ID"
             << setw(15) << "Tipe"
             << setw(10) << "Kapasitas" << "\n";
        garis(40);
        // Tampilkan daftar ruangan
        for (auto &r : daftarRuangan) r.tampilkanInfo();
    }
};

#endif
