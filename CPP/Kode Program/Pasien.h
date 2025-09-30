#ifndef PASIEN_H
#define PASIEN_H
#include "Person.h"
#include <iomanip>

// Kelas Pasien yang mewarisi dari kelas Person
class Pasien : public Person {
private:
    string idPasien;
    string penyakit;
    string status;

public:
// Constructor
    Pasien(string nama = "", int umur = 0, string gender = "", string alamat = "", string penyakit = "", string status = "", string idPasien = "")
        : Person(nama, umur, gender, alamat), penyakit(penyakit), status(status), idPasien(idPasien) {}

    // Getter
    string getIdPasien() { 
        return idPasien; 
    }
    string getPenyakit() { 
        return penyakit; 
    }
    string getStatus() { 
        return status; 
    }
    // Setter
    void setIdPasien(string idPasien) { 
        this->idPasien = idPasien; 
    }
    void setPenyakit(string penyakit) { 
        this->penyakit = penyakit; 
    }
    void setStatus(string status) { 
        this->status = status; 
    }
    // Override method
    // menampilkan info
    // Memanggil method dari kelas dasar
    void tampilkanInfo() const override {
        cout << left << setw(15) << nama
             << setw(10) << umur
             << setw(15) << gender
             << setw(15) << alamat
             << setw(15) << penyakit
             << setw(15) << status 
             << setw(10) << idPasien << "\n";        
    }
};

#endif
