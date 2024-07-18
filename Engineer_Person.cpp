
#include <iostream>
using namespace std;
class Person
{
private:
    char name[30];
    char Birthday[30];
    char Places[30];
public:
    void Input() {
        cin.ignore();
        cout << "nhap ho ten: ";
        gets(name); fflush(stdin);
        cout << "Ngay sinh: ";
       // gets(Birthday); fflush(stdin);
        cout << "Que quan: ";
       // gets(Places); fflush(stdin);
    }
    void Output()
    {
        cout << "Ho ten: " << name << endl;
        cout << "Ngay sinh: " << Birthday << endl;
        cout << "Que quan: " << Places << endl;
    }
};
    // Lop Engineer
    class Engineer : public Person
    {
    private:
        char major[30];
        int graduationyear;
    public:
        void Input() 
        {
            Person::Input();
            cout << "Nganh hoc: ";
          //  gets(major); fflush(stdin);
            cout << "Nam tot nghiep: ";
            cin >> graduationyear;
        }
        void Output()
        {
            Person::Output();
            cout << "Nganh hoc: " << major<<endl;
            cout << "Nam tot nghiep: " << graduationyear<<endl;
        }
        int getGraduationyear()
        {
            return graduationyear;
        }
};

int main()
{
    int i, n;
    Engineer a[100];
    cout << "so ki su n= "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Ky su thu " << (i + 1) << endl;
        a[i].Input();
    }
    cout << "Thong tin vua nhap: ";
    for (int i = 0; i < n; i++) 
    {
        a[i].Output();
    }
   int max= a[0].getGraduationyear();
   int index=0;
   for(int i=1;i<n;i++){
      if(a[i].getGraduationyear()>max) 
       {  
          max= a[i].getGraduationyear();
           index=i;
       }
   }
   cout<<"ki su co nam tot nghiep gan day nhat: "<<endl;
   a[index].Output();

    return 0;
}
