#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    int n=sizeof(wt)/sizeof(wt[0]);
    int w=7;
    int t[n+1][w+1];

    for(int i=0; i<n+1 ; i++){
        for(int j=0; j<w+1; j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
            else {
                if(wt[i-1] <= j){
                    t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]] , t[i-1][j]);
                }
                else {
                    t[i][j] = t[i-1][j];
                }
            }
        }
    }
    cout<< t[n][w]<<endl;
    return 0;
}

