#include <iostream>

class stack{
   private:
     struct element{
       int key;
       element *next;

       element(int key, element *next) :
          key {key}, next {next} {}

       ~element(){
           std::cout << "Destruktor " << key << std::endl;
       }
     };

     element *top = nullptr;

   public:
     stack();
     ~stack();
     stack(const stack& orig);
     int push(int);
     int pop();
};