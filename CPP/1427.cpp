#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    int input;
    std::vector<int> v = {};
    std::cin >> input;

    while(input > 0){
        int digit = input % 10;
        v.push_back(digit);
        input /= 10;
    }
    std::sort(v.rbegin(), v.rend());
    for(int i = 0; i<v.size(); i++){
        std::cout<<v[i];
    }
}
