#ifndef RUANGAN_H
#define RUANGAN_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Kelas Ruangan
class Ruangan {
private:
    string idRuangan;
    string tipe;
    int kapasitas;

public:
// Constructor
    Ruangan(string idRuangan = "", string tipe = "", int kapasitas = 0)
        : idRuangan(idRuangan), tipe(tipe), kapasitas(kapasitas) {}

    // Getter
    string getIdRuangan()  { 
        return idRuangan; 
    }
    string getTipe()  { 
        return tipe; 
    }
    int getKapasitas()  { 
        return kapasitas; 
    }
    // setter
    void setIdRuangan(string idRuangan) {
        this->idRuangan = idRuangan;
    }
    void setTipe(string tipe) {
        this->tipe = tipe;
    }
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }
    // Method untuk menampilkan info ruangan
    void tampilkanInfo() const {
        cout << left << setw(10) << idRuangan
             << setw(15) << tipe
             << setw(10) << kapasitas << "\n";
    }
};

#endif
