#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }

};
int main(){
    Hero a;
    //static allocation
    cout<<"level is : "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    //dynamic allocation
    Hero*b = new Hero;
    cout<<"level is "<< b->level<<endl;
    cout<<"health is "<< b->getHealth()<<endl;
    return 0;
}