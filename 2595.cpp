#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    if(a+b == c){ std::cout << a << "+" << b << "=" << c;}
    else if(b+c == a){ std::cout << a << "=" << b << "+" << c;}
    //---
    else if(a-b == c){ std::cout << a << "-" << b << "=" << c;}
    else if(b-c == a){ std::cout << a << "=" << b << "-" << c;}
    //---
    else if(a*b == c){ std::cout << a << "*" << b << "=" << c;}
    else if(b*c == a){ std::cout << a << "=" << b << "*" << c;}
    //---
    else if(a/b == c){ std::cout << a << "/" << b << "=" << c;}
    else if(b/c == a){ std::cout << a << "=" << b << "/" << c;}
}