#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dist[100002];
int n, k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;
    fill(dist, dist+100002, -1);

    cin >> n >> k;
    dist[n] = 0;
    Q.push(n);

    while(!Q.empty()) {
        int cur = Q.front(); Q.pop();
        for(int nxt : {cur-1, cur+1, 2*cur}) {
            if(nxt < 0 || nxt > 100002) continue;
            if(dist[nxt] != -1) continue;
            dist[nxt] = dist[cur]+1;
            Q.push(nxt);
        }
    }
    cout << dist[k] << "\n";
}