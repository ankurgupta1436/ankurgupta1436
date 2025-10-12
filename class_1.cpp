#include<iostream>
using namespace std;
class Hero{
    public:
    //properties
    int health =30;
    
};
int main()
{
    Hero h1;
    cout<<"Size of h1 is "<<sizeof(h1)<<endl;
    cout<<"Health is :"<<h1.health<<endl;
    return 0;
}
