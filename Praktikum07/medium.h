#ifndef MEDIUM_HPP
#define MEDIUM_HPP

#include <string>
using namespace std;


class medium
{
private:
   static int anzahl ;//static 
   const int id;
    string titel;
    int jahr;

public:
     medium( string titel, int jahr);//constructor
    int alter() const{ return 2022 - jahr;};
    virtual void druckedaten() = 0;//abstract 
    inline int getid()const { return id;} ;
    inline string gettitel() const{ return titel;};
   inline int getjahre()const{ return jahr;};
     
};

#endif