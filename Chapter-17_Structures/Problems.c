//! Array of Structures
// #include<stdio.h>
// void linkfloat();
// int main()
// {
//     struct book
//     {
//         /* data */
//         char name; float price; int pages;
//     };
//     struct book b[10];
//     int i;
//     int dh;
//     for(i = 0; i <= 9; i++)
//     {
//         printf("Enter name, price and no. pages of 3 books\n");
//         scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].pages);
//         while((dh = getchar()) != '\n')
//             ;
//     }
//     for( i = 0; i <= 9; i++)
//     {
//         printf("%c %f %d\n", b[i].name, b[i].price, b[i].pages);
//     }
//     return 0;
// }
// void linkfloat()
// {
//     float a = 0, *b;
//     b = &a; // cause emulator to be linked
//     a = *b; // suppress the warning - variable not used
// }


//! Copying of structure elements 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     struct employee
//     {
//         char name[10]; int age; float salary;
//     };
//     struct employee e1 = {"Sanjay", 30, 5500.50};
//     struct employee e2, e3;
//     // Piece meal copying
//     strcpy(e2.name, e1.name); // e2.name = e1.name is wrong
//     e2.age = e1.age;
//     e2.salary = e1.salary;
    
//     // Copying all elements at one go
//     e3 = e2;
//     printf("%s %d %f\n", e1.name, e1.age, e1.salary);
//     printf("%s %d %f\n", e2.name, e2.age, e2.salary);
//     printf("%s %d %f\n", e3.name, e3.age, e3.salary);
//     return 0;

//! Nested Structures
// #include<stdio.h>
// int main()
// {
//     struct address
//     {
//         char phone[15]; char city[25]; int pin;
//     };

//     struct emp
//     {
//         char name[25]; struct address a;
//     };
//     struct emp e = {"Yusuf", "6200697127", "Mahuawan", 841505};
//     printf("Name = %s Phone = %s\n", e.name, e.a.phone);
//     printf("City = %s PIN = %d\n", e.a.city, e.a.pin);
//     return 0;
// }

//! Passing Structures Elements / Structure Variables
// #include<stdio.h>
// struct book
// {
//     char name[25]; char author[25]; int pages;
// };
// void display1 (char *, char *, int);
// void display2 (struct book);
// void display3 (struct book *);
// int main()
// {
//     struct book b1 = {"Let Us C", "YPK", 464};
//     display1(b1.name, b1.author, b1.pages);
//     display2(b1);
//     display3(&b1);
//     return 0;
// }

// void display1 (char *n, char *a, int pg)
// {
//     printf("%s %s %d\n", n, a, pg);
// }

// void display2 (struct book b)
// {
//     printf("%s %s %d\n",  b.name, b.author, b.pages);
// }

// void display3 (struct book *pb)
// {
//     printf("%s %s %d\n", pb->name, pb->author, pb->pages);
// }

#include<stdio.h>
int main()
{
    struct emp
    {
        int a; char ch; float s;
    };
    struct emp e ;
    printf("%u %u %u\n", &e.a, &e.ch, &e.s);
    return 0;
}