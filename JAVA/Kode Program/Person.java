// kelas Person sebagai kelas induk
public class Person {
    protected String nama;
    protected int umur;
    protected String gender;
    protected String alamat;

    // konstruktor
    public Person(String nama, int umur, String gender, String alamat) {
        this.nama = nama;
        this.umur = umur;
        this.gender = gender;
        this.alamat = alamat;
    }

    // method untuk menampilkan informasi dasar
    public void tampilkanInfo() {
        System.out.printf("%-15s %-5d %-12s %-15s", nama, umur, gender, alamat);
    }
}
