//recursion from scratch
//code 33 - print keypad
#include <iostream>
#include <string>
using namespace std;

string keypadString(int n){
    string arr[]={"abc","def" ,"ghi","jkl","mno","pqrs","tuv","wxyz"};
    return arr[n-2];
}
void keypad(int n,string output){
    if(n==0){
        cout<<output<<endl;
        return;
}
    int number = n%10;
    int smallInput = n/10;
    string option = keypadString (number);
    for(int i=0;i<option.size();i++){
        keypad(smallInput,option[i]+output);
    }
}

void  printKeypad(int num){
string output = "";
    keypad(num,output);
}


int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
