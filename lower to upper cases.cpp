//uppercase lowercase using class
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Upper_lowercase
{
	public:
		string toupper(string str)
		{
			string a=str;
			transform(a.begin(),a.end(),a.begin(),::toupper);
			return a;
		}
		string tolower(string str)
		{
			string are=str;
			transform(a.begin(),a.end(),a.begin(),::tolower);
			return a;
		}
};
int main()
{
	Upper_lowercase converter;
	string input;
	cout<<"enter a string:";
	cin>>input;
	string upper= converter.toupper(input);
	cout<<"uppercase:"<<upper<<endl;
	string lower=converter.tolower(input);
	cout<<"lowercase:"<<lower<<endl;
	return 0;
}
