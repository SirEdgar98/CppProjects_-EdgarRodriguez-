#include<list>
#include<iostream>
void main()
{ 
	std::list<int> l1({ 1,2,3,4,5 });
	std::list<int> l2(l1);
	std::list<int> l3;
	l3 = l2;
	std::list<int>l4;
	l4.push_back(6);
	l4.push_front(5);
	l4.push_back(4);
	l4.push_front(3);
	l4.pop_back();
	l4.pop_front();

	int myints[] = { 75,23,65,42,13 };
	std::list<int> mylist(myints, myints + 5);

	//Recorrer con iterador forward
	std::cout << "mylist contains:";
		for (std::list<int>::iterator  it = mylist.begin(); it != mylist.end();++it)
			std::cout << ' ' << *it;
			//Imprime 75 23 65 42 13
			//Recorrer con iterador backward
	std::cout << "mylist contains:";
		for (std::list<int>::reverse_iterator  it = mylist.rbegin();it != mylist.rend();++it)
			std::cout << ' ' << *it;
				//Imprime 13 42 65 23 75
			

}