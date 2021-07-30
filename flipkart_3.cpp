
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> mpp;
int k1;
vector<int> v;
vector<int> ans;
// A directed graph using
// adjacency list representation
class Graph {
	int V; // No. of vertices in graph
	list<int>* adj; // Pointer to an array containing adjacency lists

	// A recursive function used by printAllPaths()
	void printAllPathsUtil(int, int, bool[], int[], int&);

public:
	Graph(int V); // Constructor
	void addEdge(int u, int v);
	void printAllPaths(int s, int d);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int u, int v)
{
	adj[u].push_back(v); // Add v to u’s list.
}

// Prints all paths from 's' to 'd'
void Graph::printAllPaths(int s, int d)
{
	// Mark all the vertices as not visited
	bool* visited = new bool[V];

	// Create an array to store paths
	int* path = new int[V];
	int path_index = 0; // Initialize path[] as empty

	// Initialize all vertices as not visited
	for (int i = 0; i < V; i++)
		visited[i] = false;

	// Call the recursive helper function to print all paths
	printAllPathsUtil(s, d, visited, path, path_index);
}
void Graph::printAllPathsUtil(int u, int d, bool visited[],
							int path[], int& path_index)
{
	// Mark the current node and store it in path[]
	visited[u] = true;
	path[path_index] = u;
	path_index++;

	// If current vertex is same as destination, then print
	// current path[]
	if (u == d) {
	    int sum = 0;
		for (int i = 0; i < path_index-1; i++)
		{ 
		    if(mpp.find({path[i],path[i+1]})!=mpp.end())
		    {
		        auto it = mpp.find({path[i],path[i+1]});
		        sum+=it->second;
		        v.push_back(it->second);
		    }
		    sort(v.rbegin(),v.rend());
		    //cout<<v[v.size()-1]<<" ";
		    
			//cout << path[i] << " ";
		}
		int tee = k1;
		    //cout<<tee;
		    int j =0;
		    while(tee--)
		    {
		        sum-=v[j];
		        j++;
		    }
		    ans.push_back(sum);
		//cout<<sum;
		//cout << endl;
	}
	else // If current vertex is not destination
	{
		// Recur for all the vertices adjacent to current vertex
		list<int>::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i)
			if (!visited[*i])
				printAllPathsUtil(*i, d, visited, path, path_index);
	}

	// Remove current vertex from path[] and mark it as unvisited
	path_index--;
	visited[u] = false;
}

// Driver program
int main()
{
    
    int m;
    cin>>m;
	Graph g(m);
    int s , d ,k;
    cin>>s>>d>>k;
    k1 = k;
    int n,p ;
    cin>>n>>p;
    while(n--)
    {
        int x,y,l;
        cin>>x>>y>>l;
        g.addEdge(x,y);
        mpp.insert({{x,y},l});
        
    }
	g.printAllPaths(s, d);
	sort(ans.begin(),ans.end());
	if(ans[0]<0)
	{
	    cout<<"0";
	}
	else
	{
	cout<<ans[0];
	}
	return 0;
}