#ifndef LINKEDLIST_H_
#define LINKEDLIST_H
#include <string.h>
#include "Iterator.h"
#include "listiterator.h"
#include"medium.h"
#include"bild.h"
#include"Audio.h"
#include "node.h"

namespace pk2
{
    template <class T>
    class LinkedList
    {
    private:
        node<T> *head, *tail;

    public:
        LinkedList();
        ~LinkedList();
        LinkedList(const LinkedList<T> &orig);
      
        int append(T* text);
        
        void visit_all(void (*work)(T* t));
     
        int remove(int p);
      
        int insert(T* text, int p);

        T* get(int p);

        int length();

        Iterator<T> *iterator();
    };
    template<class T>
LinkedList<T>::LinkedList(void)
{
    head = nullptr;
    tail = nullptr;
    cout<<"initialisation"<<endl;
}
template<class T>
LinkedList<T>::~LinkedList()
{
    node<T> *current = head;
    while (current != nullptr)
    {
        delete (current);
        current = current->next;
    }
    cout << "destructor terminated" << endl;
}
template<class T>
LinkedList<T>::LinkedList(const LinkedList &orig) : LinkedList<T>()
{
    node<T> *current = orig.head;
    while (current != nullptr)
    {
        append(current->data);
        current = current->next;
    }

    cout<<"copyconstructor created"<<endl;
}
template<class T>
int LinkedList<T>::append(T* text)
{
    node<T> *neu = new node<T>(text, nullptr);
    if (head == nullptr)
    {
        head = neu;
    }
    else
    {
        tail->next = neu;
    }
    tail = neu;
}

template<class T>
int pk2::LinkedList<T>::insert(T* text, int p)
{
    if (p < 0)
        return 0;

    if (p >= length() || head == nullptr)
    {
        append(text);
    }
    else
    {
        node<T> *current = head;
        node<T> *previous = nullptr;
        for (int i = 0; i < p; i++)
        {

            current = current->next;
        }
        for (int j = 0; j < p - 1; j++)
        {
            previous = previous->next;
        }

        node<T> *tmp = new node<T>(text, current);
        previous->next = tmp;

        return 1;
    }
    return 0;
}
template<class T>
int pk2::LinkedList<T>::length(void)
{
    int s = 0;
    node<T> *current = head;
    while (current != nullptr)
    {
        current = current->next;
        s++;
    }
    return s;
}

// 1->2->3
// remove 1
// current = 1
// current->next = 3
// delete current->next
template<class T>
int pk2::LinkedList<T>::remove(int p)
{
    if (head == tail)
    {
        head == nullptr;
        tail == nullptr;
    }
    if (p < 0 || head == nullptr || tail == nullptr)
        return 0;

    else
    { // todo
        node<T> *current = head;
        node<T> *previous =nullptr;
        for (int i = 0; i < p; i++)
        {   previous=current;
            current = current->next;
        
        if (current == tail)
        
            break;
        }
 if(current==head)
 {
    current=current->next;
    delete(previous);
    head=current;

 }
 else if(current==tail)
 {  previous->next=nullptr;
    delete(tail);
    tail=previous;
}
else 
{
    previous->next=current->next;
    delete (current);
}


    }

    return 0;
}

template<class T>
T* pk2::LinkedList<T>::get(int p)
{
    if (p >= length() || p < 0 || head == nullptr)
    {
        return nullptr;
    }
    else
    {
        node<T> *current = head;
        for (int i = 0; i < p; i++)
        {
            current = current->next;
        }
        return current->data;
    }
}





template<class T>
void pk2::LinkedList<T>::visit_all(void (*work)(T* t))
{   
    Iterator<T>  *it = iterator();
    Iterator<T> *lot=iterator();
    while(it->hasNext())
    {  
        work(it->next());
    
     }
    
    
    
        while(lot->hasNext())
        {      
            T* element =lot->next();  
            
         
           
            delete(element);   
        }
    
   
}

/*template<typename T>
 pk2::Iterator<T>* pk2::LinkedList<T>::iterator()*

{
    
  pk2::Iterator<T> *it = new listiterator<T>(this->head);
   return it;
  
}
*/


template<class T> 

pk2::Iterator<T>* pk2::LinkedList<T>::iterator()
{
   pk2::Iterator<T>* it=new listiterator<T>(this->head);
    return it ;

}

};
#endif