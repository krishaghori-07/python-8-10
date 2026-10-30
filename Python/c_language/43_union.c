#include<stdio.h>
union Student{
    int rollno;
    float marks;
};
void main()
{
    union Student s;
    s.rollno=101;
    s.marks=67.30;
    printf("roll number=%d",s.rollno);
    printf("\n");
    printf("marks=%f",s.marks);
}