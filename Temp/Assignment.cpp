

#include <iostream>

using namespace std;

class base_class
{
    public:
        void base_display()
        {
            cout<<"base Class:"<<endl;

        }

};

class driver1 : public base_class
{
    public:
          void driver1_display()
        {
            cout<<"driver Class 1:"<<endl;
        }
};


class driver2 : public base_class
{
    public:
          void driver2_display()
        {
            cout<<"driver Class 2:"<<endl;
        }
};






int main()
{
    driver2 oj;
    driver1 oj1;
    oj.base_display();
    oj1.base_display();

    return 0;
}










