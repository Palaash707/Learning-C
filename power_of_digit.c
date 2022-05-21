#include <stdio.h>

#define size_of_number 3330 
#define base 10


void find_power(int number[], int num, int exponent)
{
    int i, first_digit;
    int carry, replace, product, power_counter;

    
    first_digit = 0;
    number[first_digit] = 1; 

    
    for(power_counter = 1; power_counter <= exponent; power_counter++)
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
    int number[size_of_number] = {0}, sum, exponent, num = 2;
    scanf("%d", &exponent);

    find_power(number, num, exponent);
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