//22-07-20 팩토리얼 (재귀함수)
#include <iostream>

using namespace std;

int fact(int n){

    if(n <= 1)              // n = 0 일때 유의!
        return 1;

    return n * fact(n-1);
}

int main(){

    int num;
    cin >> num;

    cout << fact(num) << endl;

}


