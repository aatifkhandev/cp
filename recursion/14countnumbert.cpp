//recursion from scratch
//code 14 - count of a  number

#include <iostream>
using namespace std;

int cnt=0;
int countZeros(int n){
if(n==0 && cnt!=0)
return 0;
cnt++;

if(n==0 && cnt==0)
return 1;

if(n%10==0)
return 1+countZeros(n/10);
else{
    return countZeros(n/10);
}
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
