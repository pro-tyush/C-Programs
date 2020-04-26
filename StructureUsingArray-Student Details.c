#include<stdio.h>
void main(){

int i;

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

struct Student stud1[100];

for(i=0;i<5;i++)
{
printf("\n Enter Roll_No - ");
scanf("%d", &stud1[i].roll_no);

printf("\n Enter Name - ");
scanf("%s",stud1[i].name);

printf("\n Enter Fees - ");
scanf("%f", &stud1[i].fees);

printf("\n Enter Dob - ");
scanf("%d %d %d", &stud1[i].date.day, &stud1[i].date.month, &stud1[i].date.year);
}


for(i=0;i<5;i++)
{
printf("\n STUDENT DETAILS - \n");
printf("\n Roll No - %d", stud1[i].roll_no);
printf("\n Name - %s", stud1[i].name);
printf("\n Fees - %f",stud1[i].fees);
printf("\n DOB - %d-%d-%d \n", stud1[i].date.day, stud1[i].date.month, stud1[i].date.year);
}





       	}









