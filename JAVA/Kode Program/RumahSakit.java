import java.util.ArrayList;

// kelas RumahSakit yang mengelola data dokter, pasien, dan ruangan
public class RumahSakit {
    private String nama;
    private String alamat;
    private ArrayList<Dokter> daftarDokter;
    private ArrayList<Pasien> daftarPasien;
    private ArrayList<Ruangan> daftarRuangan;

    // konstruktor
    public RumahSakit(String nama, String alamat) {
        this.nama = nama;
        this.alamat = alamat;
        this.daftarDokter = new ArrayList<>();
        this.daftarPasien = new ArrayList<>();
        this.daftarRuangan = new ArrayList<>();
    }

    // method untuk menambah data
    // menambah dokter, pasien, dan ruangan
    public void tambahDokter(Dokter d) {
        daftarDokter.add(d);
    }

    public void tambahPasien(Pasien p) {
        daftarPasien.add(p);
    }

    public void tambahRuangan(Ruangan r) {
        daftarRuangan.add(r);
    }

    // method untuk menampilkan semua data
    private void garis() {
        System.out.println("--------------------------------------------------------------------------------------------");
    }

    // menampilkan semua data dokter, pasien, dan ruangan
    public void tampilkanSemuaData() {
        System.out.println("\n=== DATA DOKTER ===");
        System.out.printf("%-15s %-5s %-12s %-15s %-15s %-15s %-10s\n",
                "Nama", "Umur", "Gender", "Alamat", "Spesialis", "No Telp", "ID");
        garis();
        for (Dokter d : daftarDokter) {
            d.tampilkanInfo();
        }

        System.out.println("\n=== DATA PASIEN ===");
        System.out.printf("%-15s %-5s %-12s %-15s %-15s %-15s %-10s\n",
                "Nama", "Umur", "Gender", "Alamat", "Penyakit", "Status", "ID");
        garis();
        for (Pasien p : daftarPasien) {
            p.tampilkanInfo();
        }

        System.out.println("\n=== DATA RUANGAN ===");
        System.out.printf("%-10s %-15s %-10s\n", "ID", "Tipe", "Kapasitas");
        garis();
        for (Ruangan r : daftarRuangan) {
            r.tampilkanInfo();
        }
    }
}
