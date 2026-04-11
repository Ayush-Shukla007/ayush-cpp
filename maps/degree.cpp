#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    vector<int> adj[v];


    for (int i = 0; i < e; i++) {
        int a, b;
        cout << "Enter endpoints of edge: ";
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);  
    }

 
    cout << "Degree of each vertex";
    for (int i = 0; i < v; i++) {
        cout << "Degree of vertex " << i 
             << " = " << adj[i].size() << endl;
    }

    return 0;
}