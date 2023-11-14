#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template<class T>
class stack{
   private:
     struct element{
       T key;
       element *next;

       element(T key, element *next) :
          key {key}, next {next} {}

       ~element(){
           std::cout << "Destruktor " << key << std::endl;
       }
     };

     element *top = nullptr;
    T      emptyerror;
   public:
     stack(T emptyerror);
     ~stack();
     stack(const stack& orig);
     int push(T key);
     T pop();
};
template <class T>
stack<T>::stack(T emptyerror) : top{nullptr}, emptyerror{emptyerror} {}
template <class T>
stack<T>::stack(const stack &orig) : stack<T>{}
{
    stack<T> tmp;
    element *ptr = orig.top;
    while (ptr != nullptr)
    {
        tmp.push(ptr->key);
        ptr = ptr->next;
    }
    int k;
    while ((k = tmp.pop()) != -1)
    {
        this->push(k);
    }
}
template <class T>
stack<T>::~stack()
{
    while (pop() != emptyerror);
}
template <class T>
int stack<T>::push(T k)
{
    element *neu = new element{k, top};
    if (neu != nullptr)
    {
        top = neu;
        return 1;
    }
    return 0;
}
template <class T>
T stack<T>::pop()
{
    if (top != nullptr)
    {
        T k = top->key;
        element *temp = top;
        top = top->next;
        delete temp;
        return k;
    }
    return -1;
}
#endif