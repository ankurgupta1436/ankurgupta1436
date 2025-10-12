#include<iostream>
using namespace std;
class Name{
    public:
    int health;
    char level;

};

int main(){
    Name Ankur_Gupta;
    Ankur_Gupta.health=80;
    Ankur_Gupta.level='A';
    cout<<"Ankur's Health is:"<<Ankur_Gupta.health<<endl<<"Ankur's Level is:"<<Ankur_Gupta.level<<endl;
    cout<<"Size of Ankur is:"<<sizeof(Ankur_Gupta)<<endl;
    return 0;
}