#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b, n;

    std::cin >> a;
    std::vector<int> v1(a);
    for(int i = 0; i < a; i++){
        std::cin >> v1[i];
    }
    std::sort(v1.begin(),v1.end());

    std::cin >> b;
    for(int j = 0; j < b; j++){
        std::cin >> n;
        if(std::binary_search(v1.begin(), v1.end(), n)){
            std::cout << 1 << "\n";
        }
        else{
            std::cout << 0 << "\n";
        }
    }
}
//std::cin >> b;
//    std::vector<int> v2(b);
//    for(int j = 0; j < b; j++){
//        scanf("%ld", &v2[j]);
//    }
//
//    for(auto it : v2){
//        if(std::binary_search(v1.begin(), v1.end(), it)){
//            std::cout << 1 << std::endl;
//        }
//        else{
//            std::cout << 0 << std::endl;
//        }
//    }