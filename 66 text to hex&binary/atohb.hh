#pragma once

#include <string>
#include <iostream>
#include <vector>

int* converttobinary(char c) {
	int bits[8], i;

	for(i = 0; i < 8; i++)
		bits[i] = ((1<<i) & c) != 0 ? 1:0;

	for(i = 7; i >= 0; i--)
		std::cout << bits[i];
    return bits;
}

std::vector<int*> bin_str(std::string s) {
    std::vector<int*> str;
    if (s.empty()) return str;
    for (unsigned i = 0; i < s.size(); ++i) {
        str.push_back(converttobinary(s[i]));
    }
}


	
