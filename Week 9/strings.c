// strings.c
#include <stdio.h>
#include <string.h>

int main(void) {

	char hello[6] = { 'H','e','l','l','o',0 };
	char world[6] = { 'W','o','r','l','d',0 };
	char ment[] = "C is fun!~";

	printf("%s %s\n%s\n",hello,world,ment);

	// 문자열 don't worry, be happy! 만들고
	// 문자열 걱정마. 행복할 거야. 만들고 출력

	char dont[] = "don't worry, be happy!";
	char dont_ko[] = "걱정마. 행복할 거야.";

	printf("%s\n%s", dont,dont_ko);


	return 0;
}