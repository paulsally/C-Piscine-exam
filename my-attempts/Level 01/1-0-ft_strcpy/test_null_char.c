#include <stdio.h>

// Your strcpy variant without adding '\0'
void no_null_strcpy(char *dest, const char *src)
{
    while (*src)
        *dest++ = *src++;
    // no *dest = '\0';
}

// Your strcpy variant with adding '\0'
void null_strcpy(char *dest, const char *src)
{
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
}

int main()
{
    char buffer1[20];
    char buffer2[20];

    no_null_strcpy(buffer1, "Hello");
    null_strcpy(buffer2, "Hello");

    printf("Without null terminator: %s\n", buffer1);  // Might print garbage after "Hello"
    printf("With null terminator:    %s\n", buffer2);  // Correctly prints "Hello"

	for (int i = 0; i < 10; i++)
    	printf("buffer1[%d] = %d\n", i, buffer1[i]);

	for (int i = 0; i < 10; i++)
    		printf("buffer2[%d] = %d\n", i, buffer2[i]);

    return 0;
}
