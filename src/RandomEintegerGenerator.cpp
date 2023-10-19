#include "RandomEintegerGenerator.h"

namespace Hist
{
	RandomEintegerGenerator::RandomEintegerGenerator()
	{
		srand( time(0) );
	}

	EInteger RandomEintegerGenerator::operator()()
	{
		int value = rand() % 5;
		return EInteger(value);
	}
}
