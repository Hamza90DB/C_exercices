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

int main(void){
        int grade;
        printf("What is your score :\n");
        scanf("%d", &grade);
        if (grade >= 80 && grade <= 100)
        {
        printf("your grade is : A \n");
        }
            else if (grade >= 70 && grade <= 79)
            {
            printf("your grade is : B \n");
            }
                else if (grade >= 65 && grade <= 69)
                {
                printf("your grade is : C \n");
                }
                    else if (grade >= 60 && grade <= 64)
                    {
                    printf("your grade is : D \n");
                    }
                        else if (grade >= 50 && grade <= 59)
                        {
                        printf("your grade is : E \n");
                        }
				else if (grade == 0 && grade <=50)
				{
				printf("your grade is : F \n");	
				}
        else printf("The score you entered is false \n");
          
 return 0;
}
