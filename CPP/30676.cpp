#include <iostream>
int main()
{
    int a;
    std::cin >> a;

    if(620 <= a && a <= 780){ std::cout << "Red"; }
    else if(590 <= a && a < 620){ std::cout << "Orange"; }
    else if(570 <= a && a < 590){ std::cout << "Yellow"; }
    else if(495 <= a && a < 570){ std::cout << "Green"; }
    else if(450 <= a && a < 495){ std::cout << "Blue"; }
    else if(425 <= a && a < 450){ std::cout << "Indigo"; }
    else if(380 <= a && a < 425){ std::cout << "Violet"; }
}

