#include<stdio.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct Student s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.rollno);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
