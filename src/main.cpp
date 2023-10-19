#include "Histogram.h"
#include "RandomEintegerGenerator.h"
#include <iostream>

int main()
{
	Hist::RandomEintegerGenerator dataGen;
	Hist::Histogram* histogram = new Hist::Histogram(std::unique_ptr<Hist::Logger>());

	// Create dummy data
	for (int i = 0; i < 10000000; i++)
	{
		Hist::EInteger eint = dataGen();
		histogram->add(eint);
		//printf("%i, ", eint);
	}

	// Print data
	std::cout << "\nMin: " << histogram->getMinValue() << "\nMax: " << histogram->getMaxValue() << "\nMode: " << histogram->getMode() << std::endl;
}
