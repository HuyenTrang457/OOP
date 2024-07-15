
#include <iostream>
#include<vector>
using namespace std;
class HocSinh
{
public:
   int msv;
   string ten;
   int tuoi;
   float ccao, cnang;
   vector<float> diem;
   HocSinh(string s,int age,vector<float> mark){
      cout<<"data was saved: "<<endl;
      ten=s;
      tuoi= age;
      diem= mark;
   }
   void gioiThieu(){
      cout<<"ten: "<<ten<<endl;
      cout<<"tuoi: "<<tuoi<<endl;
      cout<<"diem 4 mon hoc: ";
      for(float x:diem) cout<<x<<" ";
   }
   void hocLuc(){
      float tb=0;
      for(float x:diem) tb+= (float) x/4;
      if(tb>=8) cout<<"hoc luc gioi";
      else cout<<"trung binh";
   }
   
};
int main()
{
   vector<float> diem2={2.3,4.5,2,4};
   HocSinh* A= new HocSinh("Ha thanh",12,diem2);
   A->hocLuc();
   
    return 0;
}
