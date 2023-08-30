#include <stdio.h>

int main() {
    // ways to declare strings
    char * str1 = "Hello World"; // string to read only
    char str2[] = "Hello World"; // string to read and write
    // same as
    char str3[12] = "Hello World"; // +1 to the size for the null terminator

    // string formatting
    printf("Hello %s\n", "World"); // Hello World	

    // string length
    printf("Length of str1: %d\n", strlen(str1)); // 11

    // compare strings
    if (strncmp("John", "John", 4) == 0) { // str1, str2, number of characters to compare - 0 if equal
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }

    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,3); // concatenates the first n characters of src to dest

    // dest is now HelloWor
    printf("%s\n",dest);
    strncat(dest,src,20); // concatenates on top of dest
    printf("%s\n",dest);
    // dest is now HelloWorWor;d

    return 0;
}