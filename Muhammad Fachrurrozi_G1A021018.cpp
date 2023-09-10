#include <iostream>

// Definisi Abstrak Data Type (ADT) Jajargenjang
class Jajargenjang {
public:
    // Metode untuk mengatur panjang dan lebar jajargenjang
    virtual void setPanjang(double p) = 0;
    virtual void setLebar(double l) = 0;

    // Metode untuk menghitung luas dan keliling jajargenjang
    virtual double hitungLuas() = 0;
    virtual double hitungKeliling() = 0;
};

// Implementasi ADT Jajargenjang
class JajargenjangImpl : public Jajargenjang {
private:
    double panjang;
    double lebar;

public:
    // Konstruktor
    JajargenjangImpl() : panjang(0), lebar(0) {}

    // Metode untuk mengatur panjang jajargenjang
    void setPanjang(double p) {
        panjang = p;
    }

    // Metode untuk mengatur lebar jajargenjang
    void setLebar(double l) {
        lebar = l;
    }

    // Metode untuk menghitung luas jajargenjang
    double hitungLuas() {
        return panjang * lebar;
    }

    // Metode untuk menghitung keliling jajargenjang
    double hitungKeliling() {
        return 2 * (panjang + lebar);
    }
};

int main() {
    // Membuat objek jajargenjang
    JajargenjangImpl jajargenjang;

    // Mengatur panjang dan lebar jajargenjang
    jajargenjang.setPanjang(5.0);
    jajargenjang.setLebar(3.0);

    // Menghitung dan menampilkan luas dan keliling jajargenjang
    std::cout << "Luas Jajargenjang: " << jajargenjang.hitungLuas() << std::endl;
    std::cout << "Keliling Jajargenjang: " << jajargenjang.hitungKeliling() << std::endl;

    return 0;
}
