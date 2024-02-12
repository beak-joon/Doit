#include <iostream> //11724번, DFS 활용의 대표적 예시
#include <vector>

int result=0; //결과
static std::vector<bool> visit_list; //탐색했는지 여부 저장
static std::vector<std::vector<int> > list;

void DFS(int v){
    if(visit_list[v]){
        return;
    }

    visit_list[v]=true;

    for(int i : list[v]){
        if(visit_list[i]==false){
            DFS(i);
        }
    }
}


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N,E; //노드 개수, 엣지 개수
    std::cin>>N>>E;

    list.resize(N+1);
    visit_list.resize(N+1,false); //초기는 모두 false, 노드 번호는 1부터 시작하므로 사이즈는 N+1


    for(int i=0; i<E; i++){
        int u,v;
        std::cin>>u>>v;
        list[u].push_back(v);
        list[v].push_back(u); //무방향 그래프이므로 양방향을 다 넣어주어야함
    }

    for(int i=1; i<=N; i++){
        if(visit_list[i]==false){
            result++;
            DFS(i);
        }
    }
    

    std::cout<<result;

    return 0;
}