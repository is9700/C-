#ifndef INFO_H_
#define INFO_H_

#include <string>

using namespace std;

class Info{
   private:
     string text;
    int anzahl;
   public:
      Info(string text) : text {text} {}
      string getGerman(){ return "Hallo " + text;}
      string getEnglish(){ return "Hello " + text;}
    int getAnzahl(){ return anzahl ;}
};

#endif