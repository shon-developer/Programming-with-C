/*
Write a C program that performs the following
* Accept marks of 5 subjects from the user and store them in a ID array
* Calculate the total and average marks.
* Assign grade using the following if-else rules:
- Grade A -> Average >= 90
- Grade B -> Average >= 75
- Grade C -> Average >= 50
- Fail -> Average < 50
Display all individual marks, total, average, and the final grade
* sample input
85
90
78
88
92
* sample output
Marks: 85 90 78 88 92
Total = 433
Average = 86.60
Grade = B
*/

#include <stdio.h>
int main()
{
   int marks[5];
   int total = 0;
   float average;
   char grade;

   // Input marks
for(int i = 0; i < 5; i++){
    printf("Enter your marks for subject %d:", i + 1);
    scanf("%d", &marks[i]);
    total += marks[i];
}

average = total / 5.0;

// Grade calculation
if(average >= 90)
grade = 'A';
else if(average >= 75)
grade = 'B';
else if(average >= 50)
grade = 'C';
else
grade = 'F';

printf("\nMarks:");
for(int i = 0; i < 5; i++){
    printf("%d", marks[i]);   
}
    printf("\nTotal = %d", total);
    printf("\nAverage = %.2f", average);
    if(grade == 'F')
    printf("\nResult = Fail");
    else
    printf("\nResult = %c", grade);
    return 0;
}






