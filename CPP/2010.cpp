#include <iostream>
int main()
{
    int cnt = 0;
    int input = 0;
    int result = 0;
    std::cin >> cnt;

    for(int i = 0; i<cnt; i++){
        std::cin >> input;
        if(i == cnt-1)
        {
            result += input;
        }
        else
        {
            result += (input-1);
        }
    }
    std::cout << result << std::endl;
}