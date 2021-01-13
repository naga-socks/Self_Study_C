#include <stdio.h>

main()
{
  FILE *fp;
  char buff[10];

  fp = fopen("doc.txt", "r");
  fscanf(fp, "%s\n", buff);
  printf("1. %s\n", buff );


  fgets(buff, 255, (FILE*)fp);
  printf("2. %s\n", buff );

  fgets(buff, 255, (FILE*)fp);
  printf("3. %s\n", buff );

  fclose(fp);

}
