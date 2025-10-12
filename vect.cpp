#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> myVec;
    cout<<"Is myVect Empty? "<<myVec.empty()<<endl;
    myVec = {1,2,3,4,5};
    printf("%d %d %d", myVec[0],myVec[1],myVec[2]);
    cout<<endl;
    cout<<"Is myVec Empyty now "<<myVec.empty()<<endl;
  
    return 0;
}
