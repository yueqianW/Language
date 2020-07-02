#include <stdio.h>

void go_to(int *a, int *b)
{
  *a = *a - 1;
  *b = *b - 1;
};

int main()
{
  int aa = 5;
  int bb = 5;
  go_to(&aa, &bb);

  // int c = 4;
  printf("地址是：%i %i\n", aa, bb);
}
