
#include <iostream>
#include<vector>
using namespace std;
class HocSinh
{
public:
   string ten;
   int tuoi;
   int msv;
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

class LopHoc
{
 public:
   string maLop;
   vector<HocSinh> mangHS;
   int soLopHoc;
   
   void themHocSinh(HocSinh& A)
   {
      mangHS.push_back(A);
      
   }
    void xoaHocSinh(int msv) {
        for (auto it = mangHS.begin(); it != mangHS.end(); ++it) {
            if (it->msv == msv) {
                mangHS.erase(it);
                break;
            }
        }
    }
   void hienThiDanhSach(){
      for(auto it: mangHS){
         cout<<endl;
         it.gioiThieu();
      }
   }
   
};
int main()
{
   vector<float> diem2={2.3,4.5,2,4};
   vector<float> diem3={3,5,2,4};
    HocSinh A("Ha thanh",12,diem2);
   A.msv= 1;
   HocSinh B("Huyen Trang",1,diem2);
   B.msv=2;
   
    HocSinh C("Anh Duong ",10,diem3);
    C.msv=3;
  LopHoc* myClass = new LopHoc;
  myClass->themHocSinh(A);
  myClass->themHocSinh(B);
  myClass->themHocSinh(C);
  myClass->xoaHocSinh(2);
   myClass->hienThiDanhSach();
    return 0;
}
