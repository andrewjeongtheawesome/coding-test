#include <iostream>
#include <vector>
#include <unordered_map>
#define fastio std::ios::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL);
int main(){
    fastio;
    std::unordered_map<int, int> m;
    int N, M, card;

    std::cin >> N;
    for(int i = 0; i < N; i++){
        std::cin >> card;
        m[card]++;
    }
    std::cin >> M;
    for(int j = 0; j < M; j++){
        std::cin >> card;
        std::cout << m[card] << " ";
    }
}
//int main(){
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(NULL);
//    std::cout.tie(NULL);
//    int a, b;
//
//    std::cin >> a;
//    std::vector<int> v1(a);
//    for(int i = 0; i < a; i++){
//        std::cin >> v1[i];
//    }
//
//    std::cin >> b;
//    std::vector<int> v2(b);
//    for(int i = 0; i < b; i++){
//        std::cin >> v2[i];
//    }
//    std::sort(v1.begin(),v1.end());
//    for(auto it : v2){
//        std::cout << std::count(v1.begin(),v1.end(), it) << " ";
//    }
//}
