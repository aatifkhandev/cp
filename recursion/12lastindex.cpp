//recursion from scratch
//code 12 - last index of  a number

#include<iostream> 
using namespace std;
int lastIndex(int input[], int size, int x) {
if(size==0){
    return -1;
}
    int ans = lastIndex(input+1,size-1,x);
    ans = ans+1;
    if(ans<=0){
      if(input[0]==x){
          return 0;
      }
    
    else{
        return -1;
    }
      
    }
return ans;

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}

