#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person
{
	int age = 0;
	int index = 0;
	string name;
};

bool CompareAge(Person& a, Person& b)
{
	if (a.age != b.age)
		return a.age < b.age;
	else if (a.age == b.age)
		return a.index < b.index;
}

int main()
{
	int n = 0;
	vector<Person> person_list;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		Person p;
		cin >> p.age >> p.name;
		p.index = i;
		person_list.push_back(p);
	}

	sort(person_list.begin(), person_list.end(), CompareAge);

	for (int i = 0; i < n; ++i)
	{
		cout << person_list[i].age << " " << person_list[i].name << endl;
	}

	return 0;
}