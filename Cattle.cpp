#include<iostream>
using namespace std;
class Cattle
{
private:
	int numChild;
	string sayToFeed;
public:
	// constructer, destructer
	Cattle();
	Cattle(int numchild, string say);
	virtual ~Cattle();
	// getter
	int getNumChild() {
		return numChild;
	}
	string getSayToFeed() {
		return sayToFeed;
	}
	// other methor
	virtual void Say() = 0;  // Pure virtual function
	/*Buộc phải định nghĩa: Các lớp dẫn xuất từ lớp trừu tượng phải 
	cung cấp định nghĩa cho tất cả các hàm thuần ảo.Nêu không, 
	lớp dẫn xuất cũng sẽ trở thành một lớp trừu tượng.*/
	virtual void Print();
};
class Cow : public Cattle
{
private:
	const string say = "cowcowcow";
public:
	// constructer and destructer
	Cow();
	~Cow();
	// other method
	virtual void Say();
	void Print();
};
class Sheep : public Cattle
{
private:
	const string say = "beebeebee";
public:
	// constructer and destructer
	Sheep();
	~Sheep();
	// other method
	virtual void Say();
	void Print();
};
// Cattle definition
Cattle::Cattle(int numchild, string say)
{
	setNumChild(numchild);
	setSayToFeed(say);
}
Cattle:: ~Cattle(){}
// Setter Cattle
void Cattle::setNumChild(int num)
{
	numChild = num;
}
void Cattle::setSayToFeed(string say) {
	sayToFeed = say;
}
void Cattle::Print()
{
	cout << "has " << getNumChild() << endl;
}
// definition cow
// Constructer and destructer
Cow::Cow() {
	setSayToFeed(say);
	setNumChild(rand() % 10 + 1); //
}
Cow::~Cow() {}
void Cow::Print()
{
	cout << "Cow: "; Cattle::Print();
}

// Sheep definition
Sheep::Sheep
{
	setSayToFeed(say);
	setNumChild(rand() % 10 + 1);
}
Sheep::~Sheep(){}
void Sheep::Print() {
	cout << "sheep: " << Cattle::Print();
}
int main()
{
	return 0;
}
