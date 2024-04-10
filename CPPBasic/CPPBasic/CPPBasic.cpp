#include <iostream>
using namespace std;
// [변수타입] [변수명] ;
// 변수명은 이름을 이상하게 짓지말고 어떤용도로 쓰일지 적는다. 대소문자 구분
// Ctrl + Shift + b 빌드하기 단축키

// char : 1byte
// short : 2byte
// int : 4byte
// __int64 (long long) : 8byte
int hp;
int maxHp;

int main()
{
    maxHp = 200;
    hp = maxHp;
    cout << hp;
    //std::cout << "Hello World!\n";
}
