#include <iostream>
#include <vector>
#include <algorithm>
#define fastio std::ios::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL)
int main(){
    fastio;
    int a;
    std::cin >> a;
    std::vector<int> v(a);
    std::vector<int> r;
    for(int i = 0; i < a; i++){
        std::cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(auto it : v){
        if(std::find(r.begin(), r.end(), it) == r.end()){
            r.push_back(it);
        }
        else{
            continue;
        }
    }

    for(auto it : r){
        std::cout << it << " ";
    }

}