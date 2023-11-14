#include <iostream>
#include "vector.h"
using namespace std;
int main(){

    Vector *a =new Vector(8); //dynamisch

    Vector b{3}; // in stack
    for(int i=0; i<5; i++)
    {
        a->set(i,1.0*i);
    }
    for(int i=0; i<2; i++)
    {
        b.set(i,1.0*i);
    }


    //Vector c={*a};
    Vector c={b};    //stack
    
    Vector *d={a};     //heap
  
    
    for (int i=0;i<5;i++)
    {
        cout<<a->get(i)<<endl;
    }
    return 0;
}