#include <iostream>
#include <string>
#include "bild.h"
using namespace pk2;
using namespace std;


bild::bild( string titel, int jahr, string ort) : medium( titel, jahr), ort{ort}{}


void bild::druckedaten(){

    cout<<gettitel()<<"aufgenommen im Jahr "<<getjahre()<<" in "<<ort<<endl;
}
