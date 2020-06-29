#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int month = 10 * ((int)str[0]-'0')+((int)str[1]-'0'); 
	int day = 10 * ((int)str[3]-'0')+((int)str[4]-'0');// 2=space
	switch(month)
	{
		case 1: day<21? cout << "Capricorn" << endl : cout << "Aquarius" << endl;break;
		case 2: day<19? cout << "Aquarius" << endl : cout << "Pisces" << endl;break;
		case 3: day<21? cout << "Pisces" << endl : cout << "Aries" << endl;break;
		case 4: day<21? cout << "Aries" << endl : cout << "Taurus" << endl;break;
		case 5: day<22? cout << "Taurus" << endl : cout << "Gemini" << endl;break;
		case 6: day<22? cout << "Gemini" << endl : cout << "Cancer" << endl;break;
		case 7: day<23? cout << "Cancer" << endl : cout << "Leo" << endl;break;
		case 8: day<24? cout << "Leo" << endl : cout << "Virgo" << endl;break;
		case 9: day<24? cout << "Virgo" << endl : cout << "Libra" << endl;break;
		case 10: day<24? cout << "Libra" << endl : cout << "Scorpio" << endl;break;
		case 11: day<23? cout << "Scorpio" << endl : cout << "Sagittarius" << endl;break;
		case 12: day<22? cout << "Sagittarius" << endl : cout << "Capricorn" << endl;break;
	}
	return 0;
} 