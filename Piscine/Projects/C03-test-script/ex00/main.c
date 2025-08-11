#include <stdio.h>
#include <string.h> // For comparison with built-in strcmp
#include <limits.h>

// Your function prototype
int ft_strcmp(char *s1, char *s2);

// Compare your ft_strcmp to the real strcmp and print results
void run_test(char *s1, char *s2, const char *desc)
{
	int expected = strcmp(s1, s2);
	//int expected = strcmp(NULL, s2);
	int actual = ft_strcmp(s1, s2);
	//int actual = ft_strcmp(NULL, s2);

	printf("Test: %s\n", desc);
	printf("  s1: \"%s\"\n", s1);
	printf("  s2: \"%s\"\n", s2);
	printf("  strcmp:     %d\n", expected);
	printf("  ft_strcmp:  %d\n", actual);
	printf("  => %s\n\n", (expected == actual) ? "PASS" : "FAIL");
}

int main(void)
{
	// Basic tests
	run_test("abc", "abc", "Equal strings");
	run_test("abc", "abd", "Different last char");
	run_test("abc", "ab", "First is longer");
	run_test("ab", "abc", "Second is longer");

	// Empty strings
	run_test("", "", "Both empty");
	run_test("a", "", "Second is empty");
	run_test("", "a", "First is empty");

	// Special characters
	run_test("ab\n", "ab\t", "Newline vs tab");
	run_test("a b", "a  b", "Space difference");

	// Extended ASCII / unsigned char
	run_test("\xff", "\x00", "255 vs 0 (unsigned char)");
	run_test("\x80", "\x7f", "128 vs 127");

	// Long strings
	char long1[1001], long2[1001];
	for (int i = 0; i < 1000; i++) {
		long1[i] = 'a';
		long2[i] = 'a';
	}
	long1[1000] = '\0';
	long2[1000] = '\0';

	run_test(long1, long2, "Very long identical strings");

	long2[999] = 'b'; // Last character is different
	run_test(long1, long2, "Very long strings with 1 char difference");

	// Embedded null characters (note: won't be visible in printf)
	char s1[] = {'a', 'b', '\0', 'c'};
	char s2[] = {'a', 'b', '\0', 'd'};
	run_test(s1, s2, "Embedded nulls (should be equal)");

	return (0);
}
