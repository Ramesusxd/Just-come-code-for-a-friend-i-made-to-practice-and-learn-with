

#include "pch.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    cout << "Hello!" << '\n'; 
	cout << "How are you, Let me ask you a question. What is your favorite number? " << '\n';
	cout << "Enter favorite number: " << '\n';
	int i;
	cin >> i;
	cout << '\n' << '\n';
	cout << " So your favorite number is.. " <<  i  << " and we are going to give it a variable the letter i, Nice to meet you by the way!" << '\n';
	system("PAUSE");
	cout << '\n' << '\n';
	cout << "Now That we have your favorite number, Im going to times it by 10.. so this will look like 'i times 10' " << '\n';
	system("PAUSE");
	cout << '\n' << '\n';
	cout << " the number you picked times 10 is " << i * 10;
	cout << '\n' << '\n';
	system("PAUSE");
	cout << '\n' << '\n';
	cout << "Now lets have some fun with it" << '\n';
	cout << "Lets pick a new Number.. Enter a new Number.." << '\n';
	cout << "pick a second Number and we will assign that to the letter 'j' : ";
	int j;
	cin >> j;
	cout << '\n' << '\n';
	cout << "Now we will take your old number and your new number and add them together.. aka 'i+j' and it will equal both numbers together" << '\n';
	system("PAUSE");
	cout << i + j << '\n';
	cout << "Now we will take the new number which is..." << i + j << " and make it its own integer the letter 'h' so we can continue" << '\n';
	cout << '\n' << '\n';
	system("PAUSE");
	cout << "some code doing its thing in the background hold on..." << '\n';
	cout << '\n' << '\n';
	system("PAUSE");
	int h;
	h = i + j; 
	cout << "your new number is " << h << " Because we reassigned the integer." << '\n';
	cout << '\n' << '\n';
	system("PAUSE");
	cout << "We can still take the new number, call it 'h' for the Variable. which is.. " << h << '\n';
	cout << '\n' << '\n';
	system("PAUSE");
	cout << " the cpu holds the values with code no matter what you do" << '\n';
	cout << '\n' << '\n';
	system("PAUSE");
	cout << "We can even add the numbers all together by telling the compiler simply h+i+j and it will give us the answer" << '\n';
	cout << '\n' << '\n';
	system("PAUSE");
	cout << "which is " << h + i + j << " By the way";
	cout << '\n' << '\n';
	system("PAUSE");




	



	



}


