#include "info.h"
#include "drucker.h"

int main(){
    Info i {"Bill"};
    Drucker d {&i};
   // Drucker d {i}; ghalta lezm &i khater fel constructor hatina zeiger 
    d.setLanguage(& Info::getGerman);//& Klassenname :: Funktionsname :Speicheradresse
    d.start();
    
    d.setLanguage(& Info::getEnglish);//& Klassenname :: Funktionsname :Speicheradresse
    d.start();

    d.functionsupplementaire(& Info ::getAnzahl);
    d.start();

    return 0;
}