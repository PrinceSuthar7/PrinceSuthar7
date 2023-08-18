/*
 	 Author:	Prince
 	 Module:    Module 1 Assignment
 	 Topic:		Generate the report card of a student based on his marks secured in the final examination.
*/

#include<stdio.h>


  	int main() {

	char  name[30];
	int   standard ;
	char  section ,grade ;
	int marks,mathematics,english,hindi,science,socialScience;

	//Enter Details of Students and its marks

	printf("Enter the name of student :");
	fflush(stdout);
	scanf("%s", &name);
	while ((getchar()) != '\n');

    printf("\nEnter the standard of student :");
	fflush(stdout);
	scanf("%d", &standard);
	while ((getchar()) != '\n');

	printf("\nEnter the section of student :");
	fflush(stdout);
	scanf("%c", &section);
	while ((getchar()) != '\n');

	printf("\nEnter the marks of student in Mathematics out of 100 :");
	fflush(stdout);
	scanf("%d", &mathematics);
	while ((getchar()) != '\n');

	printf("\nEnter the marks of student in English out of 100 :");
	fflush(stdout);
	scanf("%d", &english);
	while ((getchar()) != '\n');

	printf("\nEnter the marks of student in Hindi out of 100: ");
	fflush(stdout);
	scanf("%d", &hindi);
	while ((getchar()) != '\n');

	printf("\nEnter the marks of student in Science out of 100: ");
	fflush(stdout);
	scanf("%d", &science);
	while ((getchar()) != '\n');

	printf("\nEnter the marks of student in Social Science out of 100: ");
	fflush(stdout);
	scanf("%d", &socialScience);
	while ((getchar()) != '\n');

	marks= mathematics+english+hindi+science+socialScience;  	//Calculate total marks

	if (marks<0 || marks>=500) {
	   exit(0);
	}

	if (marks>=450 && marks<=500) {
				grade='A';
		} else if (marks>=400 && marks<=449) {
				grade='B';
		} else if (marks>= 350 && marks<=399) {
				grade='C';
		} else if (marks>=300 && marks<=349) {
				grade='D';
		} else if (marks>200 && marks<=299) {
				grade='E';
		} else if (marks>0 && marks<=200) {
				grade='F';
		} else {
				printf("Enter valid input");
		}

	sleep(3);

	printf("\n\n-----------------------------------------------------------");
	printf("\n\t\tJawahar Navodaya Vidyalaya");
	printf("\n\t\t Annual Report Card");
	printf("\n\nName:%s", name);
	printf("\nStandard:%d", standard);
	printf("\nSection:%c", section);
	printf("\n\n\nMarks Secured out of 100 ");
	printf("\nMathematics:%d", mathematics);
	printf("\nEnglish:%d", english);
	printf("\nHindi:%d", hindi);
	printf("\nScience:%d", science);
	printf("\nSocial Science:%d", socialScience);
    printf("\n\nTotal marks secured:%d", marks);
	printf("\n\nGrade :%c", grade);

	printf("\n-----------------------------------------------------------");

	return 0;
}
