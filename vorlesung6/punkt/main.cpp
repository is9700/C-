#include "punkt.h"
#include <iostream>

void print(Punkt p){
    std::cout << p.to_string() << std::endl;
}

int main(){

    Punkt s {100, 500};
    Punkt *p = new Punkt {900,1000};

    Punkt d{31,22};
    Punkt *c=new Punkt(33,2);

        Punkt e {200,500};
    Punkt l {e};
    std::cout << s.getX() << std::endl;
    std::cout << p->getX() << std::endl;

    print(l);
    delete p;
    /*
    Punkt p {200,500};
    Punkt s {p};

    print(s);

    std::cout << p.to_string() << std::endl;
    */

    //Punkt p[100];
    return 0;
}