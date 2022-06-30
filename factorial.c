#include <stdio.h>

int main()
{
    int n, i, f;

    printf("Enter value for fact: ");
    scanf("%d", &n);

    if(n<0)
        printf("Error 443")
    
    else
    {
        for (i=1; i<=n; i++)
            f = f*i;
        
        printf("%d", f);
    }
}