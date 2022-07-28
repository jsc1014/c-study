// 22-07-20 재귀함수

#include <iostream>
#include <string>
using namespace  std;

void chatbot(int n, int count);
string numof_(int n);

int main(){
   
    int num;
    cin >> num;

    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
    chatbot(num,0);
    

}

void chatbot(int n, int c){
     
    cout << numof_(n) << "\"재귀함수가 뭔가요?\" \n";

    if(n==0){
        cout << numof_(n) << "\"재귀함수는 자기 자신을 호출하는 함수라네\"";
        cout << numof_(n) << "라고 답변하였지.";
    }

    cout << numof_(n) << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n" ;
    cout << numof_(n) << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    cout << numof_(n) << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"";

    chatbot(n - 1, c + 1);
    
    cout << numof_(n) << "라고 답변하였지.";
}

string numof_(int n){
    string str;
    for(int i = 0 ; i < n*4 ; i++)
       str += "_";
    return str;
}