

void dfs_iterativa(int i) {
    stack<int> pilha;
    pilha.push(i);

    while (!pilha.empty()) {
        int u = pilha.top();
        pilha.pop();

        if (vis[u]) continue;
        vis[u] = true;
        for (int v : grafo[u]) {
            if (!vis[v]) {
                pilha.push(v);
            }
        }
    }
}