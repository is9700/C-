#include <iostream>
#include"form.h"
class rechteck : public form{
    private:
      int breite;
      int hoehe;
    public:
      rechteck(punkt bezug, int breite, int hoehe) : form(bezug), breite {breite}, hoehe {hoehe}{    
      }

      // Dieser Destruktor wurde nur fuer
      // didatische Zwecke implementiert
      ~rechteck(){
        std::cout << "Destruktor rechteck" << std::endl;
      }
      
      int flaeche() override {
          return breite * hoehe;
      }
};