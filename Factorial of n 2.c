#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,r=1;
    printf("Enter number: ");
    scanf("%d", &j);

    for(i=1; i<=j; i++)
    {
        r=r*i;
        printf("%d",i);
        if(i<j)
        {
            printf("x");
        }
    }
    printf("=%d",r);
    return 0;
}
