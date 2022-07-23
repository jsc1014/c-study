#include <iostream>
#include <math.h>

using namespace std;

int Max(int a, int b){
    return a > b ? a : b;
}


// int Time[16] = {0,};     // 배열 0으로 초기화 -> 백준에는 전역변수로 써야 맞음
// int Price[16] = {0,};
// int dp[16] = {0,};
// int N;

int main(){

    // cin, cout 속도 높여주는 코드
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int Time[16] = {0,};     // 배열 0으로 초기화
    int Price[16] = {0,};
    int dp[16] = {0,};
    int N;
    
    cin >> N;

    for(int i = 1 ; i < N + 1; i++){
        cin >> Time[i] >> Price[i];
    }


    //i일째 일을 하는 순간 잃는 P의 합 구하기
    int date;
    for(int i = N ; i > 0; i--){
        date = Time[i] + i;
        if(date > N+1){
            dp[i] = dp[i+1];
        }
        else{
            dp[i] = Max(dp[i+1], Price[i]+dp[date]);
        }   
    }

    cout << dp[1] << endl;   

}