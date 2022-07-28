// DFS , BFS  22-07-25~26
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> result;
queue<int> que;

bool visited[1001] = {false,};
int graph[1001][1001];

void dfs(int n, int v){

    result.push_back(v);
    visited[v] = true;

    for(int i = v ; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            if(graph[i][j] == 1 && visited[j] == false){           
                dfs(n,j);      
            }
        }
        if(i == v)                     //시작 노드에서 연결된 노드가 없을 때
            break;
    }
}

void bfs(int n, int v){

    result.push_back(v);
    que.push(v);
    visited[v] = true;

    int i = v;
    while(!que.empty()){        //큐가 비었으면 반복문 종료

        for(int j = 1; j < n + 1; j++){
            if(graph[i][j] == 1 && visited[j] == false){
                result.push_back(j);
                que.push(j);
                visited[j] = true;
            }
        }
        que.pop();
        i = que.front();
    }
}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M , V;
    cin >> N >> M >> V;
    
    int a,b;

    //그래프 만들기
    for(int i = 1; i < N + 1; i++){
        for(int j = 1; j < N + 1 ; j++){
            graph[i][j] = 0;
        }
    }

    for(int i = 1 ; i < M + 1 ; i++){
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    dfs(N,V);

    for(int i = 0 ; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    //visitied, result clear
    for(int i = 0 ; i < 1001 ; i++){
        visited[i] = false;
    }
    result.clear();

    bfs(N,V);

    for(int i = 0 ; i < result.size(); i++){
        cout << result[i] << " ";
    }
}