#include<stdio.h>
int sq(int values);
int main()
{
    int values=9;
    printf("%d",sq(values));
    return 0;
}
int sq(int values) {
    values=values*values;
    return values;
}