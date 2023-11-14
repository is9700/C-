#ifndef LISTITERATOR_H_
#define LISTITERATOR_H_
#include"node.h"
#include"Iterator.h"
namespace pk2{

template<typename T>
class listiterator : public Iterator<T> //implements abstract class Iterator 
{
 
  node<T>* current;

 public:
 listiterator(node<T> * current );
 bool hasNext()override  ;
 T* next()override  ;

};
template<typename T>
listiterator<T>::listiterator(node<T>* current):current{current}{}
template<typename T>
bool  listiterator<T>::hasNext()
{
 return current!=nullptr;


}
template<typename T>
T* listiterator<T>::next()
{
   T* value=current->data;
  current=current->next; // 
    return value;
    
     //  current=current->next; aleh najmoch nhotoha baad l RETURN 
}


}

#endif



