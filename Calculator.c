#include <stdio.h>

int main()
{
  printf("This is a basic calculator");
  printf("Input x and y : ");

  return 0;
}
int Add(int x, int y) {
  return x+y;
}
int Sub(int x, int y) {
  return x-y;
}
int Mul(int x, int y) {
  if(x == 0 || y == 0)
    return 0;
  return x*y;
}
int Div(int x, int y) {
  if(y == 0) {
    return 0;
  }
  else {
    return x/y;
  }
}
int Square(int x) {
  return x*x;
}
