#include<bits/stdc++.h>
using namespace std;

int main() {

    int v, e;
    cout << "Enter the vertices and edges: ";
    cin >> v >> e;
    vector<int> adj[v];
    int a, b;  
    for(int i = 1; i <= e; i++) {

        cout << "Enter the end points of edge: ";
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);   
    }
    cout << "\nAdjacency List:\n";

    for(int i = 0; i < v; i++) {
        cout << i << " -> ";
        for(int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

}