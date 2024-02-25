#include <iostream>

int main()
{
	enum beratBadan {budi, parto, paijo, bejo};

	beratBadan BB;

	BB = paijo;

	std::cout << "berat badan orang ini adalah " << BB << std:endl;

	return 0;
}
