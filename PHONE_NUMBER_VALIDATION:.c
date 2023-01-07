#include<stdio.h>
#include<math.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n/1000000000!=0&& log(10)+1!=10)
    printf("Valid");
    else
    printf("Invalid");
}