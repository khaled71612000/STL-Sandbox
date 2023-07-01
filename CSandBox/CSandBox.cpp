
#include <iostream>
#include <vector>

using namespace std;


namespace my_copy {

	template<typename InputIterator, typename OutputIterator>
	OutputIterator copy(
		InputIterator first,
		InputIterator last,
		OutputIterator result)
	{
		//
		for (; first != last; ++first, ++result)
		{
			*result = *first;
		}
		return result;
	}

}

int main()
{
	int a1[] = { 1, 2, 3, 4, 5, 6 };
	const int a1_size = sizeof(a1) / sizeof(a1[0]);

	int a2[a1_size];
	cout << a1 << endl;
	cout << a1_size << endl;
	cout << a1 + a1_size << endl;

	//pointer to start and end so its an address
	my_copy::copy(a1, a1 + a1_size, a2);

	for (int i = 0; i < a1_size; i++)
	{
		cout << a2[i] << endl;
	}
	cout << endl;


	vector<int> v1{ 1, 2, 3, 4, 5 };
	vector<int> v2(v1.size());

	//begin will return an iterator which is a pointer to the first elemnet
	my_copy::copy(v1.begin(), v1.end(), v2.begin());

	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << endl;
	}
}