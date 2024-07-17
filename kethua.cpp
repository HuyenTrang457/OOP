#include<iostream>
using namespace std;
class dienThoai
{
   
private:
   string hangSx;
   string phienBan;
   float kichThuoc;
   int soNamBaoHanh;
public:
   void khoiDong(){
      
   }

   //hang sx
   string gethangSx(){
      return hangSx;
   }
   string sethangSx(string s){
      hangSx= s;
   }
   // phien ban 
    string getPhienBan(){
      return phienBan;
   }
   string setPhienBan(string s){
      phienBan= s;
   }
   //kich thuoc 
    string getKichThuoc(){
      return kichThuoc;
   }
   string setKichThuoc(float d){
      kichThuoc= d;
   }
   // so nam bao hanh 
    string getSoNamBaoHanh(){
      return soNamBaoHanh;
   }
   string setSoNamBaoHanh(int d){
      soNamBaoHanh= d;
   }
};
int main()
{
   return 0;
}
