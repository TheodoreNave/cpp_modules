-> std::list<int>	// Container templaté
-> Iterator: container stl d'un pointer

std::map<std::string, IOperation*> map1;
std::vector<int>	v1;
std::vector<int>	v2(42, 100);

lst1.push_back(1);
lst1.push_back(17);
lst1.push_back(42);

map1["opA"] = new Operation A;
map1["opB"] = new Operation B;

std::list<int>::const_iterator	it;
std::list<int>::const_iterator	ite = lst1.end();


for (it = lst1.begin(); it != ite; ++it)
{
	std::cout << *it << std::endl;
}