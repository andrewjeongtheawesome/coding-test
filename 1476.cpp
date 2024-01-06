#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int ie = 0, is = 0, im = 0;
    int e = 1, s = 1, m = 1;
    int year = 1;
    std::cin >> ie >> is >> im;
    while(1){
        if(e == ie && s == is && m == im){
            break;
        }
        else{
            if(e == 15){
                e = 1;
            }
            else{
                e += 1;
            }

            if(s == 28){
                s = 1;
            }
            else{
                s += 1;
            }

            if(m == 19){
                m = 1;
            }
            else{
                m += 1;
            }
            year += 1;
        }
    }
    std::cout << year <<std::endl;
}