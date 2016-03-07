/*
ProjectEuler.net problem 1
https://projecteuler.net/problem=1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

233168
*/

#include <iostream>
#include <vector>



void main()
{
	int max = 1000;
	int current = 0;
	int sum = 0;
	while (current < 1000)
	{
		//check if multiple of 3
		if (current % 3 == 0 || current % 5 == 0)
		{
			sum += current;
		}
		current++;
	}
	std::cout << sum << std::endl;
	std::cin.get();
}
