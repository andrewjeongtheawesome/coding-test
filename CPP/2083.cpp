#include <iostream>

int main()
{
    std::string name;
    std::string compare = "#";
    int a;
    int b;
    while(1)
    {
        std::cin >> name >> a >> b;
        if(name.compare(compare)==0 && a == 0 && b==0)
        {
            break;
        }
        else
        {
            if(a>17 || b>=80){
                std::cout << name <<" "<<"Senior"<<std::endl;
            }
            else{
                std::cout << name <<" "<<"Junior"<<std::endl;
            }
        }
    }
}