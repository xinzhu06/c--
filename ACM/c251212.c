#include <stdio.h>

char *search(char *s, char *t)
{
    static char result[30] = "";
    int i = 0;
    int found = 0;
    for(char *ptr = s ; *ptr != '\0';ptr++)
    {
        if(*ptr == *t)
        {
            result[i] += *t;
            t++;
            i++;
            found = 1;
        }
    }
    if(found){
        return result;
    }else{
        return NULL;
    }
}



int main()
{
    char *s = "Hello, world!";
    char *t = "Hello, world!";
    char *p = search(s,t);
    if ( p != NULL )
    printf("%d\n", p - s);
    else
        printf("-1\n");
}