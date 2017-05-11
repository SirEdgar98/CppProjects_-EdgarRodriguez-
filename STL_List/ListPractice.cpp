#include<list>
#include<forward_list>
#include<algorithm>
#include<string>
#include<iostream>


std::list<int> SuperMerge(std::list<int> L1, std::list<int> L2)
{
	L1.merge(L2);
	L1.sort();
	
	return L1;
	
}

void main()
{
	
	std::list<int> List1{ 6,5,4,3,2 };
	std::list<int> List2{ 12,9,8,7 };

	SuperMerge(List1, List2);
	
}
