#include<list>
#include<forward_list>
#include<algorithm>
#include<unordered_set>



std::list<int> SuperMerge(std::list<int>L1, std::list<int>L2)
{
	L1.sort();
	L2.sort();
	L1.merge(L2);
	L1.reverse();

	return L1;

}

void Change(std::list<int> &L1)
{
	int tmp;
	std::list<int>::iterator it1, it2;
	it1 = L1.begin();
	it2 = L1.end();
	it2--;

	tmp = *it1;
	*it1 = *it2;
	*it2 = tmp;
}

int GetElementPos(std::list<int> L1, int pos)
{
	std::list<int>::iterator it = L1.begin();
	std::advance(it, pos);

	return *it;

}

void RemoveDuplicates(std::list<int> &L1)
{
	std::unordered_set<int>S1(L1.begin(), L1.end());

	L1.assign(S1.begin(), S1.end());
}


void RemoveElements(std::list<int> &L1, int elememntToRemove)
{
	L1.remove(elememntToRemove);
}

bool palindromo(std::list<int>L1)
{
	std::list<int>::iterator it1 = L1.begin();
	std::list<int>::reverse_iterator it2 = L1.rbegin();

	for (int i = 0; i < L1.size() / 2; i++)
	{
		if (*it1 != *it2)
		{
			return false;
		}
		else 
		{
			it1++;
			it2++;
		}
	}
	return true;
	
}

int main()
{
	std::list<int> List1{5,4,3,2,1};
	std::list<int> List2{11,10,98,7,6};
	std::list<int> List3{ 2,2,5,3,3,6,2,2,8,8,9,10 };
	std::list<int> List4{ 1,5,7,5,1 };
	std::list<int> Result;


	Result = SuperMerge(List1, List2);
	Change(List2);

	int ElementInPos;
	ElementInPos = GetElementPos(List2, 3);
	RemoveDuplicates(List3);
	bool isPalin;


	isPalin = palindromo(List1);

	 system("pause");

	return 0;
}
