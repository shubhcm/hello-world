#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include <sstream>

using namespace std;
/*
int lcsf( char *X, char *Y, int m, int n ){
   	int L[m+1][n+1];
   	int i,j;
 	for (i=0; i<=m; i++){
    	for (j=0; j<=n; j++)
    	{
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[i][j];
}
*/
int main(){
	long long N,d, temp;
	cin>>N;
	stringstream ss; 
	ss<<N<<endl;
	string Nstring = ss.str();
	cin>>d;
	temp = d*2;
		//stringstream ss; 
		ss<<temp<<endl;
		string dstring = ss.str();
	cout<<"\n Nstring :"<<Nstring<<" dstirng : "<<dstring;
	return 0; 
}