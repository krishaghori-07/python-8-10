/*write a program to understnd concept of structure.
 */
 #include<stdio.h>
 struct student
 {
    char name[32];
    float weight;
    int age;
    char gender;
 };
 void main()
 {
    struct student s1;
    printf("enter student name:");
   scanf("%31s", &s1.name);

    printf("enter gender:");
    scanf("%31s", &s1.gender);
  
    printf("enter weight:");
    scanf("%f", &s1.weight);
      
    printf("enter age:");
    scanf("%d", &s1.age);
    printf("\nStudent details\n");
    printf("Name = %s\n", s1.name);
    printf("Age = %d\n", s1.age);
    printf("Weight = %.2f\n", s1.weight);
    printf("Gender = %c\n", s1.gender);
   }