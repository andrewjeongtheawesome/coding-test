#include <iostream>
#include <vector>

int main(){
    int n ,m, k;
    std::vector<std::vector<int>> A;
    std::vector<std::vector<int>> B;

    std::cin >> n >> m;
    A.resize(n, std::vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std::cin >> A[i][j];
        }
    }

    std::cin >> m >> k;
    B.resize(m, std::vector<int>(k));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < k; j++){
            std::cin >> B[i][j];
        }
    }

    int total = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            for (int x = 0; x < m; x++) {
                total += A[i][x]*B[x][j];
            }
            std::cout << total << " ";
            total = 0;
        }
        std::cout << "\n";
    }
    return 0;
}