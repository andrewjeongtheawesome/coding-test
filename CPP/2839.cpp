#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    int a, gop = 1;
    std::vector<int> v;
    std::cin >> a;

    if(a%3 == 0){
        v.push_back(a/3);
    }
    if(a%5 == 0){
        v.push_back(a/5);
    }
    while(1){
        if(3*gop > a || 5*gop > a) {
            break;
        }
        else{
            if((a-(5*gop))%3 == 0){
                v.push_back(gop+((a-(5*gop))/3));
            }
            if((a-(3*gop))%5 == 0){
                v.push_back(gop+((a-(3*gop))/5));
            }
        }
        gop++;
    }

    if(v.empty()){
        std::cout << -1;
    }
    else{
        int a = *min_element(v.begin(), v.end());
        std::cout << a;
    }
}