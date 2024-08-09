// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct time{
    int hr;
    int min;
};

int main() {
    // Write C code here
    void add(struct time a, struct time b);
    struct time t1;
    struct time t2;
    printf("Enter time 1: ");
    scanf(" %d %d", &t1.hr, &t1.min);
    printf("Enter time 2: ");
    scanf(" %d %d", &t2.hr, &t2.min);
    
    add(t1, t2);
    return 0;
}

void add(struct time m, struct time n)
{
    struct time t;
    t.hr = m.hr + n.hr;
    t.min = m.min + n.min;
    while (t.min >= 60)
    {
        t.min = t.min - 60;
        t.hr++;
    }
    printf("%d hrs %d mins.\n",t.hr,t.min);
}

// void add(struct time a, struct time b)
// {
    // struct time t;
    // t.hr = a.hr + b.hr;
    // t.min = a.min + b.min;
    // int into_mins = t.hr*60 + t.min;
    // t.hr = into_mins / 60;
    // t.min = into_mins % 60;
    // printf("%d hrs %d mins",t.hr,t.min);
// }