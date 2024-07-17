
#include <iostream>

using namespace std;
typedef struct 
{
   int day, month, year;
} ngay;
void xuat_ngay(ngay a){
   cout<<a.day<<"/"<<a.month<<"/"<<a.year;
}
class benhNhan
{
private:
   string hoTen;
   ngay ngayNhapVien;
   string maBenhNhan;
   double tienPhi;
public:
   // constructer
  // benhNhan(string hoTen, ngay ngayNhapVien, string maBenhNhan){};
   //  maBenhNhan
   string getmaBenhNhan(){
      return maBenhNhan;
   }
   void setmaBenhNhan(string mbn)
   {
      maBenhNhan= mbn;
   }
   
   // hoTen
   string gethoTen(){
      return hoTen;
   }
   void sethoTen(string ten){
      hoTen= ten;
   }
   //ngay nhap vien 
   ngay getngayNhapVien(){
      return ngayNhapVien;
   }
   void setngayNhapVien(ngay day){
      ngayNhapVien= day;
   }
   void hienThiThongTin()  {
         cout << "Ma Benh Nhan: " <<getmaBenhNhan() <<endl;
         cout << "Ho Ten: " << gethoTen() << endl;
        cout << "Ngay Nhap Vien: "; xuat_ngay(getngayNhapVien());
        
    }
};
int main()
{
    ngay date;
    date.month=3; date.day=12; date.year= 2024;
   //benhNhan A("huyen trang", date,"TTH123");
   benhNhan A;
   A.sethoTen("huyen trang");
   A.setngayNhapVien(date);
   A.setmaBenhNhan("TTh23");
   
   A.hienThiThongTin();
    return 0;
}
