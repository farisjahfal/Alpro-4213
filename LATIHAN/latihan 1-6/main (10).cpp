#include <iostream>

using namespace std;

typedef float phi;

struct BangunDatar {
    float panjang;
    float lebar;
};

struct Lingkaran {
    float r;
};

struct Kerucut {
    float r;
    float t;
};

struct Bola {
    float r;
};

float hitungLuasPersegiPanjang(BangunDatar bangunDatar) {
    return bangunDatar.panjang * bangunDatar.lebar;
}

float hitungLuasLingkaran(Lingkaran lingkaran) {
    return phi() * lingkaran.r * lingkaran.r;
}

float hitungVolumeKerucut(Kerucut kerucut) {
    return (1.0 / 3.0) * phi() * kerucut.r * kerucut.r * kerucut.t;
}

float hitungVolumeBola(Bola bola) {
    return (4.0 / 3.0) * phi() * bola.r * bola.r * bola.r;
}

int main() {
    BangunDatar bangunDatar;
    Lingkaran lingkaran;
    Kerucut kerucut;
    Bola bola;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> bangunDatar.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> bangunDatar.lebar;
    cout << "Luas persegi panjang: " << hitungLuasPersegiPanjang(bangunDatar) << endl;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> lingkaran.r;
    cout << "Luas lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;

    cout << "Masukkan jari-jari kerucut: ";
    cin >> kerucut.r;
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.t;
    cout << "Volume kerucut: " << hitungVolumeKerucut(kerucut) << endl;

    cout << "Masukkan jari-jari bola: ";
    cin >> bola.r;
    cout << "Volume bola: " << hitungVolumeBola(bola) << endl;

    return 0;
}
