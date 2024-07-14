#include<iostream>
using namespace std;
class message
{

};
class woman
{
public: 
	int age;
	string name;
	message* mes;
	// constructer
	woman(string n, int a) {
		cout << "hello" << endl;
		age = a;
		name = n;
	}
	// destructer:  chỉ áp dụng cấp phát động 
	~woman() {
		cout << "delete new woman" << endl;
		delete mes; // phải xóa vùng nhớ của những class khác trong class này( nếu đó là class động)
	}
	void introduce()
	{
		cout << " my name is " << name << endl;
		cout << "tuoi: " << age << endl;
	}
	
};
int main() {
	// class tĩnh tự động xóa sau mỗi ...( main...)
	woman* hariwon = new woman("Hariwom", 12);

	delete hariwon;
	hariwon->introduce();
}
