#include <stdio.h>
#include <string.h>

void findReplace(char source[], char find[], char replace[], char result[])
{
    char *pos, temp[1000];

    // Find first occurrence of substring
    pos = strstr(source, find);

    if (pos == NULL)
    {
        // If substring not found, copy source to result
        strcpy(result, source);
        return;
    }

    // Copy part before found substring
    int index = pos - source;
    strncpy(temp, source, index);
    temp[index] = '\0';

    // Append replacement string
    strcat(temp, replace);

    // Append remaining part after found substring
    strcat(temp, pos + strlen(find));

    // Copy final result
    strcpy(result, temp);
}

int main()
{
    char source[100] = "This is test time";
    char find[20] = "is";
    char replace[20] = "was";
    char result[200];

    findReplace(source, find, replace, result);

    printf("Source : %s\n", source);
    printf("Find : %s\n", find);
    printf("Replace : %s\n", replace);
    printf("Output : %s\n", result);

    return 0;
}
