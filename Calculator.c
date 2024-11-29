#include<stdio.h>

int mul(int a, int b){
  return a*b;
}

int add(int a, int b){
  return a+b;
}

int main()
{
  printf("%d", add(2,3));
  printf("%d", mul(6,7));
}
