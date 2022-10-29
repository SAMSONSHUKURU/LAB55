/*
Samson Shukuru
Fall 22 C++
Lab 5 Number guesssing game
Due Oct 28, 2022
create a random number guessing game ranged from 0-100, that allows 20 user attempts.
displaying wins and losses after each attempt
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include <time.h>
#include <random>


using namespace std;

//heading
void Welcome();

//random Number to guess
void RandNum(int random);

//user inputs from keyboard
void UserInput(int x);

// 10 diffrent correct Statements
void CorrectStatement();

// checks for correct answer
void CheckGuess(int random, int x);

// 10 diffrent Wrong Statements
void WrongGuess();

//play again question
void RunAgainQuestion(char A, int random, int x, char a);

 // asks user to play again
void Playagain(char a, char A, int random, int x);

//runs code again if char a == char A
void Yes(char A, char a, int random, int x);

int main()
{
	int x=0;
	int random = rand() % 100 +1;
	char A = 'y';
	char a= ' ';

	srand(time(NULL));

	Playagain(a,A,random,x);

	return 0;
}

void Welcome()
{
	cout << "Welcome to the number guessing game! You'll get 20 Attempts\n";
	cout << "please enter intergers between 0 to 100\n";
}

void RandNum(int random)
{
	random;
	//cout << random << endl;
}

void UserInput(int x)
{
	cout << "Enter a Number:";
	cin >> x;
	cout << endl;

}

void CheckGuess( int random, int x)
{

	if (random == x)
	{
		CorrectStatement();
		exit(0);
	}
	else
	{
		WrongGuess();
	}

}

void CorrectStatement()
{
	switch (rand() % 10 + 1)
	{
	case 1:
		cout << "Yay, you guessed correct";
		break;
	case 2:
		cout << "Boy your own a roll!";
		break;
	case 3:
		cout << "Hippe hippe hooray";
		break;
	case 4:
		cout << "Looks like your lucky";
		break;
	case 5:
		cout << "Do you have a 4 Leaf Clover?";
		break;
	case 6:
		cout << "GG";
		break;
	case 7:
		cout << "cccorrect!";
		break;
	case 8:
		cout << "Lucks on your side";
		break;
	case 9:
		cout << "What a genius";
		break;
	case 10:
		cout << "You might really be that guy";
		break;
	}
}

void WrongGuess()
{
	switch (rand() % 10 + 1)
	{
	case 1:
		cout << "Whomp whomp, Try again\n\n";
		break;
	case 2:
		cout << "Keep trying\n\n";
		break;
	case 3:
		cout << "You suck\n\n";
		break;
	case 4:
		cout << "Its not looking to good =(\n\n";
		break;
	case 5:
		cout << "Just keep trying\n\n";
		break;
	case 6:
		cout << "Failed attempt\n\n";
		break;
	case 7:
		cout << "Boy you stink\n\n";
		break;
	case 8:
		cout << "I'd stop trying, personally\n\n";
		break;
	case 9:
		cout << "Maybe you need a dash a luck\n\n";
		break;
	case 10:
		cout << "My grandma could do better\n\n";
		break;
	}
}

void RunAgainQuestion(char A, int random, int x,char a)
{

	if (random != x)
	{
		switch (rand() % 2 + 1)
		{
		case 1:
			cout << "\nDo you want to play again?" << endl;
			cout << "Enter: y or n:";
			cin >> a;
			Yes(A,a,random,x);
			break;
		case 2:
			cout << "\nWould you like to Try again?" << endl;
			cout << "Enter: y or n:";
			cin >> a;
			Yes(A,a,x,random);
			break;
		}

	}

}

void Playagain(char a, char A, int random, int x)
{

	do {
		Welcome();
		RandNum(random);
		for (int i = 0; i < 20; i++)
		{
			UserInput(x);
			CheckGuess(random,x);
		}
		RunAgainQuestion(A,random,x,a);
	} while (a == A);

}

void Yes(char A, char a,int random, int x)
{
	if (a == A)
	{
		{
			Playagain(a,A,random,x);
		}
	}
	else
	{
		exit(0);
	}

}

