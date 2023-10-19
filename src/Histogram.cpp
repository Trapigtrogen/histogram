#include "Histogram.h"

namespace Hist
{
	void Histogram::add(EInteger eint)
	{
		database[eint]++;
	}

	EInteger Histogram::getMode() const
	{
		EInteger mostElementsEint(Zero);
		std::map<EInteger, int>::const_iterator it = database.begin();
		while (it != database.end())
		{
			// DEBUG print amounts
			//std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
			if(it->second > database.at(mostElementsEint))
			{
				mostElementsEint = it->first;
			}
			++it;
		}
		return mostElementsEint;
	}

	EInteger Histogram::getMinValue() const
	{
		return database.begin()->first;
	}

	EInteger Histogram::getMaxValue() const
	{
		return database.rbegin()->first;
	}
}
