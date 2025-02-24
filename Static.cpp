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

	static void what()  // khong chứa biến 
	{
		cout << "halfojfj" << endl;
		cout << "there are " << number << endl;
	}
	static int number; // bản chất là một biến global nhưng có gắn liền 1 class
	void introduce()
	{
		cout << " my name is " << name << endl;
		cout << "tuoi: " << age << endl;
		number++;
	}
	
};
int woman::number = 0;
int main() {
	woman* hariwon = new woman;
	woman::what();
}
