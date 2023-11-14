#include <iostream>
#include "rational.h"
using namespace std;
int main(){
    rational a {2, 4};
    rational b {4, 3};
    rational c{3 , 2};
  cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "+" << b << "=" << operator+(a,b) << endl;

cout<<c<<"+"<<b<<"="<<c+b<<endl;
    return 0;
}