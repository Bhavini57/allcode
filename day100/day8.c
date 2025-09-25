#include <stdio.h>
int main() 
{
    char z;
    printf("enter a character:");
    scanf("%c", &z);

    if (z >= 'A' && z <= 'Z')
        printf("%c is an uppercase letter\n", z);
    else if (z >= 'a' && z <= 'z')
        printf("%c is a lowercase letter\n", z);
    else if (z >= '0' && z <= '9')
        printf("%c is a digit\n", z);
    else
        printf("%c is a special character\n", z);

    return 0;
}

// so u can define range like @<=A && $>=Z