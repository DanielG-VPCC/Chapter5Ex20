/*
Title:Chapter 5 Exercise 20 - Random Number Guessing Game
File name:Chapter5Ex20_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:11/24/2024
Requirements:

Write a program that generates a random number and asks the user to guess what the number is.

If the user’s guess is higher than the random number, the program should display “Too high, try again.”

If the user’s guess is lower than the random number, the program should display “Too low, try again.”

The program should use a loop that repeats until the user correctly guesses the random number.
*/

#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int randNumGen();
int userGuess();
void resultOutput(int Guess, int Answer);

int main()
{
	int Answer = randNumGen();
	while (true)
	{
		int Guess = userGuess();
		resultOutput(Guess, Answer);
		if (Answer == Guess)
			return false;
	}
}

int randNumGen()
{
	int Answer;
	srand(time(NULL));
	Answer = 1 + (rand() % 10);
	return Answer;
}

int userGuess()
{
	int Guess;
	cout << "Please input your guess: ";
	cin >> Guess;
	return Guess;
}

void resultOutput(int Guess, int Answer)
{
	if (Guess == Answer)
	{
		cout << "You are correct" << endl;
	}
	else if (Guess < Answer)
	{
		cout << "Too low, try again." << endl;
	}
	else
	{
		cout << "Too high, try again." << endl;
	}
}
