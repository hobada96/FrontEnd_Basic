#include <iostream>
using namespace std;
// 3 3 3 4 3 5 .... 3 moduler 연산
void recursive(int i, int j, int num)
{
    if((i / num)%3 == 1 && (j / num)%3 == 1) {
        cout << ' ';
    }
    else
    {
        if(num / 3 == 0)
            cout <<'*';
        else
            recursive(i,j,num/3);
    }
}
int main() {
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
            recursive(i,j,num);
        cout << '\n';
    }
}
