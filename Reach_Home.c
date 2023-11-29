#include <stdio.h>
int main() 
{
int fuel, distance;
scanf("%d", &fuel);
scanf("%d", &distance);
int max_distance = fuel * 5;
if (max_distance >= distance) 
{
    printf("YES");
 } 
else 
{
    printf("NO");
 }
}