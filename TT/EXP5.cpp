#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int u, v;
    int weight;
};

bool cmp(const Edge &a, const Edge &b)
{
    return a.weight < b.weight;
}

class DisjointSet
{
public:
    DisjointSet(int n)
    {
        parent.resize(n);
        rank.resize(n);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            rank[i] = 1;
        }
    }

    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSet(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == rootY)
        {
            return;
        }
        if (rank[rootX] < rank[rootY])
        {
            parent[rootX] = rootY;
            rank[rootY] += rank[rootX];
        }
        else
        {
            parent[rootY] = rootX;
            rank[rootX] += rank[rootY];
        }
    }

private:
    vector<int> parent;
    vector<int> rank;
};

vector<vector<Edge>> kruskal(int n, vector<Edge> &edges)
{
    sort(edges.begin(), edges.end(), cmp);
    vector<vector<Edge>> rst;
    DisjointSet dsu(n);
    for (const Edge &edge : edges)
    {
        int u = edge.u;
        int v = edge.v;
        if (dsu.find(u) != dsu.find(v))
        {
            dsu.unionSet(u, v);
            rst.push_back({edge});
        }
        else
        {
            bool found = false;
            for (auto &comp : rst)
            {
                int rootU = dsu.find(u);
                int rootV = dsu.find(v);
                if (rootU == rootV)
                {
                    comp.push_back(edge);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                vector<Edge> newComp{edge};
                rst.push_back(newComp);
            }
        }
    }
    return rst;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
    }
    vector<vector<Edge>> rst = kruskal(n, edges);
    int totalWeight = 0;
    for (const auto &comp : rst)
    {
        int compWeight = 0;
        cout << "Connected component:" << endl;
        for (const Edge &edge : comp)
        {
            cout << edge.u << " " << edge.v << " " << edge.weight << endl;
            compWeight += edge.weight;
        }
        cout << "Weight: " << compWeight << endl;
        totalWeight += compWeight;
    }
    cout << "Total weight: " << totalWeight << endl;
    return 0;
}