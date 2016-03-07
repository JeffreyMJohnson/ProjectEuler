/*
ProjectEuler.net problem 2
https://projecteuler.net/problem=550

Two players are playing a game. There are k piles of stones. When it is his turn a player has to choose a pile and replace it by two piles of stones under 
the following two conditions:

	Both new piles must have a number of stones more than one and less then the number of stones of the original pile.
	The number of stones of each of the new piles must be a divisor of the number of stones of the original pile.

The first player unable to make a valid move loses.
Let f(n,k) be the number of winning positions for the first player, assuming perfect play, when the game is played with k piles each having between 2 and n stones 
(inclusively).
f(10,5)=40085.

Find f(107,1012).
Give your answer modulo 987654321.

*/

#include <iostream>
#include <vector>

std::vector<int> piles;

void LoadPiles(int numPiles, int numStones)
{
	piles.clear();
	for (int i = 0; i < numPiles; i++)
	{
		piles.push_back(numStones);
	}

}

int PlayGame()
{
	int moves = 0;
	std::vector<int>* divisors = new std::vector<int>();
	while (true)
	{
		int currentMoves = moves;//used to track if valid move over pile
		for (std::vector<int>::reverse_iterator i = piles.rbegin(); i != piles.rend(); i++)
		{
			int pile = *i;
			GetDivisors(pile, divisors);
			//if prime no move on this pile
			if (divisors->size() < 3)
			{
				continue;
			}
			//valid move
			

		}
	}
}

void GetDivisors(const int num, std::vector<int>* divisors)
{
	int current = 0;
	while (current <= num)
	{
		if (num % current == 0)
		{
			divisors->push_back(current);
		}
		current++;
	}
}

void main()
{
	int maxNumStones = 10;//n
	int numPiles = 5;//k
	LoadPiles(numPiles, maxNumStones);



	std::cin.get();

}

