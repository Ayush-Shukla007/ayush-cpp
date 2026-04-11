#include <bits/stdc++.h>
using namespace std;

int main() {

    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    vector<int> adj[v];
    vector<int> indegree(v, 0);
    vector<int> outdegree(v, 0);

    cout << "Enter directed edges :" << endl;

    for(int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        outdegree[a]++;
        indegree[b]++;
    }

    cout << "\nVertex  Indegree  Outdegree\n";

    for(int i = 0; i < v; i++) {
        cout << i << "        "
             << indegree[i] << "          "
             << outdegree[i] << endl;
    }

    return 0;
}