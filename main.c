#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int size;
  int order;

  printf(" Define how many numbers you want to sort: ");
  scanf("%i", &size);

  printf(" Type: \n 1 - Ascending order \n 2 - Descending order\n");

  do { scanf("%i", &order); } while ( order != 1 && order != 2 );

  int list[size];

  for (int i = 0; i < size; i++) {
    printf(" Type a number: ");
    scanf("%i", &list[i]);
  }

  printf(" Your disordered array:\n ");

  for (int i = 0; i < size; i++) {
    printf("[ %i ]", list[i]);
  }

  printf("\n Your sorted array:\n ");

  for (int index = 0; index < size; index++) { 

    int smallSize = list[index];

    for (int i = index; i < size; i++ ) {
      int possibleSmallSize = list[i];

      if (possibleSmallSize < smallSize) {
        smallSize = possibleSmallSize;
      }
    }

    list[index] = smallSize;

  }

  for (int i = 0; i < size; i++) {
    printf("[ %i ]", list[i]);
  }


  return 0;
}
