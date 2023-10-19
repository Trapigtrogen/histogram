#pragma once

#include "HistogramBase.h"
#include <map>

namespace Hist
{
	/**
	* I don't know if editing the HistogramBase.h was allowed but I couldn't build with Histogram as subclass
	* to HistogramBase without declaring HistogramBase's constructor and deconstructor first.
	*/
	class Histogram : HistogramBase
	{
	public:
		Histogram(std::unique_ptr<Logger> logger) : HistogramBase(std::move(logger)){};

		void add(EInteger);

		// Return the value that occurrs most often in the data set (I.e. there exists no other value that occurs more often than the return value)
		EInteger getMode() const;

		// Return the smallest value in the data set, according to default ordering relation of integer numbers
		EInteger getMinValue() const;

		// Return the largest value in the data set
		EInteger getMaxValue() const;
		int max_value = 0;


	private:
		std::map<EInteger, int> database;
	};
}
