// lexicographic_sorter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using std::string;
using std::vector;
using std::sort;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << APP_USAGE_INFO;
		return 0;
	}

	string input = argv[1];
	vector<string> words = split(input, ",");
	sort(words.begin(), words.end());
	for (vector<string>::const_iterator iter = words.begin(); iter != words.end(); iter++)
	{
		cout << *iter << endl;
	}
	return 0;
}
