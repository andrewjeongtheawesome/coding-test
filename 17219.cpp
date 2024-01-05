#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool compare(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a[0] < b[0];
}

int main() {
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<std::string>> v(n, std::vector<std::string>(2));

    for(int i = 0; i < n; i++){
        std::cin >> v[i][0] >> v[i][1];
    }

    // 첫 번째 열(url)을 기준으로 정렬
    std::sort(v.begin(), v.end(), compare);

    for(int j = 0; j < m; j++){
        std::string output;
        std::cin >> output;

        // 이진 탐색
        auto it = std::lower_bound(v.begin(), v.end(), output, [](const std::vector<std::string>& a, const std::string& b) {
            return a[0] < b;
        });

        if (it != v.end() && it->at(0) == output) {
            std::cout << it->at(1) << "\n";
        } else {
            std::cout << "Not found\n";
        }
    }

    return 0;
}
