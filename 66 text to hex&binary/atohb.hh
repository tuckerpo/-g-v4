#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <array>


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

void bin_to_hex(std::vector<int*> lin_bin) {
    typedef std::map<int, char>::iterator map_iter;
    std::string hex_holder("");
    std::map<int, char> binary_to_char_map;
    std::pair<int, char> p;
    std::vector<char>   hex_lookup = 
    {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    std::vector<int> bin_equiv_vec = {{0000}, {0001}, {0010}, {0011}, {0100}, {0101}, {0110}, {0111}, {1000}, {1001}, {1010}, {1011}, {1100}, {1101}, {1110}, {1111}};
    for (unsigned n = 0; n < lin_bin.size(); ++n) {
        binary_to_char_map.insert(std::make_pair(bin_equiv_vec[n], binary_to_char_map[n]));
    }
    // O(n)
    for (std::vector<int*>::iterator it = lin_bin.begin(); it != lin_bin.end(); it++) {
        std::vector<int> temp_vec(*it, *(++it));
        auto search = binary_to_char_map.find(temp_vec[0]);
        if (search != binary_to_char_map.end()) { hex_holder.push_back(search->second); std::cout << hex_holder << std::endl; } else { } 
    }
}


	
