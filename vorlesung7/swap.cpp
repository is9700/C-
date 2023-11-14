#include <stdio.h>

/*
void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
*/
void swap(int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}


int main(){
  int x = 100;
  int y = 200;

  //swap(&x, &y); 
  swap(x, y);
  
  
  printf("x = %d   y = %d\n", x, y);

  return 0;
}
