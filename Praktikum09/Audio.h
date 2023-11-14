#ifndef  AUDIO_HPP
#define AUDIO_HPP
#include <iostream>
#include <string>

#include"medium.h"
using namespace std;
namespace pk2
{


class Audio : public medium
{
private:
    string interpret;
    int dauer;

public:
    Audio( string titel, int jahre, string interpret, int dauer);
    inline int getdauer() const{   return dauer;};
    inline string getinterpret() const{return interpret;};
   virtual  void druckedaten()  override;
};
}
#endif
