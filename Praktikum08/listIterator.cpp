#include"LinkedList.h"
#include"Iterator.h"
#include"listiterator.h"
#include"node.h"

pk2::listiterator::listiterator(node* current):current{current}{}

bool pk2:: listiterator::hasNext()
{
 return current!=nullptr;


}


const char *  pk2::listiterator::next()
{/*
    node * tmp=current;
    const char* value = tmp->data;
    current=current->next;
    return value;  
    */
   const char * value=current->data;
  current=current->next;// 
    return value;
    
     //  current=current->next; aleh najmoch nhotoha baad l RETURN 
}

