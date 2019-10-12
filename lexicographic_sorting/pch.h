#ifndef PCH_H
#define PCH_H

// TODO: add headers that you want to pre-compile here
#include <string.h>
#include <string>
#include <vector>
using std::string;
using std::vector;

constexpr auto APP_USAGE_INFO = "usage: lexicographic_sorter.exe <w>\r\n\tw: Words to be sorted, delimited by a comma (,).\r\n";
vector<string> split(const string& str, const string& delim);

#endif //PCH_H
