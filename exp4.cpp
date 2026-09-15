#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers={10,20,30,40,50};

    cout<<"element of collection:"<<endl;
    
    for(auto a : numbers){
        cout<< a<<" ";
    }
    return 0;
}