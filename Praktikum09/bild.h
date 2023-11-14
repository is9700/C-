// include guards
 #ifndef  BILD_HPP
#define BILD_HPP
#include <string>
#include "medium.h"
using namespace std;
namespace pk2
{
class bild : public medium
{
private:
    string ort;

public:
    bild( string titel, int jahr, string ort);
    inline string getOrt() const{ return ort;} ;
    virtual void druckedaten()override ;//
};

}
#endif
