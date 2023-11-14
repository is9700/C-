#include "stack.h"

stack::stack() : top{nullptr} {} // stack leer

stack::stack(const stack &orig) : stack()
{
    element *ptr=(element *)orig.top;
    stack tmp;
    while(ptr!=nullptr)
    {
        tmp.push(ptr->key);
        ptr=ptr->next;
    }

    while(tmp.pop()!=-1)
    {
        this->push(tmp.pop());
    }
}

stack::~stack()
{
    while (pop() != -1);
}

int stack::push(int k)
{
  
  element *neu=new element(k,top);
if(neu!=nullptr)
{   
    
    top=neu; 
return 1;
    }
else{
    return 0;
}

}

int stack::pop()
{   
    if(top!=nullptr)
{
element* tmp=top;
int k=tmp->key;
top=top->next;
delete(tmp);//C++ DELETE C FREE
return k;
}
return -1;
}
