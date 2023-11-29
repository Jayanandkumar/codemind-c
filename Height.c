#include <stdio.h>
int main() 
{
int x, y, height;
scanf("%d %d", &x, &y);
height = x > y ? x : y;
printf("%d", height);
}