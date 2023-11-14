#ifndef NODE_H
#define NODE_H

struct node
{
    const char *data;
    node *next;
      node(const char *data, node *next) :
          data {data}, next {next} {}

};

#endif