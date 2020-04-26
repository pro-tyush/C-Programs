#include<stdio.h>
void main(){

struct DOB {
int day;
int month;
int year;
};

struct Student
{
int roll_no;
char name[100];
float fees;
struct DOB date;
};

struct Student stud1;

printf("\n Enter Roll_No - ");
scanf("%d", &stud1.roll_no);

printf("\n Enter Name - ");
scanf("%s",stud1.name);

printf("\n Enter Fees - ");
scanf("%f", &stud1.fees);

printf("\n Enter Dob - ");
scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);



printf("\n STUDENT DETAILS - \n");
printf("\n Roll No - %d", stud1.roll_no);

printf("\n Name - %s", stud1.name);

printf("\n Fees - %f",stud1.fees);
printf("\n DOB - %d-%d-%d \n", stud1.date.day, stud1.date.month, stud1.date.year);






       	}



