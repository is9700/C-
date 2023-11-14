#include <iostream>
#include <string>
#include "medium.h"
using namespace std;
using namespace pk2;
int medium::anzahl=0;//static anzahl initialisieren

medium::medium(string titel, int jahr): id{anzahl++},titel{titel},jahr{jahr} {}



