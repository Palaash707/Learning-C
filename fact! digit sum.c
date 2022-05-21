#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size_of_number 3000

void factorial(int number[], int num)
{
    const int base = 10;
    int i, first_digit;
    int carry, replace, product;

    first_digit = 0;
    number[first_digit] = 1; 

    while(num != 0)
    {
        carry = 0;
        for(i = 0; i <= first_digit; i++)
        {
            product = num*number[i] + carry;
            replace = product%base; 
            carry = product/base; 

            number[i] = replace;

            if( (i == first_digit) && (carry > 0) )
            {
                first_digit++;
            }
        }

        num--;
    }
}

int sum_of_digits(int number[])
{
    int i, sum = 0;

    for(i = 0; i < size_of_number; i++)
    {
        sum = sum + number[i];
    }
    return sum;
}

void solve()
{
    int number[size_of_number] = {0}; 
    int sum, question;

    scanf("%d", &question);

    factorial(number, question);
    sum = sum_of_digits(number);
    printf("%d\n",sum);
}

int main()
{
    int no_of_queries;
    scanf("%d", &no_of_queries);
    while(no_of_queries-- != 0)
        solve();

    return 0;
}