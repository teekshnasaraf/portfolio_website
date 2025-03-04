#include <iostream>
using namespace std;

int main(){
    int arr[]={0,1,-1,2,3,-4};
    int n = arr.size();
    int maxsum=0;
    //brute force-> sabse stupid / obvious o(n^3)
    //0 1 -1 2 3 -4
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k =i; k<j; k++){
                sum = sum+arr[k];
            }
            maxsum= max(sum,maxsum);

        }
    }
    //better-> o(n^2)
    //0 1 -1 2 3 -4
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum = sum+arr[j];
                maxsum= max(sum,maxsum);
            }
        }
    //optimal ->the best king no stupid (kadane algo)
    //-2 -3 0 1 -2 2 3 -4
    /*  maxi= INT_MIN /-2/0/1/2/5
        sum= 0 +-2 = /-2->0/0+-3=-3//0+0/0+1/1-1=0/0+2=2/2+3=5/5-4=-1
        sum=0;
        maxi=INT_MIN
        for(int i =0; i<n; i++){
            if(sum<0){sum=0;
            start =i;}
            sum += arr[i];
            maxi= max(sum, maxi);
            return maxi;
        }
    */


    cout<<"hey ekta here";
    return 0;
}
///////// max sum of subarray
