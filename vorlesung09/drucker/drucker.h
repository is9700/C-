#include "info.h"
#include <string>
#include <iostream>

using namespace std;

class Drucker{
   private:
      Info *info;
      string (Info::*lang)(); //Datentyp (Klassenname :: *Funktionsname)() :Deklaration von Elementzeigern
        int (Info::*Anzahl)();
    public:
       Drucker(Info *info) : info {info} {}
       void functionsupplementaire(int (Info::*Anzahl)())
       {
        this->Anzahl=Anzahl;
       }
       
       void setLanguage(string (Info::*lang)()){
           this->lang = lang;
       }  
       void start(){
           cout << (info->*lang)() << endl;
       }

};