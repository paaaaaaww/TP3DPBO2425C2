// kelas Dokter yang mewarisi kelas Person
public class Dokter extends Person {
    private String spesialis;
    private String noTelp;
    private String idDokter;

    // konstruktor
    public Dokter(String nama, int umur, String gender, String alamat, String spesialis, String noTelp, String idDokter) {
        super(nama, umur, gender, alamat);
        this.spesialis = spesialis;
        this.noTelp = noTelp;
        this.idDokter = idDokter;
    }

    // method untuk menampilkan informasi dokter
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.printf(" %-15s %-15s %-10s\n", spesialis, noTelp, idDokter);
    }
}
