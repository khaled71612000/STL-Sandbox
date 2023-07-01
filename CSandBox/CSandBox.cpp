#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int main()
{
	vector<int> v = { 1, 2, 3, 4, 5 };
		
	//index opertator
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	cout << endl;

	// for each which is cleaner
	for (int value : v)
	{
		cout << value << endl;
	}

	cout << endl;


	//in case you want to erase an element but continue looping
	//or like a tree or unordered set
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << endl;


	unordered_map<string, int> map;

	map["khaled"] = 5;
	map["ahmed"] = 6;

	//cant iterate over using for loop because index is not zero and one we need keys
	using scoreMap = unordered_map<string, int>;
	//using const
	for (scoreMap::const_iterator it = map.begin(); it != map.end(); it++)
	{
		//dont copy value, and use const because it is const
		const string& key = it->first;
		const int& value = it->second;
		cout << key << " " << value << endl;
	}

	cin.get();
}