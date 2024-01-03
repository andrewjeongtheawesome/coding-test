#include <iostream>
#include <cmath>
#include <cstring>
int main(){
    char input[50000];
    int cases = 0;
    std::cin >> cases;

    for(int i = 0; i < cases; i++){
        std::cin >> input;
        int size = sqrt((int)strlen(input));
        int gap = size;
        int current = size;
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                std::cout << input[current-1];
                current += size;
            }
            current = (gap - 1);
            gap -= 1;
        }
        std::cout << "\n";
    }
}