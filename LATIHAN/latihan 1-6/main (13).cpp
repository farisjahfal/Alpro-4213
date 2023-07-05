#include <iostream>

enum transportation {
    BICYCLE,
    MOTORCYLE,
    CAR,
    TRAIN,
   AIRPLANE
};

int main() {
   transportation mySurroundings =CAR;

    switch (mySurroundings) {
        case BICYCLE:
            cout << "Sepeda" << endl;
            break;
        case MOTORCYLE :
            cout << "Motor" << endl;
            break;
        case CAR:
            cout << "Mobil" << endl;
            break;
        case TRAIN:
            cout << "Kereta" << endl;
            break;
        case AIRPLANE:
            cout << "Pesawat" << endl;
            break;
        default:
            cout << "Objek tidak dikenali" << endl;
            break;
    }

    return 0;
}
