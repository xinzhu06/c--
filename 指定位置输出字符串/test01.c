char *match( char *s, char ch1, char ch2 )
{
    int i = 0;
    while (s[i] != '\0' && s[i] != ch1)
        i++;
    
    if (s[i] != ch1) {
        printf("\n");
        return s + i;  // points to '\0'
    }
    
    int j = i;
    while (s[j] != '\0') {
        putchar(s[j]);
        if (s[j] == ch2)
          break;
        j++;
    }
    printf("\n");
    return s + i;
}
