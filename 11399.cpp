#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int tries = 0, result = 0, person = 0;
    std::cin >> tries;
    std::vector<int> input(tries);//memorize it

    for(int i = 0; i<tries; i++){
        scanf(" %d", &input[i]);
    }

    std::sort(input.begin(), input.end());

    for(int i = 0; i<tries; i++){
        for(int j = 0; j<=i; j++){
            person+=input[j];
        }
        result+=person;
        person = 0;
    }
    std::cout << result <<std::endl;
}