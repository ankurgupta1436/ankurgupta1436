//copy constructor
#include <iostream>
//#include<stdio.h>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;

    Hero(){
        cout<<"Simpe constructure called"<<endl;
    }
    //parameterised consructor
    Hero(int health){
        this->health=health;

    }
    Hero(int health,char lensl){
        this->level=level;
        this->health=health;
    }
    void print(){
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
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
    Hero suresh(70,'c');
    suresh.print();
    //copy constructor
    Hero R(suresh);
    R.print();

    //copy constructor

    /*Hero(Hero& temp){
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }*/

}
