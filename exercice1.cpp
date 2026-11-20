#include <iostream>
using namespace std;

class Voiture {
    public:
        int vitesseMax;
        int vitesse;
        int acceleration;
        static int nombreObjets;

        Voiture() {
            vitesseMax = 100;
            vitesse = 0;
            acceleration = 10;
            nombreObjets = nombreObjets+1;
        }

        Voiture(int vitesseMax, int acceleration) {
            this->vitesseMax = vitesseMax;
            this->acceleration = acceleration;
            vitesse = 0;
            nombreObjets = nombreObjets+1;
        }

        virtual void accelerer() {
            vitesse += acceleration;
            if (vitesse > vitesseMax) {
                vitesse = vitesseMax;
            }
        }

        static int getNombreObjets() {
            return nombreObjets;
        }
};

class VoitureDeSport : public Voiture {
    
    private:
        static int nombreObjetsSport;
    public:
        VoitureDeSport() {
            vitesseMax = 250;
            vitesse = 0;
            acceleration = 25;
            nombreObjetsSport++;
        }

        VoitureDeSport(int vitesseMax, int acceleration)
            : Voiture(vitesseMax, acceleration) {
            nombreObjetsSport++;
        }

        int initialiser(int vitesseMax, int acceleration) {
            this->vitesseMax = vitesseMax;
            this->acceleration = acceleration;
            vitesse = 0;
            return 0;
        }

        void accelerer(){
            Voiture::accelerer();
        }

        static int getNombreObjetsSport() {
            return nombreObjetsSport;
        }
};

int Voiture::nombreObjets = 0;
int VoitureDeSport::nombreObjetsSport = 0;

int main() {
    Voiture voiture;
    Voiture voitureRapide(180, 20);
    VoitureDeSport sport;
    VoitureDeSport superSport(300, 30);

    voiture.accelerer();
    superSport.accelerer();

    cout << "Vitesse voiture standard : " << voiture.vitesse << endl;
    cout << "Vitesse voiture de sport : " << superSport.vitesse << endl;
    cout << "Nombre de voitures : " << Voiture::getNombreObjets() << endl;
    cout << "Nombre de voitures de sport : "
         << VoitureDeSport::getNombreObjetsSport() << endl;

    return 0;
}
