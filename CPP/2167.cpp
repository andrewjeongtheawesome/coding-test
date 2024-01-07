#include <iostream>
#include <vector>

int main()
{
    int a, b, c;
    int i, j, x, y;
    int total = 0;
    std::vector<std::vector<int>> v;
    //입력부
    std::cin >> a >> b;
    v.resize(a, std::vector<int>(b));
    for(int g = 0; g<a; g++){
        for(int r = 0; r<b; r++){
            std::cin >> v[g][r];
        }
    }

    //출력부
    std::cin >> c;//케이스 개수 입력
    for(int k = 0; k<c; k++){
        std::cin >> i >> j >> x >> y;//좌표 입력
        for(int p = i; p <= x; p++){
            for(int f = j; f <= y; f++){
                std::cout << j <<" "<< y << std::endl;
                std::cout << p-1 <<" "<<f-1 << "(4)" << std::endl;
                total += v[p-1][f-1];
            }
        }
        std::cout << total << "\n";
        total = 0;
    }
}