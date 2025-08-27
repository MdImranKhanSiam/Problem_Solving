#include <iostream>

using namespace std;
class sms
{
   private:
       string st_name;
       int st_id;
       int password;
       string semester;
       int money;
       string registration;
       int insert;
       int update;
       int del;




   public:
    void adminlogin(string username, int pass);
    void signin(int id,int pass);




};


int main()
{


    return 0;
}
