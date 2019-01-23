/*
Lab Assignment 2, Excercise 2
*/


#include "pch.h"
#include <iostream>
#include <string>

void handleTheOutput(std::string output_string = "", bool end_of_the_line = false)
{
	// printing the string if any string exists
	if (output_string != "")
		std::cout << output_string;

	// printing the end of the line if bool end_of_the_line is true
	if (end_of_the_line)
		std::cout << std::endl;
}

std::string getTheInput(std::string string_for_preprint="")
{
	std::string input_string; // define the string for input

	// printing the string if any string exists before of the question 
	if (string_for_preprint != "")
		handleTheOutput(string_for_preprint);
	
	std::cin >> input_string; // get the input
	return input_string; // return the input
}


int main()
{
	std::string first_name, last_name; //define strings for first and last name text input
	int humans_age; // define int for humans age input
	double confidence_percentage; // define double for confidence percentage input

	first_name = getTheInput("Enter your first name: "); // Getting a first name
	last_name = getTheInput("Enter your last name: "); // Getting a last name
	humans_age = std::stoi(getTheInput("Enter your age: ")); // Getting an age
	confidence_percentage = std::stod(getTheInput("Enter your confidence in programmers in percentage (0-100): ")) / 100; // Getting and calculating a condifedence coefficient and converting it to double
	
	handleTheOutput("", true); // Printing a blank row
	handleTheOutput("Hello " + first_name + " " + last_name + ", nice to meet you!", true); // Printing first and last name
	handleTheOutput("You might be " + std::to_string(humans_age) + " in human years, but in dog years you are " + std::to_string(humans_age * 7), true); // Printing humans and dogs age

	// Printing a sentence that depends of confidence
	if (confidence_percentage < 0.5)
		handleTheOutput("I agree, programmers can't be trusted!", true);
	else
		handleTheOutput("Writing good code takes hard work! ", true);

	return 0;
}