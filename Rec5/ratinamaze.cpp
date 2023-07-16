#include<iostream>
using namespace std;
int sol[20][20]={0};
int c=0;
bool ratinamaze(char maze[20][20],int i,int j,int tr,int tc){
	// base case
	if(i==tr-1 and j==tc-1){
		sol[i][j]=1;
		for (int k = 0; k <tr; k++)
		{
			for(int l=0;l<tc;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		c++;

		cout<<endl;
		cout<<endl;

		// return true;
		sol[i][j]=0;
		return false;

	}
	// rec case
	sol[i][j]=1;

	// forward 
	if(j<=tc-2 and maze[i][j+1]!='B'){
		if(ratinamaze(maze,i,j+1,tr,tc)==true){
			return true;
			
		}

	}

	// downward 
	if(i<=tr-2 and maze[i+1][j]!='B'){
		if(ratinamaze(maze,i+1,j,tr,tc)==true){
			return true;
			
		}
		
	}
	sol[i][j]=0;
	return false;
}

int main(){//start
 char maze[20][20]={"UUBB",
					"UUUU",
					"BUUB",
					"BUUU",};

	 // char maze[20][20]={"UBBB",
		// 				"BUUU",
		// 				"BUBB",
		// 				"BUUU",};


					// int sol[20][20]={0};
				ratinamaze(maze,0,0,4,4);

				cout<<c<<endl;

	


	return 0;//end
}