/*
Lab Assignment 1, Excercise 3
*/


#include "pch.h"
#include <iostream>


bool isPrime(int input_number)
{
	bool is_prime_res = true; // we suppose that the input number is a prime number

	if (input_number == 1) // if the input number is 1, then
		is_prime_res = false; // the input number is not a prime number
	else
	{
		for (int i = 2; i < input_number; i++)
			if (input_number % i == 0) // if modulo is 0 for the input number and any number between 2 and number-1, then
			{
				is_prime_res = false; // the input number is not a prime number
				break; // exit the loop
			}
	}

	return is_prime_res; // return the result
}

int main()
{
	int sum_of_prime_numbers = 0, product_of_prime_numbers = 1; // ints with a start values for sum and product
	for (int i = 1; i <= 1000; i++) // we need to check all numbers between 1 and 1000
		if (isPrime(i)) // checking the single number, and if it is a prime numver
		{
			sum_of_prime_numbers += i; // add that number to the sum, and
			product_of_prime_numbers *= i; // multiply the product with that number
		}
	std::cout << "The sum of every prime number between 1-1000 is: " << sum_of_prime_numbers << std::endl; // printing the sum of a prime numbers
	std::cout << "The product of every prime number between 1-1000 is: " << product_of_prime_numbers << std::endl; // printing the product of a prime numbers
	return 0;
}