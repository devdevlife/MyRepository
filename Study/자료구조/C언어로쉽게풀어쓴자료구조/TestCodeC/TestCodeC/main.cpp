
#include "main.h"

void main()
{
	Test test;
	CheckClock checkTime;
	double result;

#ifdef TestNumber01
	checkTime.StartTime();

	result = test.Test1();

	checkTime.EndTime();

	printf("result test1: %f\n", result);
	checkTime.DrawDuration();


	checkTime.StartTime();

	result = test.Test2();

	checkTime.EndTime();

	printf("result test2: %f\n", result);
	checkTime.DrawDuration();
#endif

#ifdef TestNumber02
	test.Test1();
#endif

#ifdef TestNumber03
	test.Test1();
#endif

#ifdef TestNumber04
	test.Test1();
#endif

	char* input = new char[10];
	scanf_s(input);
}