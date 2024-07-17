#include<iostream>
using namespace std;
class sach
{
   
private:
   int name;
public:
   sach(int name){
      cout<<"mo sach so "<<name<<endl;
   }
   sach(){
      cout<<"mo sach"<<endl;
   }
};
class c1: public sach{
 public: 
 // dùng hàm khởi tạo có tham số
 c1(int n):sach(n)
 {
      cout<<"dong sach";
   }
};
int main(){
   c1 c(4);
   
}
