#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunlulus;
};

int main() {
    // Array Statis
    Mahasiswa mahasiswaStatis[4];

    mahasiswaStatis[0] = {"A11.2020.01234","Andi","broadcasing",2023,};
    mahasiswaStatis[1] = {"A11.2010.01234","Budi","sistem informasi",2013,};
    mahasiswaStatis[2] = {"A11.2000.01234","Ali","DKV",2003,};
    mahasiswaStatis[3] = {"A11.1900.01234","Siti","Kesehatan",1993,};

    cout << "Data Mahasiswa (Array Statis):" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "nim: " << mahasiswaStatis[i].nim << endl;
        cout << "nama: " << mahasiswaStatis[i].nama << endl;
        cout << "Jurusan: " << mahasiswaStatis[i].jurusan << endl;
        cout << "tahun lulus: " << mahasiswaStatis[i].tahunlulus<< endl;
        cout << endl;
    }

    // Array Dinamis
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    Mahasiswa* mahasiswaDinamis = new Mahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa ke-" << (i+1) << ":" << endl;
        cout << "nim: ";
        cin.ignore();
        getline(cin, mahasiswaDinamis[i].nim);
        cout << "nama: ";
        cin >> mahasiswaDinamis[i].nama;
        cout << "Jurusan: ";
        cin.ignore();
        getline(cin, mahasiswaDinamis[i].jurusan);
        cout << "tahun lulus: ";
        cin >> mahasiswaDinamis[i].tahunlulus;
        cout << endl;
    }

    cout << "Data Mahasiswa (Array Dinamis):" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "nim: " << mahasiswaDinamis[i].nim << endl;
        cout << "nama: " << mahasiswaDinamis[i].nama << endl;
        cout << "Jurusan: " << mahasiswaDinamis[i].jurusan << endl;
        cout << "tahun lulus: " << mahasiswaDinamis[i].tahunlulus << endl;
        cout << endl;
    }

    delete[] mahasiswaDinamis; // Menghapus alokasi memori array dinamis

    return 0;
}
