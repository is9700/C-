#include "stack.h"
#include <iostream>

int main(){
    Stack *s=new Stack();
    
    s->push(10);
    s->push(100);

    Stack *p = new Stack(*s); //*s   statt s khater &orig reference( konstanter zeiger) 

    p->push(20);
    p->push(30);

    std::cout << s->pop() << std::endl;
    std::cout << s->pop() << std::endl;
    std::cout << p->pop() << std::endl;
    std::cout << p->pop() << std::endl;
    delete(s);
    delete(p);
    return 0;
}