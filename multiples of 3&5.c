#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long sum(long x) {
    return x * (x+1) / 2;
}

int main(){
    int t; 
    scanf("%d",&t);
    while (t-- > 0){
        long n;
        scanf("%ld",&n);
        n--;
        long sumThree = 3 * sum (n / 3);
        long sumFive = 5 * sum (n / 5);
        long sumFifteen = 15 * sum (n / 15);
        printf("%ld\n", sumThree + sumFive - sumFifteen);
    }
    return 0;
} 