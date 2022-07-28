//#greedy #22-07-27~28
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    cin >> N;

    vector <pair<int,int>> s;       // 시작,끝 시간이 적혀있는 pair들을 정렬 및 이용을 위한 vector. pair<<endTime>,<startTime>>
    int a,b;

    for(int i = 0 ; i < N ; i ++){
        cin >> a >> b;
        s.push_back(make_pair(b,a));
    }
    sort(s.begin(),s.end());

    int end_time = s[0].first;
    int count = 1 ;
    for(int i = 1 ; i < N ; i++){
        if(s[i].second >= end_time){    //**끝나는 시간** 을 기준으로 생각한다
            end_time = s[i].first;
            count++;
        }
    }
    cout << count;
}   

    // int i = 0 ;
    // while(i <= N){
    //     int count = 0;
    //     for(int j = i; j < N ; j++){
    //         if(s[j].first >= s[i].first && s[j].second <= s[i].second){ // 인덱스가i인 회의가 채택 될수있는지 체크
    //             count++;                                                // i번 회의가 진행되는 동안 2개 이상의 회의가    
    //         }                                                           // 진행될 수 있으면 채택 x
    //     }

    //     if(count < 2){                        // 회의가 채택 됐다면
    //         max_num++;
    //         int k;
    //         for(k = i; k < N; k++){           // 채택된 회의가 끝나는 시각이상의 회의 시작시간을 갖는 회의를 
    //             if(s[i].second <= s[k].first) // 인덱스 i로 넣어줌
    //                 break;
    //         }
    //         i = k;
    //     }
    //     else{                                  // 채택되지 않았다면
    //         i++;
    //     }
    // }
    
    // cout << max_num;