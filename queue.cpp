#include<iostream>
using namespace std;
int main(){
    int queue[4],front=0;
    int rear=0;
    cout<<"Enter data ";
    for (int i=0;i<4;i++){
        cin>>queue[rear++];
    }
    for (int i=0;i<4;i++){
        cout<<queue[front++]<<" ";
    }
    return 0;
}
int push(){
    

}