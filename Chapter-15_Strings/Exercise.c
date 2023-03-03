//TODO : Attempt the following questions.
// * (B) TO uniquely identify a book of a 10 digit ISBN (International Standard Book Number) is used, the right most digit in ISBN is a checksum digit. This digit is determined from the other 9 digit using the condition that d1 + 2d2 + 3d3 + ..... + 10d10 must be a multiple of 11 ( where di denotes the ith digit from the right). The checksum digit d1 can be any value from 0 to 10: the ISBN convention is to use the value X to denote 10. write a program that receives a 10-digit integer, computes the checksum, and reports whether the ISBN number is correct or not.
#include<stdio.h>
int main()
{
    long long isbn;
    int digit, sum = 0, i;

    printf("Enter a 10-digit ISBN number : ");
    scanf("%lld", &isbn);

    for(i = 10; i >= 1; i--)
    {
        digit = isbn % 10;
        isbn /= 10;
        sum += i * digit;
    }

    if( sum % 11 == 0)
        printf("The ISBN ")
    return 0;
}
}



