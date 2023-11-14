
#ifndef ITERATOR_H
#define ITERATOR_H
namespace pk2{

class Iterator {

public : 
virtual bool hasNext()=0  ;

 virtual const char* next()=0  ;


};

}

#endif
