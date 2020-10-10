#include<iostream>
#include<climits>

using namespace std;
int findMinVertex(int*weights,bool*visited,int n){
	int minVertex=-1;
	
	for(int  i=0;i<n;i++){
		if(!visited[i] &&(minVertex== -1 || weights[i]< weights[minVertex])){
			minVertex=i;
		}
	}
	return minVertex;
}

void prims(int** edges,int n){
	int*parent=new int[n];
	int*weights=new int [n];
	bool* visited=new bool[n];
	
	
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
		weights[i]=INT_MAX;
		
	}
	
	parent[0]=-1;
	weights[0]=0;
	
	for(int i=0;i<n-1; i++)
	{  //Find min vertex
		int minVertex=findMinVertex(weights,visited,n);
		visited[minVertex]=true;
		//Explore un visited neighbours
		for(int j=0; j<n; j++)
		{
			if(edges[minVertex][j] !=0 && !visited[j]){
				if(edges[minVertex][j]<weights[j]){
					weights[j]= edges[minVertex][j];
					parent[j]=minVertex;
						}
				}
		}	
	}




for(int i=1;i<n;i++)
{
	
		
	if(parent[i]<i){
		cout<<"The cost from" <<parent[i]<<"-->"<<i<<" is "<<weights[i]<<endl;
		
	}
	else{
		cout<< i<< "-> "<< parent[i]<< " "<<weights[i]<<endl;
		
	}
}
		
	int cost=0;
	for(int i=1;i<n;i++)
	cost+=weights[i];
	cout<<endl;
	cout<<"THE TOTAL MINIMUM COST REQUIRED TO REPAIR THE ROADS: "<<cost<<endl; 
}

int main()
{
	
	cout<<"CITY 0 - "<<"FARIDABAD"<<endl;
	cout<<"CITY 1 - "<<"GURUGRAM"<<endl;
	cout<<"CITY 2 - "<<"REWARI"<<endl;
	cout<<"CITY 3 - "<<"PANIPAT"<<endl;
	cout<<"CITY 4 - "<<"AMBALA"<<endl;
	
	

	cout<<"        1"<<"---"<<"3"<<endl;
	cout<<"       /|  /|"<<endl;	
	cout<<"      0 | / |"<<endl;
	cout<<"       \\|/  |"<<endl;
	cout<<"        2---4"<<endl;
	

		 
	
	
	int n;
	int e;
	cout<<"Enter the number of cities AND roads which are connecting the cities"<<endl;
	cin>>n>>e;
	

	
	int** edges=new int*[n];
	for(int i=0;i<n;i++){
		edges[i]=new int[n];
		for(int j=0;j<n;j++){
			edges[i][j]=0;
			
		}
	}
	
	cout<<"HERE we have to enter the values in our graph"<<endl;
	
	for(int i=0;i<e;i++)
	{
		cout<<"enter the city number and cost in Rs to repair the Road"<<endl;
		 
		 cout<<endl;
		 cout<<endl;
		 
		 cout<<"1stend"<<" "<<"2ndend"<<" "<<"COST(rupees)"<<endl ;
		 
		 
		 int  f,s,weight;
		 
		 
		 
		 
		cin>>f>>s>>weight;
		
		
		edges[f][s]=weight;
		edges[s][f]=weight;
		
	}
	
	cout<<endl;
	prims(edges,n);
	
	for(int i=0;i<n;i++)
	{
		delete [] edges[i];
			}
			
			delete [] edges;
}		
