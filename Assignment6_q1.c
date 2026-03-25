#include <stdio.h>
#include <string.h>

// For stricmp() and strrev() (may require this in some compilers like Turbo C)
#include <strings.h>   // For strcasecmp (Linux alternative to stricmp)

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char temp[100] = "Hello World Hello";

    // a. strlen()
    printf("Length of str1: %lu\n", strlen(str1));

    // b. strcpy()
    strcpy(str3, str1);
    printf("After strcpy, str3: %s\n", str3);

    // c. strcat()
    strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);

    // d. strcmp()
    printf("strcmp(str1, str2): %d\n", strcmp(str1, str2));

    // e. stricmp() (use strcasecmp in Linux)
    printf("stricmp(str1, str2): %d\n", strcasecmp(str1, str2));

    // f. strrev() (not standard, may not work in all compilers)
    char rev[100] = "Hello";
    strrev(rev);
    printf("Reverse of string: %s\n", rev);

    // g. strchr()
    char *ptr = strchr(str1, 'W');
    if (ptr)
        printf("First occurrence of 'W': %s\n", ptr);

    // h. strstr()
    char *sub = strstr(str1, "World");
    if (sub)
        printf("Substring found: %s\n", sub);

    // i. strncpy()
    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("After strncpy: %s\n", str3);

    // j. strncat()
    strncat(str3, str1, 3);
    printf("After strncat: %s\n", str3);

    // k. strncmp()
    printf("strncmp(str1, str2, 3): %d\n", strncmp(str1, str2, 3));

    // l. strtok()
    char str4[100] = "C,Java,Python";
    char *token = strtok(str4, ",");
    printf("Tokens:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}
