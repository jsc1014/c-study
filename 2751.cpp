// 22-07-24 수 정렬(시간 복잡도 O(nlogn)) -> 병합 정렬로 구현 해보기
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N] = {0,};

    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }

    sort(arr,arr+N);

    for(int i : arr){
        cout << i << "\n";
    }

}