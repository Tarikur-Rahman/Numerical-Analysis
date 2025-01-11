#include<iostream>

using namespace std;

int main()
{
	 float x[100], y[100], find, sum=0, temp;
	 int i,j,n;

	 //Data input
	 cout<<"Enter number of data: ";
	 cin>>n;
	 cout<<"Enter data:"<< endl;
	 for(i=1;i<=n;i++)
	 {
		  cout<<"x["<< i<<"] = ";
		  cin>>x[i];
		  cout<<"y["<< i<<"] = ";
		  cin>>y[i];
	 }
	 cout<<"Enter finding value: ";
	 cin>>find;

	 // Find value 
	 for(i=1;i<=n;i++)
	 {
		  temp=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	temp = temp* (find - x[j])/(x[i] - x[j]);
			   }
		  }
		  sum = sum + temp * y[i];
	 }
	 cout<< endl<<"Interpolated value at "<< find<< " is "<< sum;

	 return 0;
}