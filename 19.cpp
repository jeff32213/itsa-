#include<iostream>
using namespace std;
int main()
{
	int n=0, list[25]={0}, s=0, d=0, count=0;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> s >> d;
		for(int j=s; j<d; j++){
            list[j]++;
        }
	}
	count = list[0];
	for(int i=0; i<25; i++){
        if(count < list[i])
            count = list[i];
    } 

	cout << count << endl;
	return 0;
}