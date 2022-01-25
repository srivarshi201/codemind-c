#include<stdio.h>
int main()
{
    float celcius,farenheit;
    scanf("%f",&farenheit);
    celcius=(farenheit-32)*5/9;
    printf("%0.2f",celcius);
    return 0;
}
