#include <iostream>
#include <string>
#include "Audio.h"
using namespace std;
 Audio::Audio(string titel, int jahre, string interpret, int dauer) : medium( titel,  jahre), 
interpret{interpret}, dauer{dauer}{}

// levi.wanisch001@fh-dortmund.de






void Audio::druckedaten(){

    cout<<"daten :"<<gettitel()<<"von Stereophonics aus"<<getjahre()<<getinterpret()<<getdauer()<<endl;
}
