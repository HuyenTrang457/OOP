#include<iostream>
using namespace std;
class veMayBay
{
private:
   string tenVe;
   int giaVe;
    
public:
   veMayBay(string tv, int gv){
      tenVe=tv; giaVe= gv;
   }
   string getTenVe(){
      return tenVe;
   }
   void setTenVe(string s){
      tenVe= s;
   }
   int getGiaVe(){
      return giaVe;
   }
   void setGiaVe(int s){
      giaVe=s;
   }
   
};
class nguoi
{
private:
   string ten;
   int tuoi;
public:
   // constructer
   string getTen(){
      return ten;
   }
   void setTen(string s){
      ten= s;
   }
   int getTuoi(){
      return tuoi;
   }
   void setTuoi(int s){
      tuoi=s;
   }
   
};

class hanhKhach: public nguoi,
{
private:
   int soLuongVe;
   vector<veMayBay> veMb;
public:
   void setSoLuongVe(int s){
      soLuongVe=s;
   }
   int getSoLuongVe(){
      return soLuongVe;
   }
   void setVeMb(vector<veMayBay> ve){
      for(int i=0;i<soLuongVe;i++){
         ve[i].veMayBay()
      }
   }
   
}
int main(){
   
   return 0;
}
