#include <stdio.h>

int main(void)
{
	int a, all, s, m, h;

	printf("시간 입력(초) : ");
	a=scanf_s("%d", &s);

	all = s;

	if (a != 1)
	{
		printf("입력 오류\n");
		return 1;
	}

	h = s / 3600;
	s = s % 3600;

	m = s / 60;
	s = s % 60;

	printf("%d초 = %d시간 %d분 %d초\n", all, h, m, s);

	return 1;
}
