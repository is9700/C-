// include guards
#include <string>
#include "medium.h"
class bild : public medium
{
private:
    string ort;

public:
    bild( string titel, int jahr, string ort);
    inline string getOrt() const{ return ort;} ;
    virtual void druckedaten()override ;//
};


