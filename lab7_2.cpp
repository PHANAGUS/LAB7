#include<iostream>

using namespace std;

int main()
{
	int j=0, P[5000];
	while(j < 5000)
	{
		P[j] = 2*j+1;
		j++;
	}

	int k;
	cout << "Please input k: ";
	cin >> k;
	if(k > 0)
	{
		int i=0, result=0;
		while(i < 5000)
		{
			if(P[i]%k == 0)
			{
				result = result - P[i];
			}
			else
			{
				result = result + P[i];
			}
			i++;
		}
		cout << "Result = " << result;
	}
	else
	{
		cout << "Invalid input!!!";
	}
	
	return 0;
}