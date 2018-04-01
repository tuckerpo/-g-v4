#include <iostream>

void fizzbuzz(int s) {
    for (int i = 0; i < s; ++i) {
        bool fizz = (i % 3) == 0;
        bool buzz = (i % 5) == 0;
        if (fizz) std::cout << "Fizz";
        if (buzz) std::cout << "Buzz";
        if (!fizz && !buzz) std::cout << i;
        std::cout << '\n';    
    }
}
