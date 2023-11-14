
#include <stdio.h>
#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;
LinkedList::LinkedList(void)
{
    head = nullptr;
    tail = nullptr;
}
LinkedList::~LinkedList()
{
    node *current = head;
    while (current != nullptr)
    {
        delete (current);
        current = current->next;
    }
    cout << "destructor" << endl;
}
 LinkedList::LinkedList(const LinkedList &orig):LinkedList()
 {
    node * current=orig.head;
    while(current!=nullptr)
    {   append(current->data);
        current=current->next;
        
    }
cout<<"copyconstructor"<<endl;
 }

int LinkedList::append(const char *text)
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

int LinkedList::insert(const char *text, int p)
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

int LinkedList::length(void)
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

int LinkedList::remove(int p)
{
     if (p < 0 || head == nullptr)
    return 0;

  node *current = head;
  node *previous = nullptr;

  for (int i = 0; i < p; i++)
  {
    previous = current;
    current = current->next;

    if (current == tail)
      break;
  }

  if (current == head && current == tail)
  {
    head = nullptr;
    tail = nullptr;
  }
  else
  {
    if (current == head)
    {
      head = current->next;
    }
    else
    {
      if (current == tail)
        tail = previous;

      previous->next = current->next;
    }
  }

  //current->next = nullptr;
  delete current;

  return 1;
}

const char *LinkedList::get(int p)
{
    if (p >= length() || p < 0 || head == nullptr)
    {
        return nullptr;
    }
    else
    {
        node *current = head;
        for (int i = 0; i <= p; i++)
        {
            current = current->next;
        }
        return current->data;
    }
}

const char *LinkedList::first()
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
const char *LinkedList::last()
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

int LinkedList::index_of(const char *text)
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

    if (summe == 0)
    {
        return -1;
    }
    else
    {
        return summe;
    }
}

void LinkedList::visit_all(void (*work)(const char *t))
{
    node *current = head;

    while (current != nullptr)
    {
        work(current->data);
        current = current->next;
    }
}
