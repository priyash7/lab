#include<stdio.h>
int main()
{
float per;
char grade;
printf("Enter the Percentage\n");
scanf("%f",&per);
if(per>=90)
grade= 'A';
else if(per>=80 && per<90)
grade ='B';
else if(per>=70 && per<80)
grade ='C';
else if(per>=60 && per<70)
grade='D';
else if(per>=35 && per<59)
grade='E';
else grade='F';
switch(grade)
{
case 'A': printf("\nEXCELLENT"); break;
case 'B':printf("\nVery Good"); break;
case 'C' : printf("\nGood"); break;
case 'D': printf("\nAbove Average"); break;
case 'E': printf("\n Satisfactory"); break;
case 'F': printf("\n fail"); break;
}
printf("\t The percentage = %f and grade is %c ",per,grade);
return 0;
}
