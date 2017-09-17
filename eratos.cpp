/*
eratos.cpp
@author Robert Streetman
@date 2015-04-25
@desc This program demonstrates the sieve of Eratosthenes in c++
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string input;
	unsigned int limit, check, index, hi_prime, i, j;
	bool* candidates;
	
	cout << "Enter a number to find all primes less than that number, and then return the largest prime.\n";
	getline(cin,input);
	stringstream(input) >> limit;
	
	check = limit / 2;
	candidates = new bool[limit + 1]();
	
	for(i = 2; i <= check; i++)
	{
		j = 2;
		while(j * i <= limit)
		{
			candidates[j * i] = true;
			j++;
		}
	}
	
	i = limit;
	while(candidates[i] != false)
	{
		i--;
	}
	
	cout << "Largest prime under " << limit << ": " << i << ".\n";
}
