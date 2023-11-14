
#include "LinkedList.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;
using namespace pk2;
void ausgabe(const char *text)
{
  std::cout << text << std::endl;
}
// Test der LinkedList-Klasse
int main()
{

  LinkedList liste;
  liste.append("Element 1");
  liste.insert("Element 2", 2);
  LinkedList liste2 = liste;
  cout << "Liste:" << endl;
  liste.visit_all(ausgabe);
  liste.remove(2);
  cout << "Liste:" << endl;
  liste.visit_all(ausgabe);
  cout << "Liste2:" << endl;
  liste2.visit_all(ausgabe);
  return 0;
}