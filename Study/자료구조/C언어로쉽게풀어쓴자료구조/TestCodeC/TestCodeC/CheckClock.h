#pragma once

#include<time.h>

class CheckClock
{
private:
	clock_t startTime, endTime;
public:
	CheckClock();
	~CheckClock();

	void StartTime();
	void EndTime();
	double GetDurationTime();
	void DrawDuration();
};
