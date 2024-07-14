#include<iostream>
using namespace std;
class woman
{
public: 
	int age;
	string name;
// constructer
	woman(string n, int a) {
		cout << "hello" << endl;
		age = a;
		name = n;
	}
	void introduce()
	{
		cout << " my name is " << name << endl;
		cout << "tuoi: " << age << endl;
	}
};
int main() {
	woman* hariwon = new woman("Hariwom", 12);

	hariwon->introduce();
}
