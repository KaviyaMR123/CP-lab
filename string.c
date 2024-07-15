#include <stdio.h>
int StringLength(char *s)
{
    int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
    return length;
}
void StringCopy(char *s1, char *s2)
{
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';  
}
int StringCompare(char *s1, char *s2) 
{
    while (*s1 != '\0' && *s2 != '\0') 
    {
        if (*s1 != *s2)
        {
            return *s1 - *s2; 
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
void StringConcat(char *s1, char *s2) 
{
    while (*s1 != '\0') 
    {
        s1++;
    }
    while (*s2 != '\0') 
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';  
}
int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[StringLength(str1) - 1] = '\0';
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[StringLength(str2) - 1] = '\0';
    printf("Length of the first string: %d\n", StringLength(str1));
    char copy[100];
    StringCopy(copy, str1);
    printf("Copied string: %s\n", copy);
    int comparisonResult = StringCompare(str1, str2);
    if (comparisonResult == 0) 
    {
        printf("The two strings are equal.\n");
    } 
    else if (comparisonResult < 0)
    {
        printf("The first string is less than the second string.\n");
    } 
    else
    {
        printf("The first string is greater than the second string.\n");
    }
    StringConcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
