#include <stdio.h>

int main()
{
  char s[] = "11 22 33 44";
  char *t = s;
  printf("size: %lu\n", sizeof(s));
  printf("size: %lu\n", sizeof(&s));
  printf("size: %lu\n", sizeof(t));
}