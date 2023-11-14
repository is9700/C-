#include "punkt.h"
#include "form.h"
#include "rechteck.h"
#include <iostream>


int main(){
  
  punkt p {100, 200};
  
  rechteck r {p, 100, 100};	
  std::cout << r.flaeche() << std::endl;

  
}
