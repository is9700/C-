#include"stack.h"

int main(){
 
    stack<int> a{5};

    stack<int>*b=new stack<int>(a);//copie constructor
    
    for(int i=0; i<5;i++)
    {
        a.push(1*i);
    }
    for(int i=0; i<5;i++)
    {
        b->push(2*i);
    }

    delete b;
    
    return 0;
}