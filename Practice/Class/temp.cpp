#include<bits/stdc++.h>

using namespace std;

class rakib
{
    int roll;
    string name;

public:
    void put_data(void);
    void get_data(string x,int y)
    {
        name=x;
        roll=y;
    }

    void r(string x,int y)
    {
        get_data(x,y);
        put_data();
    }

};

void rakib::put_data()
{
    cout<<"name "<<name<<endl;
    cout<<"roll "<<roll<<endl;
}

int main()
{
    rakib t1,t2;

    string f;

    int g;

    cin>>f>>g;

    t1.r(f,g);
}
