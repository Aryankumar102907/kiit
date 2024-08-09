// Q1. WAP to define the structure of student's data roll no., name, and marks. Input details of 2 students and display them.
#include <stdio.h>

struct std
{
    int roll;
    char name[30];
    float mark;
};

int main()
{
    struct std s1;
    printf("Roll Number: ");
    scanf("%d",&s1.roll);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Your Marks: ");
    scanf("%f",&s1.mark);

    struct std s2;
    printf("Roll Number: ");
    scanf("%d",&s2.roll);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Your Marks: ");
    scanf("%f",&s2.mark);


    printf("%d %s %f\n",s1.roll,s1.name,s1.mark);
    printf("%d %s %f",s2.roll,s2.name,s2.mark);
    return 0;
}

// Q2. Modify Q1 by adding another structure including date, month, and year.
#include <stdio.h>

struct std
{
    int roll;
    char name[30];
    double mark;
    int date, month, year;
};
int main(){
    struct std s1;
    printf("Roll Number: ");
    scanf("%d",&s1.roll);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Your Marks: ");
    scanf("%lf",&s1.mark);
    printf("Enter Date of Birth: ");
    scanf("%d", &s1.date);
    printf("Enter Month of Birth: ");
    scanf("%d", &s1.month);
    printf("Enter Year of Birth: ");
    scanf("%d", &s1.year);

    struct std s2;
    printf("Roll Number: ");
    scanf("%d",&s2.roll);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Your Marks: ");
    scanf("%lf",&s2.mark);
    printf("Enter Date of Birth: ");
    scanf("%d", &s2.date);
    printf("Enter Month of Birth: ");
    scanf("%d", &s2.month);
    printf("Enter Year of Birth: ");
    scanf("%d", &s2.year);


    printf("Roll Number: %d Your Name: %s Marks: %f Date of Birth: %d/%d/%d \n",s1.roll,s1.name,s1.mark,s1.date,s1.month,s1.year);
    printf("Roll Number: %d Your Name: %s Marks: %f Date of Birth: %d/%d/%d \n",s2.roll,s2.name,s2.mark,s2.date,s2.month,s2.year);
    return 0;
}

// Q3. Display the details of 10 students.
#include <stdio.h>

struct std
{
    int roll;
    char name[30];
    double mark;
    int date, month, year;
};

int main()
{
    struct std s[10];
    int n,i;
    printf("Enter no of student ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Roll Number: ");
        scanf("%d",&s[i].roll);
        printf("Name: ");
        scanf(" %s", s[i].name);
        printf("Your Marks: ");
        scanf("%lf",&s[i].mark);
        printf("Enter Date of Birth: ");
        scanf("%d", &s[i].date);
        printf("Enter Month of Birth: ");
        scanf("%d", &s[i].month);
        printf("Enter Year of Birth: ");
        scanf("%d", &s[i].year);
    }
    for (i=0;i<n;i++)
    {
        printf("\nRoll Number: %d Your Name: %s Marks: %f Date of Birth: %d/%d/%d \n",s[i].roll,s[i].name,s[i].mark,s[i].date,s[i].month,s[i].year);
    }
    return 0;
}