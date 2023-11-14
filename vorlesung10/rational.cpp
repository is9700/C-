#include "rational.h"

using namespace std;

rational::rational(int zaehler, int nenner) : zaehler {zaehler}, nenner {nenner} {}

/*
rational rational::operator*(const rational &r){
    rational neu {this->zaehler * r.zaehler, this->nenner * r.nenner};
    return neu;
}
*/

rational operator*(const rational &l, const rational &r){
   rational neu {l.zaehler * r.zaehler, l.nenner * r.nenner};
   return neu;
}

ostream& operator<<(ostream &out, const rational r){
   // out << "(" << r.zaehler << "/" << r.nenner << ")";
   out << "("<<r.zaehler<<"/"<<r.nenner<<")";
    return out;
}

rational operator+(const rational &l, const rational &r)
{
    rational neu(l.zaehler+r.zaehler ,l.nenner+r.nenner);
    return neu ;
}
