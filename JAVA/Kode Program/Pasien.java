// kelas Pasien yang mewarisi kelas Person
public class Pasien extends Person {
    private String penyakit;
    private String status;
    private String idPasien;

    // konstruktor
    public Pasien(String nama, int umur, String gender, String alamat, String penyakit, String status, String idPasien) {
        super(nama, umur, gender, alamat);
        this.penyakit = penyakit;
        this.status = status;
        this.idPasien = idPasien;
    }

    // method untuk menampilkan informasi pasien
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.printf(" %-15s %-15s %-10s\n", penyakit, status, idPasien);
    }
}
