// 집합 22-07-26
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M;
    int a;
    set <int> sN;
    
    cin >> N;
    for(int i = 0 ; i < N; i++){    
        cin >> a;
        sN.insert(a);
    }

    cin >> M;
    int arrM[M];
    for(int i = 0 ; i < M; i++){    
        cin >> arrM[i];
    }

    int k = 0;
    while(k != M){
        
        auto iter = sN.find(arrM[k]);
    
        if(iter != sN.end())
            cout << 1 << " ";
        else
            cout << 0 << " ";
        k++;
    }

    // 시간초과
    // for(int i = 0; i < M; i++){
    //     for(int j = 0 ; j < N; j++){
    //         if(arr1[j]==arr2[i])
    //             answer[i] = 1;
    //     }
    // }
    
    // for(int i = 0 ; i < M; i++){
    //     cout << answer[i] << " ";
    // }

        
}