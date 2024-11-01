// string_funcs.c
#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 100

int main(void) {
	// ����ڿ��� ���ڿ� 2�� ����
	char str1[STRING_LENGTH], // -> [] �ȿ� ��� �̸� ��� ����
		 str2[STRING_LENGTH],
		 str3[STRING_LENGTH]; // ���� �Ǵ� ������ ���ڿ�

	printf("Enter first string >>> ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] ='\0';
	/* fgets �Լ��� ������� �� ���� ���ڿ�����
	   ������ ���� \n��� \0���� �����Ѵ�.*/

	printf("Enter second string >>> ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = '\0';

	printf("\n------\n");


	// ���ڿ��� ���� ���
	printf("str1�� ����: %d\nstr2�� ����: %d\n", 
		(int)strlen(str1), (int)strlen(str2)); // (size_t)���� (int)�� ����ȯ

	// str1�� str3���� ����ǰ� ���
	strcpy_s(str3, sizeof(str3), str1); // _s �ϸ� sizeof(str)������ ������.
	printf("���� �� str3: %s\n", str3);

	// str1�� str2�� �����ϰ� ���
	strcat_s(str1, sizeof(str1),str2);
	printf("str1�� str2�� ���� ��:\n%s", str1);
	return 0;
}