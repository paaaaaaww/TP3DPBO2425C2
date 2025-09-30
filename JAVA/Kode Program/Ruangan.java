// kelas Ruangan
public class Ruangan {
    private String id;
    private String tipe;
    private int kapasitas;

    // konstruktor
    public Ruangan(String id, String tipe, int kapasitas) {
        this.id = id;
        this.tipe = tipe;
        this.kapasitas = kapasitas;
    }

    // method untuk menampilkan informasi ruangan
    public void tampilkanInfo() {
        System.out.printf("%-10s %-15s %-10d\n", id, tipe, kapasitas);
    }
}
