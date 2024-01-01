#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b;
    std::vector<int> x;
    std::vector<int> y;

    std::cin >> a;
    for(int i = 0; i < a; i++){
        int temp;
        std::cin >> temp;
        x.push_back(temp);
    }

    std::cin >> b;
    for(int j = 0; j < b; j++){
        int temp;
        std::cin >> temp;
        y.push_back(temp);
    }

    sort(x.begin(),x.end());

    for(auto it : y){
        if(std::binary_search(x.begin(),x.end(),it)){
            std::cout << "1 ";
        }
        else{
            std::cout << "0 ";
        }
    }
}