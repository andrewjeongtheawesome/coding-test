#include <iostream>
#include <array>

int main()
{
    std::array<int, 9> arr = {};
    int max = 0;
    int result_x = 0, result_y = 0;

    for(int i = 0; i<9; i++)//y열
    {
        for(int j = 0; j<9; j++)//x열 입력
        {
            std::cin >> arr[j];
        }
        for(int k = 0; k<9; k++)
        {
            if(arr[k] >= max)
            {
                max = arr[k];
                result_x = i+1;
                result_y = k+1;
            }
        }
    }

    std::cout << max << std::endl;
    std::cout << result_x << " " << result_y << std::endl;
}