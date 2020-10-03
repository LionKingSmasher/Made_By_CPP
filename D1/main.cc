#include <iostream>
#include <functional>
#include <cinttypes>
#include <compare>

typedef int_least32_t u32;

int main(){
    u32 a, b;
    std::cin >> a >> b;
    if(auto test = [&] {
        u32 tmp = a;
        a *= b;
        b += tmp;
        std::cout << "계산 완료!" << std::endl;
//      std::cout << a << b << std::endl;
        return (a<=>b)>0;
    }; bool a = test()) {
        std::cout << "성공이야!" << std::endl;
    }
}