#ifndef NODE_H
#define NODE_H

template<typename T>
struct node
{
     T* data ;
  node* next;
      node(T *data, node *next) :
          data {data}, next {next} {}
    ~node(){
      delete next;
    }
};

#endif