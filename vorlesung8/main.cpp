#include <iostream>
#include "stack.h"

void foo(stack a){

}

int main(){
        stack s {};
        
        stack *u = new stack {};
        u->push(100);
        
       
        int i;
        for(i=1; i <= 10; i++){
            s.push(i);
        }
        
        foo(s);
        
        for(i=0; i < 5; i++){
            std::cout << s.pop()  << std::endl;
        }
        /*
        
        stack t = s;
        std::cout << t.pop() << std::endl;
        std::cout << s.pop() << std::endl;
        */

        return 0;
    }