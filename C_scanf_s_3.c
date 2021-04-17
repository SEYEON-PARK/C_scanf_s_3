#include <stdio.h>

int main(void)
{
	int a, all, s, m, h;

	printf("시간 입력(초) : ");
	a=scanf_s("%d", &s); // 사용자로부터 초 입력받기

	all = s; // all에 입력받은 초로 초기화하기

	if (a != 1) // 만약 입력받은 것이 조건에 맞게 입력된 1개가 아니라면
	{
		printf("입력 오류\n"); // "입력 오류"를 출력하기
		return 1;
	}

	h = s / 3600;
	s = s % 3600;

	m = s / 60;
	s = s % 60;

	printf("%d초 = %d시간 %d분 %d초\n", all, h, m, s);

	return 1;
}
