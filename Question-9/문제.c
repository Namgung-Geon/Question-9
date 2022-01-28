#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, mat = 4;
	int credits;
	int res;
	double ks = 3.8, es = 4.4, ms = 3.9;
	double grade;

	credits = kor + eng + mat;
	grade = (ks + es + ms) / 3.0;
	res = ((credits >= 10) && (grade > 4.0));

	printf("결과 : %d", res);

	return 0;
}