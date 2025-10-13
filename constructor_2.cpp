#include<iostream>
using namespace std;
class Hero{
    public:
    //properties
    int health;
    //parametarized constructor
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health=health;
    }
    
};
int main(){
    //object creation atatically
    Hero ramesh(10);
    cout<<"Address of ramesh is :"<<&ramesh<<endl;
    
    return 0;
}