#include<stdio.h>
union Student
{
    int rollno;
    char name[20];
};
void main()
{
  union Student s;
printf("enter student name:");
scanf("%s", s.name);
  printf("student name=%s", s.name);  
}