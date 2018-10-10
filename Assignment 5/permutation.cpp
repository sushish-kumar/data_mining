#include<iostream>
#include<string.h>
using namespace std;

int swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void permutat( char *x,int l,int r)
{
	if(l==r)
		cout<<x<<" ";
	for(int i=l;i<=r;i++)
	{
		swap((x+i),(x+l));
		permutat(x,l+1,r);
		swap((x+i),(x+l));

	}

}
int main()
{
	char str[]="ABCD";
	int n=strlen(str);
	permutat(str,0,n-1);
	return 0;
}