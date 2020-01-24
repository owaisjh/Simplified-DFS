#include <iostream>

using namespace std;


int n;
int stk[100];
int top=-1;

void push(int c)
{
	stk[++top]=c;

}
int pop()
{
	if(top!=-1)
		return stk[top--];

	else
		return -2;


}

int adj[10][10]={0};
int visited[10]={0};											


//void DFS(int node)



int main()
{
	cout<<"Enter number of nodes:";
	cin>>n;
	cout<<"Enter number of edges:";
	int e;
	cin>>e;
	int adj[n][n]={0};
	int visited[n]={0};

	for(int i=0;i<e;i++)
	{
		int v1,v2;
		cout<<"\nEnter vertex 1:";
		cin>>v1;
		cout<<"Enter vertex 2:";
		cin>>v2;
		adj[v1-1][v2-1]=1;
		adj[v2-1][v1-1]=1;
	}
	int node;

	cout<<"Enter starting node:";
	cin>>node;

	cout<<"DFS:";
	node=node-1;
	




	fun:
	if(visited[node]==0)
		cout<<" "<<node+1;
	visited[node]=1;
	
	for(int i=0;i<n;i++)
	{
		if(adj[i][node]==1 && visited[i]==0)
		{
			push(node);
			node=i;
			goto fun;
		}
		else if(i==n-1)
		{
			node=pop();
			if(node!=-2)
				goto fun;

		}
		
		
	}

		


}
