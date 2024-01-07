#include <iostream>

int main(){
    int a = 0;
    std::cin >> a;
    for(int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        for (int j = 1; j <= a-i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= a-i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    for(int i = a - 1; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            std::cout << "*";
        }
        for (int j = a - i; j > 0; j--) {
            std::cout << " ";
        }
        for (int j = a - i; j > 0; j--) {
            std::cout << " ";
        }
        for (int j = i; j > 0; j--) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}