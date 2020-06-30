#include <stdio.h>
#include <stdlib.h>

int main()
{
  int val = 0;

  switch (card_name[0])
  {
  case 'K':
  case 'Q':
  case 'J':
    val = 10;
    break;
  case 'A':
    val = 11;
    break;
  default:
    val = atoi(card_name);
  }

  printf("点数是：%i\n", val);
}