#include <queue>
#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::queue<int> q;
    int input, push_n;
    std::string order;
    std::cin >> input;

    for(int i = 0; i < input; i++){
        std::cin >> order;
        if(order == "push"){
            std::cin >> push_n;
            q.push(push_n);
        }
        else if(order == "pop"){
            if(q.empty()){
                std::cout << -1 << "\n";
            }
            else{
                std::cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(order == "size"){
            std::cout << q.size() << "\n";
        }
        else if(order == "empty"){
            if(q.empty()){
                std::cout << 1 << "\n";
            }
            else{
                std::cout << 0 << "\n";
            }
        }
        else if(order == "front"){
            if(q.empty()){
                std::cout << -1 << "\n";
            }
            else{
                std::cout << q.front() << "\n";
            }
        }
        else if(order == "back"){
            if(q.empty()){
                std::cout << -1 << "\n";
            }
            else{
                std::cout << q.back() << "\n";
            }
        }
    }
    return 0;
}