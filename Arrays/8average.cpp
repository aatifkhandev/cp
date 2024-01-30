
#include <iostream>
using namespace std;

int avg(int arr[],float n){
    int sum;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
        float ans=(sum/n);
        cout<<ans<<endl;
    }



int main() {
    /
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    float n=10;
   avg(arr,n);

    return 0;
}