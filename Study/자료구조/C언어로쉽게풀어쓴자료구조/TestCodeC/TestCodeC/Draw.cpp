
#include "Draw.h"
#include<type_traits>
#include<stdio.h>
using namespace std;

Draw::Draw()
{

}

Draw::~Draw()
{

}

template<typename T>
void Draw::DrawLine(char[] formatString, T drawData)
{
	if (is_same<T, int>())
	{
		printf("%d", drawData);
	}
	else if ()
	{

	}
}