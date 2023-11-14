#include "stack.h"

Stack::Stack()
{
  top=nullptr;

}

Stack::~Stack()
{
  while(pop()!=-1);
}
/*Stack::Stack(const Stack &orig) : Stack()

{
  Stack tmp; // stack temporaire
  element *ptr = orig.top;
  while (ptr != nullptr)
  {
    tmp.push(ptr->key);
    ptr = ptr->next;
  }
  // aabena l stack ama bel makloub

  while (int k = tmp.pop() != -1)
  {
    this->push(k);
  }
}
*/

Stack::Stack(const Stack &orig):Stack()
{
  Stack tmp;
  element *ptr=(element * )orig.top;
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
int Stack::push(long k)
{
  element *neu = new element(k, top);
  if (neu != nullptr)
  {

    top = neu;
    return 1;
  }
  else
  {
    return 0;
  }
}

long Stack::pop()
{ //{EARRAFOPKFAOKFPK}
  element *tmp = top;
  if (tmp > 0)
  {
    long k = top->key;
    top = top->next;
    delete (tmp);
    return k;
  }
  else
  {
    return -1;
  }
}