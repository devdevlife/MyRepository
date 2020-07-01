
#include "CheckClock.h"
#include "main.h"

CheckClock::CheckClock()
{

}

CheckClock::~CheckClock()
{

}

void CheckClock::StartTime()
{
	startTime = clock();
}

void CheckClock::EndTime()
{
	endTime = clock();
}

double CheckClock::GetDurationTime()
{
	return (double)(endTime - startTime) / CLOCKS_PER_SEC;
}

void CheckClock::DrawDuration()
{
	printf("duration : %f\n", GetDurationTime());
}