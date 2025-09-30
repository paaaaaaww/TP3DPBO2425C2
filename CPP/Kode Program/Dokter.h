#ifndef DOKTER_H
#define DOKTER_H
#include "Person.h"
#include <iomanip>

// Kelas Dokter yang mewarisi dari kelas Person
class Dokter : public Person {
private:
    string spesialis;
    string idDokter;
    string noTelp;

public:
// Constructor
    Dokter(string nama = "", int umur = 0, string gender = "", string alamat = "", string spesialis = "", string noTelp = "", string idDokter = "")
        : Person(nama, umur, gender, alamat), spesialis(spesialis), noTelp(noTelp), idDokter(idDokter) {}

    // Getter
    string getSpesialis() { 
        return spesialis; 
    }
    string getIdDokter()  { 
        return idDokter; 
    }
    string getNoTelp()  { 
        return noTelp; 
    }

    // Setter
    void setSpesialis (string spesialis) { 
        this->spesialis = spesialis; 
    }
    void setIdDokter (string idDokter) { 
        this->idDokter = idDokter; 
    }
    void setNoTelp (string noTelp) { 
        this->noTelp = noTelp; 
    }

    // Override method untuk menampilkan info
    void tampilkanInfo() const override {
        // Memanggil method dari kelas dasar
        // Person::tampilkanInfo();
        // Menampilkan info tambahan dari kelas Dokter
        cout << left << setw(15) << nama
             << setw(10) << umur
             << setw(15) << gender
             << setw(15) << alamat
             << setw(15) << spesialis
             << setw(15) << noTelp
             << setw(10) << idDokter << "\n";
    }
};

#endif
