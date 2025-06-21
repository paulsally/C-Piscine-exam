#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function with a bug - array bounds issue
int sum_array(int *arr, int size)
{
    int sum = 0;
    int i = 0;
    
    // Bug: should be i < size, not i <= size
    while (i < size)
    {
        sum += arr[i];
        i++;
    }
    return sum;
}

// Function with pointer issues
char *copy_string(char *src)
{
    char *dest;
    int len;
    
    if (!src)
        return NULL;
    
    len = strlen(src);
    // Bug: not allocating space for null terminator
    // dest = malloc(len);
    dest = malloc(len + 1);
    if (!dest)
        return NULL;
    
    strcpy(dest, src);
    return dest;
}

// Function with logic error
int factorial(int n)
{
    int result = 1;
    int i = 1;
    
    // Bug: should be i <= n, not i < n
    //while (i < n)
    while (i <= n)
    {
        result *= i;
        i++;
    }
    return result;
}

int main(void)
{
    // Test array function
    int numbers[] = {1, 2, 3, 4, 5};
    int array_size = 5;
    int total;
    
    printf("=== Array Sum Test ===\n");
    total = sum_array(numbers, array_size);
    printf("Sum of array: %d\n", total);
    
    // Test string function
    char *original = "Hello, 42!";
    char *copied;
    
    printf("\n=== String Copy Test ===\n");
    copied = copy_string(original);
    if (copied)
    {
        printf("Original: %s\n", original);
        printf("Copied: %s\n", copied);
        free(copied);
    }
    
    // Test factorial function
    int num = 5;
    int fact;
    
    printf("\n=== Factorial Test ===\n");
    fact = factorial(num);
    printf("Factorial of %d: %d\n", num, fact);
    
    return 0;
}
