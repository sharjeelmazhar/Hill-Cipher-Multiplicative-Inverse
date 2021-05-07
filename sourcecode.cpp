#include<iostream>
using namespace std;
int main()
{
	//hello
	int det,det_In,mod;
	det=0;
	det_In=1;
	mod=26;
	cout<<"Enter Number you wanna find the multiplicative inverse of:";
	cin>>det;
	bool cond=false;
	while(cond==false)
	{
		if((det*det_In)%mod==1)
		{
			cout<<"Multiplicative inverse is: "<<det_In<<endl;
			cond=true;
		}
		else
			det_In+=1;

	}
	return 0;
}
