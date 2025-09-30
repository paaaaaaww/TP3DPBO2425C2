from rumahsakit import RumahSakit
from dokter import Dokter
from pasien import Pasien
from ruangan import Ruangan

# program utama
if __name__ == "__main__":
    rs = RumahSakit("RS Bambang Sadikin", "Jl. Gegerkalong No. 10")

    #  Data awal dokter, pasien, dan ruangan
    rs.tambah_dokter(Dokter("Dr. Andi", 45, "Laki-laki", "Bandung", "Umum", "D001", "08123456789"))
    rs.tambah_dokter(Dokter("Dr. Sari", 38, "Perempuan", "Jakarta", "Anak", "D003", "08234567890"))
    rs.tambah_dokter(Dokter("Dr. Lina", 50, "Perempuan", "Surabaya", "Gigi", "D004", "08345678901"))
    rs.tambah_dokter(Dokter("Dr. Rina", 29, "Perempuan", "Medan", "Kandungan", "D005", "08456789012"))

    rs.tambah_pasien(Pasien("Siti", 30, "Perempuan", "Bandung", "Rawat Inap", "Flu", "P001"))
    rs.tambah_pasien(Pasien("Budi", 60, "Laki-laki", "Jakarta", "Rawat Inap", "Hipertensi", "P003"))
    rs.tambah_pasien(Pasien("Wati", 45, "Perempuan", "Surabaya", "Rawat Jalan", "Diabetes", "P004"))
    rs.tambah_pasien(Pasien("Joko", 50, "Laki-laki", "Medan", "Rawat Jalan", "Asma", "P005"))

    rs.tambah_ruangan(Ruangan("R001", "ICU", 2))
    rs.tambah_ruangan(Ruangan("R003", "Kelas 1", 3))
    rs.tambah_ruangan(Ruangan("R004", "Kelas 2", 4))
    rs.tambah_ruangan(Ruangan("R005", "Kelas 3", 5))
    
    # Tampilkan data awal
    print("\n=== DATA AWAL ===")
    rs.tampilkan_semua_data()

    # Tambah data statis lagi
    rs.tambah_dokter(Dokter("Dr. Budi", 40, "Laki-laki", "Jakarta", "Bedah", "D002", "08987654321"))
    rs.tambah_pasien(Pasien("Andi", 25, "Laki-laki", "Surabaya", "Rawat Jalan", "Demam", "P002"))
    rs.tambah_ruangan(Ruangan("R002", "VIP", 1))

# Tampilkan data setelah penambahan
    print("\n\n=== DATA SETELAH DITAMBAH ===")
    rs.tampilkan_semua_data()
