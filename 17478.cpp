#include <iostream>

void recursive(int n, int count){
    for(int i = 0; i < count; i++){
        std::cout << "____";
    }
    std::cout << "\"����Լ��� ������?\"" << std::endl;
    if(count == n){
        for(int i = 0; i < count; i++){
            std::cout << "____";
        }
        std::cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << std::endl;
        for(int i = 0; i < count; i++){
            std::cout << "____";
        }
        std::cout << "��� �亯�Ͽ���." << std::endl;
        return;
    }

    for(int i = 0; i < count; i++){
        std::cout << "____";
    }
    std::cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << std::endl;
    for(int i = 0; i < count; i++){
        std::cout << "____";
    }
    std::cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << std::endl;
    for(int i = 0; i < count; i++){
        std::cout << "____";
    }
    std::cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" <<std::endl;
    recursive(n, count + 1);
    for(int i = 0; i < (count); i++){
        std::cout << "____";
    }
    std::cout <<"��� �亯�Ͽ���."<<std::endl;
}

int main(){
    int input;
    std::cin >> input;
    std::cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << std::endl;
    recursive(input, 0);
}
