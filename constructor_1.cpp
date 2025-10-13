#include <iostream>
using  namespace std;
class Hero{
    public:
    Hero(){
        cout<<"Constructor called"<<endl;
    }
};
int main(){
    //static allocation
    cout<<"Hi"<<endl;
    Hero ramesh;
    cout<<"Hello"<<endl;
   //dynamic allocation
   // Hero ramesh;
    Hero*h = new Hero;
    cout<<"Hey"<<endl;

    return 0;

}