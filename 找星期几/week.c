#include <stdio.h>
#include <string.h>
#define MAXS 80


void test01()
{
        char *week[7] = {"Sunday"
        "Monday"
        "Tuesday"
        "Wednesday"
        "Thursday"
        "Friday"
        "Saturday"
                  };
    for (int i = 0; i < 7; i++)
    {
        printf("%s",week[i]);
    }
    
}
int main()
{
    // int n;
    // char s[MAXS];
    
    // scanf("%s", s);
    // n = getindex(s);
    // if ( n==-1 ) printf("wrong input!\n");
    // else printf("%d\n", n);
    test01();
    return 0;
}