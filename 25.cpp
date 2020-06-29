#include<iostream>
#include<string>
using namespace std;
int main()
{
	int input=0;
	cin >> input;
    cin.ignore(1,'\n');//不然會讀進去
	while(input != 0)
	{
        string str;
		int sum = 0;
		getline(cin,str);
		for(int i=0; i<str.length(); i++)
		{
			sum += (int)str[i];
		}
		cout << sum << endl;
        input--;
	}
	return 0;
} 