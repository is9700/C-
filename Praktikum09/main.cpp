#ifndef MAIN_H_
#define MAIN_H

#include "LinkedList.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include "medium.h"
#include "Audio.h"
#include "bild.h"
using namespace std;
using namespace pk2;
void ausgabe(medium* text)
{
  text->druckedaten();
}
// Test der LinkedList-Klasse
int main()
{ 
LinkedList<medium>* list=new LinkedList<medium>();


  Audio *aud=new Audio("Younes",2000,"Ismail",1998);  
  bild *b=new bild{"picasso",2010,"Dortmund"};
  bild *c=new bild{"picasso",2010,"Dortmund"};
  bild *d=new bild{"picasso",2010,"Dortmund"};
  bild *e=new bild{"picasso",2010,"Dortmund"};

  
 list->append(b);
  list->append(c);
   list->append(d);
    list->append(e);
     list->append(aud);


  //liste.append(a);
  //liste->append(*b);
  list->visit_all(ausgabe);
  

  
  
  return 0;
}










/*liste.append("Element 1");
  liste.insert("Element 2", 2);
  LinkedList liste2 = liste;
  cout << "Liste:" << endl;
  liste.visit_all(ausgabe);
  liste.remove(2);
  cout << "Liste:" << endl;
  liste.visit_all(ausgabe);
  cout << "Liste2:" << endl;
  liste2.visit_all(ausgabe);*/

  #endif