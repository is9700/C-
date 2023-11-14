#ifndef LISTITERATOR_H_
#define LISTITERATOR_H_
#include"node.h"
#include"Iterator.h"
namespace pk2{


class listiterator : public Iterator //implements abstract class Iterator 
{
 
  node* current;

 public:
 listiterator(node * current );
 bool hasNext()override  ;
 const char* next()override  ;

};


}
#endif
