#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int a ,b, c;
    std::cin >> a >> b >> c;
    std::vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());
    std::cout << v[1] << std::endl;
}
