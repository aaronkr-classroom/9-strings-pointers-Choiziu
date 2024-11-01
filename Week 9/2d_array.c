// 2D_array.c
#include <stdio.h>

#define STU_NUM 3
#define GRADES 4

int main(void) {
	int grades[STU_NUM][GRADES] = {
		{ 85,45,70,93 }, // 학생 1
		{ 74,86,93,45 }, // 학생 2
		{ 85,45,99,93 } // 학생 3
	};

	// 각 학생의 성적 출력
	printf("Student grades:\n");
	for (int i = 0; i < STU_NUM; i++) { // 학생의 개수
		printf("Student %d: ", i + 1);
		for (int j = 0; j < GRADES; j++) {// 성적의 개수
			printf("%d ", grades[i][j]);
		}
		printf("\n");
	}

	// 학생의 평균 성적 출력
	printf("\nEach Student's Average:\n");
	for (int i = 0; i < STU_NUM; i++) {
		int sum = 0;
		for (int j = 0; j < GRADES; j++) {
			sum += grades[i][j];
		}
		float average = sum / (float)GRADES;
		printf("Student %d: %.2f\n", i + 1, average);
	}

	return 0;
}