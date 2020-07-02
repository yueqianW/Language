#include <stdio.h>

void printS(char str[])
{
  printf("%s\n", str);
  printf("%i\n", sizeof(str));
  printf("%p\n", str);
}

int main()
{
  char msg[] = "11 22 33 44 55 66 77 88";
  printS(msg);
  printf("地址是：%p\n", msg);
  // printf("地址是：%s\n", msg);
}