#include<iostream>
using namespace std;
int main(){
    int nums[] = {1,5,11,5};
    int n=sizeof(nums)/sizeof(nums[0]);
    int sum=0;
    for(int i=0; i<n; i++){
        sum += nums[i];
    }
    if(sum % 2 != 0){
        return false;
    }
    sum = sum/2;
    bool t[n+1][sum+1];
    for(int i=0; i<n+1;i++){
        for(int j=0; j<sum+1; j++){
            if(i==0){
                t[i][j] = false;
            }
            else if(j==0){
                 t[i][j] = true;
            }
            else{
                if(nums[i-1] <= j){
                    t[i][j] = t[i-1][j- nums[i-1]] || t[i-1][j]; 
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
    }
    cout<<(t[n][sum] ? "true" : "false")<<endl;

return 0;
}