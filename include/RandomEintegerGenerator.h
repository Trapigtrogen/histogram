#pragma once

#include "Histogram.h"

namespace Hist
{
	class RandomEintegerGenerator: public RandomEintegerGeneratorBase
	{
	public:
		RandomEintegerGenerator();
		EInteger operator()();
	};
}
