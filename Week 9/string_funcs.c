// string_funcs.c
#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 100

int main(void) {
	// 사용자에게 문자열 2개 받음
	char str1[STRING_LENGTH], // -> [] 안에 상수 이름 사용 가능
		 str2[STRING_LENGTH],
		 str3[STRING_LENGTH]; // 복사 또는 결합할 문자열

	printf("Enter first string >>> ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] ='\0';
	/* fgets 함수를 사용했을 때 받은 문자열에서
	   마지막 문자 \n대신 \0으로 변경한다.*/

	printf("Enter second string >>> ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = '\0';

	printf("\n------\n");


	// 문자열의 길이 출력
	printf("str1의 길이: %d\nstr2의 길이: %d\n", 
		(int)strlen(str1), (int)strlen(str2)); // (size_t)에서 (int)로 형변환

	// str1은 str3으로 복사되고 출력
	strcpy_s(str3, sizeof(str3), str1); // _s 하면 sizeof(str)까지만 복사함.
	printf("복사 후 str3: %s\n", str3);

	// str1와 str2를 결합하고 출력
	strcat_s(str1, sizeof(str1),str2);
	printf("str1와 str2를 결합 후:\n%s", str1);
	return 0;
}