#include <iostream>
#include "RumahSakit.h"
#include "Dokter.h"
#include "Pasien.h"
#include "Ruangan.h"

using namespace std;

int main() {
    // Inisialisasi Rumah Sakit
    RumahSakit rs("RS Harapan Ibu", "Jl. Setiabudhi No. 105");

    // Data awal
    // Tambah data dokter, pasien, dan ruangan secara statis
    rs.tambahDokter(Dokter("Dr. Andi", 45, "Laki-laki", "Sukabumi", "Umum", "081313787409", "D001"));
    rs.tambahDokter(Dokter("Dr. Siti", 40, "Perempuan", "Bandung", "Kandungan", "08123456789", "D002"));
    rs.tambahDokter(Dokter("Dr. Budi", 50, "Laki-laki", "Parongpong", "Jantung", "08134567890", "D003"));
    rs.tambahDokter(Dokter("Dr. Ani", 38, "Perempuan", "Jakarta", "Gigi", "08145678901", "D004"));

    rs.tambahPasien(Pasien("Siti", 30, "Perempuan", "Bekasi", "Tipes", "Rawat Inap","P001"));
    rs.tambahPasien(Pasien("Rina", 28, "Perempuan", "Bandung", "Demam", "Rawat Jalan","P002"));
    rs.tambahPasien(Pasien("Andi", 25, "Laki-laki", "Tasikmalaya", "DBD", "Rawat Inap","P003"));
    rs.tambahPasien(Pasien("Budi", 35, "Laki-laki", "Jakarta", "Sakit Kepala", "Rawat jalan","P004"));

    rs.tambahRuangan(Ruangan("R001", "ICU", 2));
    rs.tambahRuangan(Ruangan("R002", "Kelas 1", 4));
    rs.tambahRuangan(Ruangan("R003", "Kelas 2", 6));
    rs.tambahRuangan(Ruangan("R004", "Kelas 3", 8));

    // Tampilkan semua data awal
    cout << "\n=== DATA AWAL ===\n";
    rs.tampilkanSemuaData();

    // Tambah data baru secara statis
    rs.tambahDokter(Dokter("Dr. Budi", 50, "Laki-laki", "Jakarta", "Anak", "08234567890", "D005"));
    rs.tambahPasien(Pasien("Andi", 25, "Laki-laki", "Jakarta", "Demam", "Rawat Jalan", "P005"));
    rs.tambahRuangan(Ruangan("R002", "Kelas 1", 4));

    // Tampilkan semua data setelah penambahan
    cout << "\n\n=== DATA SETELAH PENAMBAHAN ===\n";
    rs.tampilkanSemuaData();

    return 0;
}
