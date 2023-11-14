#include<string.h>
#include"Iterator.h"
#include"listiterator.h"
#include"node.h"
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H
namespace pk2
{
class LinkedList
{
private:

    node *head, *tail;

public:
      LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList &orig);
     int append(const char *text);
    void visit_all(void (*work)(const char *t));
    const char *last();
    const char *first();
    int index_of(const char *text);
    int remove(int p);
    int insert(const char *text, int p);
   
 
    const char *get(int p);

    int length();
    
    Iterator *iterator();

    };

    
}
#endif