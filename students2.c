#include <stdio.h>

int main()
{
 int grade;

//Get user input
 printf("What grade are you in? ");
 scanf("%i", &grade);

//Determine school user belongs to
 switch (grade)
 {
  case 1 ... 5:
  	printf("You are in elementary school.\n");
	break;
  case 6 ... 8:
  	printf("You are in middle school.\n");
	break;
  case 9 ... 12:
  	printf("You are in high school.\n");
	break;
  default:
  	printf("Invalid entry, only numbers 1-12 are valid\n");
 }

 return 0;
}
