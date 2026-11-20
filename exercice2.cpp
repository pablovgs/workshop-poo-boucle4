#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void jouer_instrument() {
    }
};

class Saxophone : public Instrument {
public:
    void jouer_instrument() override {
        cout << "Le saxophone joue son son caracteristique." << endl;
    }
};

class Piano : public Instrument {
public:
    void jouer_instrument() override {
        cout << "Le piano joue son son caracteristique." << endl;
    }
};

int main() {
    int choix;

    cout << "Choisissez un instrument :" << endl;
    cout << "1 - Saxophone" << endl;
    cout << "2 - Piano" << endl;
    cin >> choix; // cin (entrée clavier) est stocké dans la variable choix

    if (choix == 1) {
        Saxophone saxophone;
        saxophone.jouer_instrument();
    }
    else if (choix == 2) {
        Piano piano;
        piano.jouer_instrument();
    }
    else {
        cout << "Choix incorrect." << endl;
    }
}