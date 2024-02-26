#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  int order;

  printf(" Type: \n 1 - Ascending order \n 2 - Descending order");
  printf(" Write 8 numbers");
  
  return 0;
}
