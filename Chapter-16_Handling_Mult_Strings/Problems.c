// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char list[6][20] = {
//         "Yusuf", "Komal", "Akib", "Shadab", "Irfan", "obaid"
//     };
//     int i;
//     char *yourname[20];
//     printf("Enter your name: ");
//     // fgets(list, sizeof list, stdin);
//     scanf("%s", yourname);
//     for( i = 0; i <= 5; i++)
//     {
//         if(strcmp(&list[i][0], yourname) == 0)
//         {
//             printf("Welcome, you can enter the palace");
//             return 0; // the loop return back to the main and it will not print the below printf()
//         }
//     }
//     printf("Sorry, you are a trespasser");
//     return 0;
// }

// Exchange the position of names, "raman" to "srinivas", using an array of pointers to string
// #include<stdio.h>
// int main()
// {
//     char *names[] = {
//         "akshay", "parag", "raman",
//         "srinivas", "gopal", "rajesh"
//     };
//     char *temp;
//     printf("Original: %s %s\n", names[2], names[3]);
//     temp = names[2];
//     names[2] = names[3];
//     names[3] = temp;
//     printf("New: %s %s\n", names[2], names[3]);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     char *names[6], n[50];
//     int len, i;
//     char *p;
//     for ( i = 0; i <= 5; i++)
//     {
//         printf("Enter name: ");
//         scanf("%s", n);
//         len = strlen(n);
//         p = (char * ) malloc (len + 1); // +1 for accomodating \0
//         strcpy(p, n);
//         names[i] = p;
//     }
//     for ( i = 0; i <= 5; i++)
//         printf("%s\n", names[i]);
//     return 0;
    
// }

//! Write a program to store  a few strings using an array of pointers to strings. Receive a string and check if it is present in the array.
 