#include <stdio.h>
#include <stdlib.h>

void ascendingOrder (int size, int list[]);
void descendingOrder (int size, int list[]);

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

  if ( order == 1 ) { ascendingOrder(size, list); } else { descendingOrder(size, list); }


  return 0;
}


void ascendingOrder (int size, int list[]) {
  for (int index = 0; index < size; index++) { 

    int lowerValue = list[index];
    int indexLowerValue = index;

    for (int i = index; i < size; i++ ) {
      int possibleLowerValue = list[i];

      if (possibleLowerValue < lowerValue) {
        lowerValue = possibleLowerValue;
        indexLowerValue = i;
      }
    }
    
    list[indexLowerValue] = list[index];
    list[index] = lowerValue;
  }

  for (int i = 0; i < size; i++) {
    printf("[ %i ]", list[i]);
  }
}

void descendingOrder (int size, int list[]) {
  for (int index = 0; index < size; index++) { 

    int highestValue = list[index];
    int indexHighestValue = index;

    for (int i = index; i < size; i++ ) {
      int possibleHighestValue = list[i];

      if (possibleHighestValue > highestValue) {
        highestValue = possibleHighestValue;
        indexHighestValue = i;
      }
    }
    
    list[indexHighestValue] = list[index];
    list[index] = highestValue;
  }

  for (int i = 0; i < size; i++) {
    printf("[ %i ]", list[i]);
  }
}