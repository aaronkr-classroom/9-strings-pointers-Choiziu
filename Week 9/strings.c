// strings.c
#include <stdio.h>
#include <string.h>

int main(void) {

	char hello[6] = { 'H','e','l','l','o',0 };
	char world[6] = { 'W','o','r','l','d',0 };
	char ment[] = "C is fun!~";

	printf("%s %s\n%s\n",hello,world,ment);

	// ���ڿ� don't worry, be happy! �����
	// ���ڿ� ������. �ູ�� �ž�. ����� ���

	char dont[] = "don't worry, be happy!";
	char dont_ko[] = "������. �ູ�� �ž�.";

	printf("%s\n%s", dont,dont_ko);


	return 0;
}