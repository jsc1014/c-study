// 22-07-18 그룹 단어 체커 / 21:00~22:43
#include <iostream>
#include <string>
using namespace std;

int main(){
    int input;
    cin >> input;

    string arr[input] = {};
    string str;

    for(int i = 0; i < input; i++)
        cin >> arr[i];

    int count = 0;
    int j = 0, k = 0;

    //하나의 문자열이 그룹단어인지 확인
    for(int i = 0 ; i < input ; i++){
        str = arr[i];
        
        for(j = 0; j < str.length() - 1 ; j++){
            for(k = j+1; k < str.length() ; k++){
                if(str[j] == str[k]){
                    if(k-j > 1)                     //문자열에 같은 문자가 있을때, 인덱스 차이가 1 보다 크면 break
                        break;
                }
            }
            if(str[k]==str[k-1])                    //인덱스차이가 1보다 커도 연속된 동일 문자면 continue
                continue;

            if(k!=str.length())                     //동일한 문자가 연속되지 않아 for문을 다 못돌면 break
                break;
        }
        if(j==str.length() - 1)
            count++;
    }

    cout << count << endl;
}