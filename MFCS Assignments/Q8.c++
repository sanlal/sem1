//Q8 Directed graph
#include <iostream>
#include <vector>

using namespace std;

// This class represents a directed graph using an adjacency list
class Graph 
{
  int num_vertices;  // Number of vertices in the graph
  vector<vector<int>> adj_list;  // Adjacency list to represent the graph

  public:
    // Constructor
    Graph(int num_vertices) 
    {
      this->num_vertices = num_vertices;
      adj_list.resize(num_vertices);
    }

    // Function to add an edge from vertex 'u' to vertex 'v'
    void add_edge(int u, int v) 
    {
      adj_list[u].push_back(v);
    }

    // Recursive function to perform DFS on the graph
    void DFS_helper(int vertex, vector<bool>& visited) 
    {
      // Mark the current vertex as visited
      visited[vertex] = true;
      cout << vertex << " ";  // You can do something else with the vertex here

      // Recurse on all the vertices adjacent to the current vertex
      for (int adj_vertex : adj_list[vertex]) 
      {
        if (!visited[adj_vertex]) 
        {
          DFS_helper(adj_vertex, visited);
        }
      }
    }

    // Function to perform DFS on the graph
    void DFS()
    {
      // Mark all the vertices as not visited
      vector<bool> visited(num_vertices, false);

      // Call the recursive helper function on each vertex
      // that hasn't been visited yet
      for (int vertex = 0; vertex < num_vertices; vertex++) 
      {
        if (!visited[vertex]) 
        {
          DFS_helper(vertex, visited);
        }
      }
    }
};

int main() 
{
  // Create a graph with 8 vertices
  Graph g(8);

  // Add some edges to the graph
  g.add_edge(0, 1);
  g.add_edge(0, 2);
  g.add_edge(1, 3);
  g.add_edge(1, 4);
  g.add_edge(2, 5);
  g.add_edge(2, 6);
  g.add_edge(6, 7);

  // Perform DFS on the graph
  g.DFS();

  return 0;
}