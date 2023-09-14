#include <stdio.h>
  
/**
  * main - solving our assignment
  * description - a system for school grading system
  * 80 - 100 == A
  * 70 - 79 == B
  * 65 - 69 == C
  * 60 - 64 == D
  * 50 - 59 == E
  * Below 50 == F
  * return 0
  */
 int main () 
{
	int grade;
	printf("Enter your score here : \n");
	scanf("%d",&grade);

	switch (grade)
	{
	case 80 ... 100:
		printf("your grade is A \n");
		break;
	case 70 ... 79:
		printf("your grade is B \n");
		break;
	case 65 ... 69:
		printf("your grade is C \n");
		break;
	case 60 ... 64:
		printf("your grade is D \n");
		break;
	case 50 ... 59:
		printf("your grade is E \n");
		break;
	case 0 ... 49:
		printf("your grade is F \n");
		break;
	default:
		printf("invalid score entered");
	}

return 0;
}
