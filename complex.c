#include<stdio.h>
#include<stdlib.h>
 
struct complex
{
    float real;
    float img;
};
int main()
{
    void add(struct complex ,struct complex);
    struct complex c1,c2;
    printf("Enter complex number 1: ");
    scanf(" %f %f",&c1.real,&c1.img);
    printf("Enter complex number 2: ");
    scanf(" %f %f",&c2.real,&c2.img);
    add(c1,c2);
    return 0;
    
}
void add( struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    printf("Result: %.2f + i%.2f.\n",c.real,c.img);
    
}