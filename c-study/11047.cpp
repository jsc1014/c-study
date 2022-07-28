// #greedy #22-07-27
#include <iostream>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;

    int coin[N];
    int coin_num = 0;

    for(int i = 0 ; i < N; i++){
        cin >> coin[i];
    }



    while(K != 0){
        for(int i = N-1; i >= 0; i--){
            if(K / coin[i] == 0)
                continue;
            else{
                coin_num += K/coin[i];
                K -= (K/coin[i])*coin[i];
            }
        }
    }

    cout << coin_num;
}