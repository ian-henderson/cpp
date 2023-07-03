#include <cstdio>

int main() 
{
	printf("bool:\t\t%ld bytes\n", sizeof(bool));
	printf("char:\t\t%ld bytes\n", sizeof(char));
	printf("wchar_t:\t%ld bytes\n", sizeof(wchar_t));
	printf("char16_t:\t%ld bytes\n", sizeof(char16_t));
	printf("char32_t:\t%ld bytes\n", sizeof(char32_t));
	printf("short:\t\t%ld bytes\n", sizeof(short));
	printf("int:\t\t%ld bytes\n", sizeof(int));
	printf("unsigned int:\t%ld bytes\n", sizeof(unsigned int));
	printf("long:\t\t%ld bytes\n", sizeof(long));
	printf("long long:\t%ld bytes\n", sizeof(long long));
	printf("float:\t\t%ld bytes\n", sizeof(float));
	printf("double:\t\t%ld bytes\n", sizeof(double));
	printf("long double:\t%ld bytes\n", sizeof(long double));

	return 0;
}
