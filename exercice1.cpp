#include <iostream>
using namespace std;

class Voiture{
    public :
        int vitesseMax;
        int vitesse;
        int acceleration;
        static int nombreObjets;

        Voiture(){
            vitesseMax = 100;
            vitesse = 0;

        }

        Voiture(int vitesseMax, int acceleration){
            vitesseMax = vitesseMax;
            acceleration = acceleration;
            vitesse = 0;
            nombreObjets++; // Rajoute 1 à la variable statique nombreObjets
        }

        void accelerer(){
            if(vitesse < vitesseMax){
                vitesse += acceleration;
            }
        }

        static int getNombreObjets(){
            
        }
};

class VoitureDeSport : public Voiture {
    
    private :
        static int nombreObjetsSport;

    public :
        VoitureDeSport(){

        }

        VoitureDeSport(int vitesseMax, int acceleration) : Voiture(){

        }

        int VoitureDeSport::initialiser(int vitesseMax, int acceleration)

        void accelerer(){

        }
        static int getNombreObjetsSport(){
            return 
        }
};

int Voiture::nombreObjets = 0;
int VoitureDeSport::nombreObjetsSport = 0;