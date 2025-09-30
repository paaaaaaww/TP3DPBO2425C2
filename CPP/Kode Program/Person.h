#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

// Kelas dasar Person
class Person {
protected:
    string nama;
    int umur;
    string gender;
    string alamat;

public:
// Constructor
    Person(string nama = "", int umur = 0, string gender = "", string alamat = "") 
        : nama(nama), umur(umur), gender(gender), alamat(alamat) {}

    // Getter
    string getNama() { 
        return nama; 
    }
    int getUmur()  { 
        return umur; 
    }
    string getGender()  { 
        return gender; 
    }
    string getAlamat()  { 
        return alamat; 
    }

    // Setter
    void setNama(string nama) { 
        this->nama = nama; 
    }
    void setUmur(int umur) { 
        this->umur = umur; 
    }
    void setGender(string gender) { 
        this->gender = gender; 
    }
    void setAlamat(string alamat) { 
        this->alamat = alamat; 
    }

    // Method untuk menampilkan info
    virtual void tampilkanInfo() const {
        cout << "Nama   : " << nama << "\n";
        cout << "Umur   : " << umur << "\n";
        cout << "Gender : " << gender << "\n";
        cout << "Alamat : " << alamat << "\n";
    }
};

#endif
