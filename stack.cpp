#include<iostream>
using namespace std;
int main(){
    int stack[4];
    int a,top=0;
    for (int i=0;i<4;i++){
        cout<<"enter data-";
        cin>>stack[top++];
        
    }
    for(int i=0;i<4;i++){
        cout<<stack[--top]<<"\n";
    }
    return 0;
}