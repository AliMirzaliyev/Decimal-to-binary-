#include<stdio.h>

int main()
{
    // int a=1;
    int number,i,remainder;
    long int binary = 0,k = 1;

    printf("Enter number please : ");
    scanf("%d",&number);

    for(i=2; i<number; i++)
    {
        if(number%i==0)
        {
            printf("That is not prime !\n\n");

            break;
        }

    }


    while(number != 0)
    {
        remainder = number%2;
        number = number/2;
        binary= binary + (remainder*k);
        k = k*10;
    }
    printf("Binary number is:  %ld  \n\n",binary);


    return 0;
}
