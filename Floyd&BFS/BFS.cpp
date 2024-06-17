#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

class Grafo {
public:
    int V;
    vector<vector<int>> adj;

    Grafo(int v) : V(v), adj(v) {}

    void adicionarAresta(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }


    void BFS(int s, vector<int>& distancia) {
        vector<bool> visitado(V, false);

        queue<int> fila;

        visitado[s] = true;
        distancia[s] = 0;
        fila.push(s);

        while (!fila.empty()) {
            int v = fila.front();
            fila.pop();

            for (int adjacente : adj[v]) {
                if (!visitado[adjacente]) {
                    visitado[adjacente] = true;
                    distancia[adjacente] = distancia[v] + 1;
                    fila.push(adjacente);
                }
            }
        }
    }
};

int main() {
    Grafo grafo(8);

    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(1, 2);
    grafo.adicionarAresta(2, 3);
    grafo.adicionarAresta(3, 4);
    grafo.adicionarAresta(3, 5);
    grafo.adicionarAresta(4, 5);
    grafo.adicionarAresta(4, 6);
    grafo.adicionarAresta(4, 7);
    grafo.adicionarAresta(5, 6);
    grafo.adicionarAresta(7, 6);


    cout << "BFS a partir do vertice 's' (vertice 2):" << endl;

    vector<int> distancia(8, -1);
    grafo.BFS(2, distancia);

    for (int i = 0; i < 8; i++) {
        cout << "Distancia ate o vertice " << i << ": " << distancia[i] << endl;
    }

    return 0;
}
