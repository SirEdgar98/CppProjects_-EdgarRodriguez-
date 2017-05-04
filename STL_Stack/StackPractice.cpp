#include<stack>
#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<string>
#include<queue>

bool comaper(int i, int j)
{
	return i > j;
}

std::stack<int> SuperMerge(std::stack<int> s1, std::stack<int> s2)
{

	std::vector<int> FirstMerge;
	while (!s2.empty || !s2.empty())
	{
		FirstMerge.push_back(s1.top());
		FirstMerge.push_back(s2.top());
		s1.pop();
		s2.pop();
	}

	std::sort(FirstMerge.begin(), FirstMerge.end());
	std::stack<int> polla;
	for (auto i = FirstMerge.begin(); i != FirstMerge.end(); ++i)
	{
		polla.push(*i);
	}
	return polla;
}



std::stack<std::string> putHat(std::stack<std::string> s1, std::stack<std::string>s2)
{
	std::deque<std::string> DQ1;

	while (!s1.empty())
	{
		DQ1.push_front(s1.top());
		s1.pop();
	}

	std::stack<std::string>ST1(s2);

	for (auto i = DQ1.begin(); i != DQ1.end(); i++)
	{
		ST1.push(*i);
	}
	return ST1;
}

std::queue<int> tranformToQ (std::stack<int> s1)
{
	std::queue<int> QueueToStack;
	std::stack<int> S1Copy(s1);
	while (!S1Copy.empty)
	{
		QueueToStack.push(S1Copy.top());
		S1Copy.pop();
	}
	return QueueToStack;
}




void main() 
{
	std::stack<int> s1;
		s1.push(5);
		s1.push(7);
		s1.push(9);
	std::stack<int> s2;
		s2.push(3);
		s2.push(6);
		s2.push(8);
	
		std::stack<std::string> ST1;
		std::stack<std::string> ST2;

		ST1.push("1");
		ST1.push("2");
		ST1.push("4");
		ST1.push("6");

		ST2.push("HOLA");
		ST2.push("QUE");
		ST2.push("TAL");

	std::stack<std::string>Result;
	Result = putHat(ST1, ST2);

	std::stack < std::string > StackCopy(Result);

	while (!StackCopy.empty())
	{
		std::cout << StackCopy.top() << "-";
		StackCopy.pop();
	}
	
	system("pause");
	
}