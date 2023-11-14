#include <iostream>
using namespace std;
class Stack{
  private: 
  struct element{
    long key ;
    element * next ;
  
 // element(long key,element *next): key {key},next{next}{};
  element(long key, element*next):key{key},next{next}{};
  ~element()
  { 
    
    cout <<"destructor"<<endl;
  }

  };
  element *top;


  public :
  Stack();
  Stack(const Stack &orig);//copieconstructor
  ~Stack();
  int push(long k);
  long pop();

};