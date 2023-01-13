#include <iostream>
#include <vector>
#include <list>
#include<forward_list>
#include <map>
#include <unordered_map>
#include <utility>//std::pair
#include "Race.h"
//узел листа
template<typename T>
struct Node {
	T val;//значение узла 
	Node* prev;//предыдущий сосед
	Node* next;//следующий сосед
};
//forward_lis
template<typename T>
struct Node_forward {
	T val;
	Node_forward* next;
};
template<typename T>
class Calculator {
public:
	T Sum(T num1,T num2) {
		return num1 + num2;
	}
	T Sub(T num1, T num2) {
		return num1 - num2;
	}
	T Div(T num1, T num2) {
		if (num2 == 0)
			return 0;
		return num1 / num2;
	}
	T miltyply(T num1, T num2) {
		return num1 * num2;
	}
private:
};
int main() {
	setlocale(LC_ALL, "Russian");
	//vector
	std::vector<int> vec{ 1,2,3 };
	//range-based for loop
	for (const auto& el : vec) {
	
	}
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++) {
	}


	//быстрее в случае если бежим от начала к концу вектора
	for (int i = 0; i < vec.size(); i++) {
		int x = vec[i];
	}

	//list-двусвязный список, с неупорядочной структурой
	/*std::list<int> mylist;
	mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(3);
	for (const auto& el : mylist) {
		std::cout << el << " ";
	}
	std::cout << '\n';
	mylist.push_back(0);
	mylist.push_back(-1);
	mylist.push_back(-2);
	for (const auto& el : mylist) {
		std::cout << el << " ";
	}
	std::cout << '\n';
	Node<int>* n = new Node<int>();
	vec.push_back(n->val);
	while (n->next != nullptr) {
		vec.push_back(n->next->val);
		n = n->next;
	}*/

	//forward_list - односвязный список имеет указатель только на следующий элемент (поэтому занимает меньше места)
	/*std::cout << "\nForward list\n";
	std::forward_list<int> fwl;
	fwl.push_front(1);
	fwl.push_front(2);
	fwl.push_front(3);
	for (const auto& el : fwl) {
		std::cout << el << ' ';
	}
	std::cout<<'\n';*/

	//map
	//std::cout << "\nMap\n";
	//std::map<int, std::string> mymap;
	//mymap[2] = "abc";
	//mymap.insert({ 5,"Bob" });
	//mymap.insert(std::make_pair(6,"Six"));
	//std::pair<int, std::string> mypair;
	//mypair.first = 7;
	//mypair.second = "seven";
	//mymap.insert(mypair);
	//for (const auto& el : mymap) {
	//	std::cout << el.first<<' ' << el.second << '\n';
	//}
	//const auto& [it, isInserted] = mymap.insert({ 5,"def" });//isInserted возвращет бул значение смог ли добавить пару, it возвращает итератор на место куда вставил или не смог вставить(разные значения)
	//std::cout << isInserted << '\n';
	//unordered_map -несортированная мапа,занимает много памяти но быстро работает.поиск O(1)
	//при больших объемах может сгенерироваться похожие хеш ключи
	/*std::unordered_map<int, std::string> umap;
	umap.insert({ 1,"hello" });
	umap.insert({ 2,"word" });
	umap.insert({ 3,"friend" });
	for (const auto& [key, value] : umap) {
		std::cout << key << '\t' << value << '\n';
	}*/
	/*
	Race<Car> myRace;
	Car c1(50, "BMW");
	Car c2(60, "Mercedes");
	myRace.race(c1, c2);*/
	Calculator<int> cal1;
	Calculator<double> cal2;
	int x = 5, y = 6;
	double x1 = 2.4, y1 = 1.5;
	std::cout<<cal1.Sum(x,y)<<'\n';
	std::cout<<cal2.Div(x1, y1)<<'\n';
	std::cout << cal1.miltyply(4, 7);
	return 0;
}