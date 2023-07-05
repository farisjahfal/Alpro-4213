#include <iostream>

using namespace std;
const float phi = 3.14159;// nilai phi

struct PersegiPanjang {
    float panjang;
    float lebar;

    float hitungLuas() {
        return panjang * lebar;
    }
};

struct Lingkaran {
    float jariJari;

    float hitungLuas() {
        return phi * jariJari * jariJari;
    }
};

struct Kerucut {
    float jariJari;
    float tinggi;

    float hitungVolume() {
        return (1.0 / 3.0) * phi * jariJari * jariJari * tinggi;
    }
};

struct Bola {
    float jariJari;

    float hitungVolume() {
        return (4.0 / 3.0) * phi * jariJari * jariJari * jariJari;
    }
};

int main() {
    // Contoh penggunaan struktur dengan member
    PersegiPanjang pp;
    pp.panjang = 5.0;
    pp.lebar = 3.0;
    float luasPersegiPanjang = pp.hitungLuas();
    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;

    Lingkaran lingkaran;
    lingkaran.jariJari = 4.0;
    float luasLingkaran = lingkaran.hitungLuas();
    cout << "Luas Lingkaran: " << luasLingkaran << endl;

    Kerucut kerucut;
    kerucut.jariJari = 3.0;
    kerucut.tinggi = 6.0;
    float volumeKerucut = kerucut.hitungVolume();
    cout << "Volume Kerucut: " << volumeKerucut << endl;

    Bola bola;
    bola.jariJari = 5.0;
    float volumeBola = bola.hitungVolume();
    cout << "Volume Bola: " << volumeBola << endl;



    return 0;
