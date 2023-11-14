#include "Audio.h"
#include "bild.h"
#include "medium.h"
#include <string>

using namespace std;


int main() {
  medium* medien[2];
  //medium * med[4];

  //med[0]->druckedaten();
  medien[0] = new Audio{"It Means Nothing", 2007, "Spieldauer : ", 229};
  medien[1] = new bild{"Gebaeude FB Informatik ", 2020, "Dortmund"};

  medien[0]->druckedaten();
  medien[1]->druckedaten();

  return 0;
}