#include <iostream>
int main()
{
    int king, queen, look, bisop, night, pawn;
    std::cin >> king >> queen >> look >> bisop >> night >> pawn;
    std::cout << 1 - king << " ";
    std::cout << 1 - queen << " ";
    std::cout << 2 - look << " ";
    std::cout << 2 - bisop << " ";
    std::cout << 2 - night << " ";
    std::cout << 8 - pawn << " ";
}