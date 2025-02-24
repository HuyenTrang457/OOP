
#include <iostream>
using namespace std;
class Log 
{
   public:
      const int logLevelError=0;
      const int logLevelWarning=1;
      const int logLevelInfo=2;
   private:
      int m_logLevel;
   public:
      void setLevel(int level){
         m_logLevel= level;
         
      }
      void Warn(const char* message){
         if(m_logLevel>=logLevelWarning){
            cout<<"Warning!"<<message<<endl;
         }
      }
       void Error(const char* message){
         if(m_logLevel>=logLevelError){
            cout<<"Error!"<<message<<endl;
         }
      }
       void Info(const char* message){
         if(m_logLevel>=logLevelInfo){
            cout<<"Info! "<<message<<endl;
         }
      }
};
int main()
{
    Log Logs;
    Logs.setLevel(2);
    Logs.Error("hello");
    Logs.Warn("Hello");
    Logs.Info("hello");
    return 0;
}
