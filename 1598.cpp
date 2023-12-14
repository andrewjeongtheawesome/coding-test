#include <iostream>
int main()
{
    int a = 0, b = 0;//입력값
    int count_x = 0;//x좌표
    int check_num = 0;//a 검증용 변수
    std::cin >> a >> b;

    //a,b swap
    if(a>b)
    {
        int x = a;
        a = b;
        b = x;
    }

    while(1)
    {
        //두 수의 간격이 3 이하 일 때 
        if(std::abs(a-b) <= 3){
            check_num = a;
            while(1)
            {
                //가장 근접한 4의 배수인 밑단을 찾는다
                //그 4의 배수가 b값보다 크다면 한 줄 더 앞으로 간다
                //그렇지 않으면 그 줄에 위치하는게 맞음으로 break 실행
                if(check_num%4 == 0){
                    if(check_num < b){
                        a+=4;
                        count_x += 1;
                        break;
                    }
                    else{
                        break;
                    }
                }
                else{
                    check_num += 1;
                }
            }
            break;
        }
        else{
            a += 4;
            count_x += 1;
        }
    }

    //x-y실행
    if(a >= b)
        std::cout << count_x+(a-b);
    else    
        std::cout << count_x+(b-a);

}