#include <stdio.h>

int main()
{
  printf("This is a basic calculator");
  return 0;
}
int Add(int x, int y) {
  return x+y;
}
int Sub(int x, int y) {
  return x-y;
}
int Mul(int x, int y) {
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
