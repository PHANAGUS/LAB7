#include<iostream>
#include<string>

using namespace std;

string reverse(string x)
{
	int i = 0, L = x.size();
	string y = "";
	while(i < L)
	{
		y += x[L-i-1];
		i++;
	}
	return y;
}

string toupper(string x)
{
	int i = 0, L = x.size();
	string y = "";
	while(i < L)
	{
		y += toupper(x[i]);
		i++;
	}
	return y;
}

string tolower(string x)
{
	int i = 0, L = x.size();
	string y = "";
	while(i < L)
	{
		y += tolower(x[i]);
		i++;
	}
	return y;
}

int main(){
	string text;
    cout << "Input text: ";
	cin >> text;
	string revtext = reverse(text);
    cout << "Reversed text: " << revtext << endl;
    cout << "Palindrome: ";
	if(toupper(text) == toupper(revtext))
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
    return 0;
}