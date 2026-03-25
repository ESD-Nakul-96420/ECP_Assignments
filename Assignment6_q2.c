#include <stdio.h>
#include <ctype.h>   // for tolower()

// a. strlen()
size_t my_strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

// b. strcpy()
char* my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// c. strcat()
char* my_strcat(char *dest, const char *src) {
    int i = 0, j = 0;

    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

// d. strcmp()
int my_strcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] && str2[i]) {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

// e. stricmp() (case-insensitive compare)
int my_stricmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] && str2[i]) {
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);

        if (c1 != c2)
            return c1 - c2;
        i++;
    }
    return tolower(str1[i]) - tolower(str2[i]);
}

// f. strrev()
char* my_strrev(char *str) {
    int i = 0, j = my_strlen(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

// g. strchr()
char* my_strchr(const char *str, int ch) {
    while (*str != '\0') {
        if (*str == ch)
            return (char*)str;
        str++;
    }
    if (ch == '\0')
        return (char*)str;
    return NULL;
}

// h. strstr()
char* my_strstr(const char *str, const char *substr) {
    int i, j;

    if (*substr == '\0')
        return (char*)str;

    for (i = 0; str[i] != '\0'; i++) {
        j = 0;
        while (substr[j] != '\0' && str[i + j] == substr[j]) {
            j++;
        }
        if (substr[j] == '\0')
            return (char*)&str[i];
    }
    return NULL;
}

// Main function to test
int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char dest[200];

    printf("Length: %zu\n", my_strlen(str1));

    my_strcpy(dest, str1);
    printf("Copy: %s\n", dest);

    my_strcat(dest, str2);
    printf("Concat: %s\n", dest);

    printf("Compare: %d\n", my_strcmp("abc", "abd"));
    printf("Case-insensitive Compare: %d\n", my_stricmp("ABC", "abc"));

    printf("Reverse: %s\n", my_strrev(str1));

    char *pos = my_strchr("Hello", 'l');
    if (pos)
        printf("First occurrence of 'l': %s\n", pos);

    char *sub = my_strstr("Hello World", "World");
    if (sub)
        printf("Substring found: %s\n", sub);

    return 0;
}
