//write a c++ program attendance of 6 student in a vector in collection use range based for loop with auto to display all attendance percentage and cout how many student have attendance more than 75 percentage
 #include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers={76,79,78,45,83,95};
     int c=0;
    cout<<"Attendance having more than 75%  are:"<<endl;
    for(auto a : numbers){
        if(a>75)
        c++;
        
    }
    cout<<c;
    return 0;
}