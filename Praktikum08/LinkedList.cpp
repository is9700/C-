
#include <stdio.h>
#include <bits/stdc++.h>
#include "LinkedList.h"
#include "listiterator.h"
using namespace std;
pk2::LinkedList::LinkedList(void)
{
    head = nullptr;
    tail = nullptr;
    cout<<"initialisation"<<endl;
}
pk2::LinkedList::~LinkedList()
{
    node *current = head;
    while (current != nullptr)
    {
        delete (current);
        current = current->next;
    }
    cout << "destructor terminated" << endl;
}

pk2::LinkedList::LinkedList(const LinkedList &orig) : LinkedList()
{
    node *current = orig.head;
    while (current != nullptr)
    {
        append(current->data);
        current = current->next;
    }


    cout<<"copyconstructor created"<<endl;
}
int pk2::LinkedList::append(const char *text)
{
    node *neu = new node(text, nullptr);
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

int pk2::LinkedList::insert(const char *text, int p)
{
    if (p < 0)
        return 0;

    if (p >= length() || head == nullptr)
    {
        append(text);
    }
    else
    {
        node *current = head;
        node *previous = nullptr;
        for (int i = 0; i < p; i++)
        {

            current = current->next;
        }
        for (int j = 0; j < p - 1; j++)
        {
            previous = previous->next;
        }

        node *tmp = new node(text, current);
        previous->next = tmp;

        return 1;
    }
    return 0;
}

int pk2::LinkedList::length(void)
{
    int s = 0;
    node *current = head;
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

int pk2::LinkedList::remove(int p)
{
    if (head == tail)
    {
        head == nullptr;
        tail == nullptr;
    }
    if (p < 0 || head == nullptr )
        return 0;

    else
    { // todo
        node *current = head;
        node *previous =nullptr;
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

const char *pk2::LinkedList::get(int p)
{
    if (p >= length() || p < 0 || head == nullptr)
    {
        return nullptr;
    }
    else
    {
        node *current = head;
        for (int i = 0; i < p; i++)
        {
            current = current->next;
        }
        return current->data;
    }
}

const char *pk2::LinkedList::first()
{
    if (head != nullptr)
    {
        return head->data;
    }
    else
    {
        // cout<<"no first element"<<endl;
        return nullptr;
    }
}
const char *pk2::LinkedList::last()
{
    if (tail != nullptr)
    {
        return tail->data;
    }
    else
    {
        return nullptr;
    }
}

int pk2::LinkedList::index_of(const char *text)
{
    int summe = 0;
    node *current = head;
    while (current != nullptr)
    {
        // Vergleich von Zeigern nicht sinnvoll
        // Inhalte sollen verglichen werden (strcmp)
        if (strcmp(current->data, text) != 0)
        {
            summe++;
            current = current->next;
        }
        else
        {
            return summe;
        }
    }
    return -1;
}


void pk2::LinkedList::visit_all(void (*work)(const char *t))
{   
    Iterator  *it = iterator();
    Iterator *lot=iterator();
    while(it->hasNext())
    {  
        work(it->next());
    
     }
    
    
    //destructor
        while(lot->hasNext())
        {
            delete(lot->next());
        }
    
   
}


 pk2::Iterator* pk2::LinkedList::iterator()
{
    
  pk2::Iterator *it = new listiterator(this->head);
   return it;
  
}





/*
void pk2::LinkedList::visit_all(void (*work)(const char *t))
{
    node *current = head;

    while (current != nullptr)
    {
        work(current->data);
        current = current->next;
    }
}*/