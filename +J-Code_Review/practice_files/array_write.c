#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// tutorial
// https://www.youtube.com/watch?v=38I_AUMpKpQ&ab_channel=thenewboston

int main(void)
{
  FILE * fPointer;
  fPointer = fopen("doc.txt", "w");
  fprintf(fPointer, "1, 2, 3, 4");
  printf("File Made!");
/*
  int list[5]={1,2,3,4,5};
  printf("%d\n", list[1]);
  return 0;
*/
}
