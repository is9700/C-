#include <iostream>
#include "punkt.h"


class form{
  private:
    punkt bezugspunkt;
  public:
    form(punkt bezug) : bezugspunkt {bezug}{
        // dient nur didaktischen Zwecken
        std::cout << "Konstruktor form" << std::endl;
    }
    
    virtual ~form(){
        // dient nur didatischen Zwecken
        std::cout << "Destruktor Form" << std::endl;
    }

    int getX(){
        return bezugspunkt.getX();
    }

    int getY(){
        return bezugspunkt.getY();
    }

    virtual int flaeche() = 0;//abstract

};