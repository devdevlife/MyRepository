
#include "main.h"
#include "Test.h"
#include "CreateStack.h"

Test::Test()
{

}

Test::~Test()
{

}

double Test::Test1()
{

#ifdef TestNumber01		
	return SlowPower(2, 500000);
#endif

#ifdef TestNumber02
	PibItor(10);
	return 0.0;
#endif

#ifdef TestNumber03
	HanoiTower(4, 'A', 'B', 'C');
	return 0.0;
#endif

#ifdef TestNumber04
	BaseStack<int>* baseStackArray = CreateStack::CreateStackArray<int>(10);

	int getdata;
	baseStackArray->Push(10);
	baseStackArray->Push(9);
	baseStackArray->Push(8);
	baseStackArray->Push(7);
	baseStackArray->Push(6);
	baseStackArray->Push(5);
	baseStackArray->Push(4);
	baseStackArray->Push(3);
	baseStackArray->Push(2);
	baseStackArray->Push(1);
	baseStackArray->Push(22);
	baseStackArray->Push(23);

	getdata = baseStackArray->Pop();
	printf("pop data / %d\n", getdata);
	getdata = baseStackArray->Pop();
	printf("pop data / %d\n", getdata);
	getdata = baseStackArray->Pop();
	printf("pop data / %d\n", getdata);


	delete(baseStackArray);
	return 0.0;
#endif

}

double Test::Test2()
{

#ifdef TestNumber01		
	return Power(2, 500000);
#endif

#ifdef TestNumber02
	return 0.0;
#endif

#ifdef TestNumber03
	return 0.0;
#endif

#ifdef TestNumber04
	//BaseStack<int>* baseStackLinked = CreateStack::CreateStackLinkedList<int>();
	return 0.0;
#endif

}

void Test::HanoiTower(int n, char from, char temp, char to)
{
	if (n == 1)
	{
		printf("원판 1을 %c -> %c 로 이동\n", from, to);
	}
	else
	{
		HanoiTower(n - 1, from, to, temp);
		printf("원판 %d 를 %c -> %c 로 이동\n", n, from, to);
		HanoiTower(n - 1, temp, from, to);
	}
}

void Test::PibItor(int n)
{
	int pp = 0;
	int p = 1;
	int result = 0;

	for (int icnt = 0; icnt < n; icnt++)
	{
		if (icnt == 0)
		{
			printf("%d / ", icnt);
			continue;
		}
		else if (icnt == 1)
		{
			printf("%d / ", icnt);
			continue;
		}

		result = p + pp;

		printf("%d / ", result);

		pp = p;
		p = result;
	}
}

double Test::SlowPower(double x, int n)
{
	double result = 1.0;
	for (int icnt = 0; icnt < n; icnt++)
	{
		result *= x;
	}

	return result;
}

double Test::Power(double x, int n)
{
	if (n == 0)
		return 1;
	else if ((n % 2) == 0)
		return Power(x*x, n / 2);
	else
		return x*Power(x*x, (n - 1) / 2);
}