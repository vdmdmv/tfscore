#include "stdafx.h"

extern "C" int TestFunc()
{
	int k = 1;
	for (int i = 0; i < 10; ++i)
		k *= i;

	return k;
}