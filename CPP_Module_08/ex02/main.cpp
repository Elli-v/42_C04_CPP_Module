#include "mutantstack.cpp"
#include <list>

int main()
{
	{
		MutantStack<int> mstack;
		int i;

		std::cout << ">> MutantStack work <<\n";

		mstack.push(5);
		mstack.push(17);
	
		std::cout << "mstack top: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "mstack size: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;

		i = 0;
		std::cout << "--mstack it--" << std::endl;
		while (it != ite)
		{
			std::cout << "no." << i << "\t" << *it << std::endl;
			++it;
			++i;
		}
		std::cout << "mstack size: " << mstack.size() << std::endl;
		std::cout << std::endl;

		std::stack<int> s(mstack);
		std::cout << "2 pop & 1 push (42)\n";
		s.pop();
		s.pop();
		s.push(42);
		std::cout << "\n>> MutantStack vs copied stack << \n";
		std::cout << "s top : " << s.top() << std::endl;
		std::cout << "s size : " << s.size() << std::endl;
		std::cout << "mstack top : " << mstack.top() << std::endl;
		std::cout << "mstack size : " << mstack.size() << std::endl;
		std::cout << std::endl;

		std::cout << "\n>> MutantStack Reverse Iterator <<\n";
		MutantStack<int>::riterator rit = mstack.rbegin();
		MutantStack<int>::riterator rite = mstack.rend();
		std::cout << "MutantStack reverse first : " << *rit << std::endl;
		std::cout << "MutantStack reverse last : " << *(rite - 1) << std::endl;
		
		i = 0;
		std::cout << "--mstack reverse it--" << std::endl;
		while (rit != rite)
		{
			std::cout << "no." << i << "\t" << *rit << std::endl;
			++rit;
			++i;
		}
	}
	{
		std::list<int> list;
		int i;

		std::cout << "\n>> std::list work <<\n";
		list.push_back(5);
		list.push_back(17);

		std::cout << "list back: " << list.back() << std::endl;

		list.pop_back();

		std::cout << "list size: " << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		//[...]
		list.push_back(0);

		std::list<int>::iterator it_list = list.begin();
		std::list<int>::iterator ite_list = list.end();
		
		++it_list;
		--it_list;

		i = 0;
		std::cout << "---list it---" << std::endl;
		while (it_list != ite_list)
		{
			std::cout << "no." << i << "\t" << *it_list << std::endl;
			++it_list;
			++i;
		}
	}
	return 0;
}