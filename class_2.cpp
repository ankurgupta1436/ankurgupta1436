#include <iostream>
using namespace std;
class Hero{
    public:
    //properties
    int health;
    private:
    char level;
    void print(){  //function or implementatioin
        cout<<"level"<<endl;
    }
};
int main(){
    Hero ramesh;
    cout<<"health is :"<< ramesh.health<<endl;
    return 0;

}