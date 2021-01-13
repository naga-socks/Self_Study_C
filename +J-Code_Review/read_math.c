/*
Jhonatan Nagasako
06-JAN-2020

PURPOSE: Create simple console C program for walk through

INPUT: User define 2 digit INTEGER number in "dataMaker" function, fprintf line
OUTPUT: Print out sum of two numbers in terminal window

Opportunities for improvement at end of code

// coding notes
// https://randerson112358.medium.com/how-to-run-c-program-in-command-prompt-e435186cd162

*/

#include <stdio.h>

void dataMaker();
void readSum(); // takes input of two numbers

int main()
{
  dataMaker(); // calls function
  readSum();
  return 0;
}

//===============================================//
// tutorial
// https://www.youtube.com/watch?v=38I_AUMpKpQ&ab_channel=thenewboston
void dataMaker()
{
  FILE *in_file;
  in_file = fopen("doc.txt", "w");
  fprintf(in_file,"3 5"); // USER DEFINED, must be INTEGER VALUE
  printf("File Made!\n\n"); // confirmation file created
  fclose(in_file); // need to close the file in order for next funtion to read!
}

//===============================================//
// notes
// http://www.cprogrammingnotes.com/question/reading-numbers-from-file.html
void readSum()
{
  FILE *in_file; // pointer
  int number1, number2, sum; // initializes variables

  in_file = fopen("doc.txt", "r"); // reads file from same directory

  if (in_file == NULL) // checks if file exists, otherwise error-out
  {
      printf("Can't open file for reading.\n");
  }

  else
  {
      fscanf(in_file, "%d", &number1); // you need to address "&" variable
      fscanf(in_file, "%d", &number2); // so pointer can assign new variable
      sum = number1 + number2;
      printf("Sum of numbers %d and %d is %d\n", number1, number2, sum);
      fclose(in_file);
  }
}

/*
  Items to improve once
    1. Forloop through text file
    2. in addition to 1, you need to set counter to STOP to avoid reading blanks elements
    3. User input control from terminal to assign any data, in "dataMaker" function, fprintf line
    4. dataMaker, why restricted to INTEGER values?
    5. readSum function improvement, able to ready any size array, stripper headers
    6. Create a list of Test commands to confirm that right variables passed and expected outputs
    7. use better IDE with better debugging tools (avoid flag control scripting)
    8. Write code in team/company standard format for easy readability
    9. Understand how values are being written registry address (e.g., learn more embedded)
*/
