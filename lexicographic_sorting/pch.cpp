// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"

vector<string> split(const string& str, const string& delim) {
	vector<string> res;

	if (str.empty())
		return res;

	char *strtok_context = NULL;

	int strs_len = str.length() + 1;
	char *strs = new char[strs_len];
	strcpy_s(strs, strs_len, str.c_str());

	int delim_len = delim.length() + 1;
	char *d = new char[delim_len];
	strcpy_s(d, delim_len, delim.c_str());

	char *p = strtok_s(strs, d, &strtok_context);
	while (p) {
		string s = p;
		res.push_back(s);
		p = strtok_s(NULL, d, &strtok_context);
	}

	return res;
}

// In general, ignore this file, but keep it around if you are using pre-compiled headers.
