#include <stdio.h>
#include <string.h>

// Declare your function
int ft_strncmp(char *s1, char *s2, unsigned int n);

void test(char *s1, char *s2, unsigned int n)
{
	int result_std = strncmp(s1, s2, n);
	int result_custom = ft_strncmp(s1, s2, n);

	printf("s1: \"%s\", s2: \"%s\", n: %u\n", s1, s2, n);
	printf("strncmp: %d | ft_strncmp: %d\n", result_std, result_custom);
	printf("%s\n\n", result_std == result_custom ? "✅ PASS" : "❌ FAIL");
}

int main(void)
{
	// ✅ Basic equality
	test("abc", "abc", 3);

	// ✅ Mismatch at last character
	test("abc", "abd", 3);

	// ✅ s1 is shorter
	test("abc", "abcd", 4);
	test("abc", "abcd", 3);

	// ✅ s2 is shorter
	test("abcd", "abc", 4);
	test("abcd", "abc", 3);

	// ✅ Zero-length comparison
	test("abc", "xyz", 0);

	// ✅ Empty strings
	test("", "", 1);
	test("", "abc", 1);
	test("abc", "", 1);

	// ✅ Only first character differs
	test("xbc", "abc", 3);

	// ✅ Same prefix, longer tail
	test("abcde", "abczz", 3);
	test("abcde", "abczz", 5);

	// ✅ Case sensitivity
	test("abc", "aBc", 3);
	test("ABC", "abc", 3);

	// ✅ Compare strings with '\0' in the middle
	test("a\0b", "a\0c", 3);
	test("abc", "a\0c", 3);

	// ✅ Compare long strings
	test("abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz", 26);
	test("abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxzz", 26);

	return (0);
}
