#include <stdio.h>
#include <string.h>
#include <ctype.h> // for custom strlwr/strupr

// Custom strlwr (convert string to lowercase)
char* strlwr_custom(char *s) {
    char *p = s;
    while(*p) {
        *p = tolower(*p);
        p++;
    }
    return s;
}

// Custom strupr (convert string to uppercase)
char* strupr_custom(char *s) {
    char *p = s;
    while(*p) {
        *p = toupper(*p);
        p++;
    }
    return s;
}

// Custom strrev (reverse a string)
char* strrev_custom(char *s) {
    int i, j;
    char temp;
    for(i = 0, j = strlen(s)-1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return s;
}

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[50] = "Programming";

    // strlen(s) : returns length of string s
    printf("Length of str1: %lu\n", strlen(str1));

    // strcpy(t,s) : copies source string s to target t
    strcpy(str3, str2);
    printf("After strcpy, str3: %s\n", str3);

    // strcat(t,s) : appends string s at the end of t
    strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);

    // strcmp(t,s) : compares two strings (0 if equal)
    printf("strcmp(str1, str2): %d\n", strcmp(str1, str2));

    // strlwr(s) : converts string s to lowercase
    char str_lwr[50] = "HELLO WORLD";
    printf("strlwr_custom(str_lwr): %s\n", strlwr_custom(str_lwr));

    // strupr(s) : converts string s to uppercase
    char str_upr[50] = "hello world";
    printf("strupr_custom(str_upr): %s\n", strupr_custom(str_upr));

    // strrev(s) : reverses string s
    char str_rev[50] = "ABCDE";
    printf("strrev_custom(str_rev): %s\n", strrev_custom(str_rev));

    // strncpy(t,s,n) : copies first n characters of s to t
    strncpy(str3, str4, 6);
    str3[6] = '\0';
    printf("strncpy(str3,str4,6): %s\n", str3);

    // strncat(t,s,n) : appends first n characters of s to t
    strncat(str1, str2, 3);
    printf("strncat(str1,str2,3): %s\n", str1);

    // strchr(s,c) : returns pointer to first occurrence of character c in s
    char *ptr = strchr(str1, 'o');
    if(ptr) printf("First occurrence of 'o' in str1: %s\n", ptr);

    // strrchr(s,c) : returns pointer to last occurrence of character c in s
    ptr = strrchr(str1, 'o');
    if(ptr) printf("Last occurrence of 'o' in str1: %s\n", ptr);

    // strstr(s,t) : finds first occurrence of substring t in s
    ptr = strstr(str1, "Wor");
    if(ptr) printf("Substring 'Wor' found in str1: %s\n", ptr);

    // strtok(s,delim) : splits string s into tokens based on delim
    char str5[50] = "C,Programming,String";
    char *token = strtok(str5, ",");
    printf("Tokens in str5: ");
    while(token) {
        printf("%s ", token);
        token = strtok(NULL, ",");
    }
    printf("\n");

    return 0;
}
