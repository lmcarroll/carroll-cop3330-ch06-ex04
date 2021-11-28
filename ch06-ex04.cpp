/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Liam Carroll
 */

#include "std_lib_facilities.h";

class Name_value
{
public:
	string name;
	int score;
	Name_value(string n, int s) : name(n), score(s) { }
};

int main()
{
	vector<Name_value> vec;

	string n;
	int v;

	cout << "Enter names and scores (e.g. Maggie 4):\n";

	while (cin >> n >> v && n != "NoName")
	{
		for (int i = 0; i < vec.size(); i++)
		{
			if (n == vec[i].name)
			{
				cout << "ERROR: duplicate\n";

				return 0;
			}
		}
		vec.push_back(Name_value(n, v));
	}

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].name << ", " << vec[i].score << "\n";
	}

	return 0;
}