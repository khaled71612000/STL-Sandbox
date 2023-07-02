
#include <iostream>
#include <vector>
#include <thread>
#include <map>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono_literals;


void RefreshForecast(map<string, int> forecastMap)
{
	while (true)
	{
		for (auto& item : forecastMap)
		{
			item.second++;
			cout << item.first << " - " << item.second << endl;
		}

		this_thread::sleep_for(2000ms);
	}
}

void function1()
{
	for (int i = 0; i < 200; i++)
	{
		cout << '+';
	}
}
void function2()
{
	for (int i = 0; i < 200; i++)
	{
		cout << '-';
	}
}
int main()
{
	thread worker1(function1);
	thread worker2(function2);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	map<string, int> forecastMap = {
		{"New York", 15},
		{"Mubai", 20},
		{"Berlin", 18}
	};

	thread worker3(RefreshForecast, forecastMap);


	cin.get();
}