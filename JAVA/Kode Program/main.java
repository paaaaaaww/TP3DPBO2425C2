
public class Main {
    // method utama untuk menjalankan program
    public static void main(String[] args) {
        // membuat objek RumahSakit
        RumahSakit rs = new RumahSakit("RS Harapan Ibu", "Jl. Setiabudhi No. 105");

        // Data awal dokter, pasien, dan ruangan
        rs.tambahDokter(new Dokter("Dr. Andi", 45, "Laki-laki", "Sukabumi", "Umum", "081313787409", "D001"));
        rs.tambahDokter(new Dokter("Dr. Siti", 40, "Perempuan", "Bandung", "Kandungan", "08123456789", "D002"));
        rs.tambahDokter(new Dokter("Dr. Budi", 50, "Laki-laki", "Parongpong", "Jantung", "08134567890", "D003"));
        rs.tambahDokter(new Dokter("Dr. Ani", 38, "Perempuan", "Jakarta", "Gigi", "08145678901", "D004"));

        rs.tambahPasien(new Pasien("Siti", 30, "Perempuan", "Bekasi", "Tipes", "Rawat Inap", "P001"));
        rs.tambahPasien(new Pasien("Rina", 28, "Perempuan", "Bandung", "Demam", "Rawat Jalan", "P002"));
        rs.tambahPasien(new Pasien("Andi", 25, "Laki-laki", "Tasikmalaya", "DBD", "Rawat Inap", "P003"));
        rs.tambahPasien(new Pasien("Budi", 35, "Laki-laki", "Jakarta", "Sakit Kepala", "Rawat jalan", "P004"));

        rs.tambahRuangan(new Ruangan("R001", "ICU", 2));
        rs.tambahRuangan(new Ruangan("R002", "Kelas 1", 4));
        rs.tambahRuangan(new Ruangan("R003", "Kelas 2", 6));
        rs.tambahRuangan(new Ruangan("R004", "Kelas 3", 8));

        // Tampilkan data awal
        System.out.println("\n=== DATA AWAL ===");
        rs.tampilkanSemuaData();

        // Tambah data baru setelah data awal
        rs.tambahDokter(new Dokter("Dr. Fauzia", 20, "Perempuan", "Jakarta", "Bedah", "08234567890", "D005"));
        rs.tambahPasien(new Pasien("karina", 25, "Perempuan", "Jakarta", "Demam", "Rawat Jalan", "P005"));
        rs.tambahRuangan(new Ruangan("R002", "Kelas 1", 4));

        // Tampilkan data setelah penambahan
        System.out.println("\n\n=== DATA SETELAH PENAMBAHAN ===");
        rs.tampilkanSemuaData();
    }
}
