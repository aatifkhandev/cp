//Queue Implementation .
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    queue<int>q;

    q.push(11);

    cout<<"front of q is "<<q.front()<<endl;

    q.push(15);

    cout<<"front of q is "<<q.front()<<endl;

    q.push(13);

    cout<<"front of q is "<<q.front()<<endl;


    cout<<"size of queue"<<q.size()<<endl;

    q.pop();

     cout<<"size of queue"<<q.size()<<endl;

     if(q.empty()){
        cout<<"queue is empty"<<endl;
     }else{
        cout<<"queue is not empty"<<endl;
     }
}