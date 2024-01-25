#include <iostream>
using namespace std;
int main() {
  int N, M, a, b, c, d;
  cin >> N >> M;
  int p[N+1][N+1] = {};
  for(int i = 1; i <= N; i++) {
    for(int j = 1; j <= N; j++) {
      cin >> a;
      p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + a;
    }
  }
  for(int i = 0; i < M; i++) {
      cin >> a >> b >> c >> d;
      cout << p[c][d] - p[c][b-1] - p[a-1][d] + p[a-1][b-1] << '\n';
  }
}
