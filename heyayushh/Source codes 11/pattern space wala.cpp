#include<iostream>
using namespace std;
int main ()
{
    int n,i,j,k;    
	
	cout<<"enter n";
	cin>>n;
	
	for(i=1; i<=n; i++)  
	{   
	     for(j=n; j>=i; j--)   
		 {   
		     cout<<" ";   
		 }   
	          for(k=1; k<=i; k++)   
	          {    
	              cout<<"*";   
	          }
    cout<<"\n";
	}
}

