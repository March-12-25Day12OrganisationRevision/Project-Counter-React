#include <iostream>
using namespace std;

//recursion means n number of runtimecreation in address_Space
void printSequence(int n , int x , int first,int second,int temp)
{
	
	
	if(first ==0 && second==1)
		cout<<first<<" "<<second<<"  " ;

/*		temp=first+second;
		cout<<temp<<" " ;
		first=second;
		second=temp; */
					

	if(n< x-(2) ) //recursion break
	{
		return ;
	}
//	else 
//	{	
		temp=first+second;
		first=second;
		second=temp;

		cout<<temp<<" " ;
		printSequence(n-1,5,first,second,temp); //recursion call function
//	}
}
int main(){


	int input = 0 , x=0 , temp=0 ,first=0,second=1;
	
	cout<<"enter input : " ;

	cin >> input ;
	
	temp=input ;
	x=input;

	printSequence(input ,x, first,second,temp);

	return 0 ; 
}
