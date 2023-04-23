//* Write a program in C to create and store information in a text file.
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     char str[1000];
//     FILE *fptr;
//     char fname[20] = "test.txt";

//     printf("\n\nCreate a file(test.txt) and input text : \n");
//     printf("--------------------------------\n");
//     fptr = fopen(fname, "w");
//     if(fptr == NULL)
//     {
//         printf("Error in opening file!");
//         exit(1);
//     }
//     printf("Input a sentence for the file : ");
//     fgets(str, sizeof str, stdin);
//     fprintf(fptr, "%s", str);
//     fclose(fptr);
//     printf("\nThe file %s created successfully....\n\n", fname);

//     return 0;
// }


//* Write a program in C to read an existing file
// #include<stdio.h>
// #include<stdlib.h>

// void main()
// {
//     FILE *fptr;
//     char fname[20];
//     char str;
//     printf("\n\n Read an existing file : \n");
//     printf("Input the filename to be opened : ");
//     scanf("%s", fname);
//     fptr = fopen(fname, "r");
//     if(fptr == NULL)
//     {
//         printf("File doesn't exist or cannot be opened.\n");
//         exit(0);
//     }
//     printf("\nThe content of the file %s is : \n", fname);
//     str = fgetc(fptr);
//     while(str != EOF)
//     {
//         printf("%c", str);
//         str = fgetc(fptr);
//     }
//     fclose(fptr);
//     printf("\n\n");
// }


//* Write a program in C to write multiple lines to a text file.
#include<stdio.h>

int main()
{
    
}