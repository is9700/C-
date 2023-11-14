#include<string.h>

class LinkedList
{
private:
struct node
{
    const char *data;
    node *next;
      node(const char *data, node *next) :
          data {data}, next {next} {}

};
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

    };