//check palindrome or not

#include<iostream>
using namespace std;
//conerting upper case o lower case
char tolowercase(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
bool palindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(tolowercase(a[s])!=tolowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;

}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int main(){
    char name[100];
    cout<<"enter a character";
    cin>>name;
    int len=getlength(name);
    cout<<"length :"<<len;
    cout<<endl;
    reverse(name,len);
    cout<<name<<endl;
    cout<<endl;
   cout<< palindrome(name,len);
    cout<<"character is"<<tolowercase('b')<<endl;
      cout<<"character is"<<tolowercase('C')<<endl;
      
      return 0;

}