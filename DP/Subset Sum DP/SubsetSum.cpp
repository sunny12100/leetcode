// arr[]: 2 , 3 , 7 , 8 ,10
// sum=11
//print yes or no for subset sum of array

#include <iostream>
using namespace std;

int main(){
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    int w=7;
    int t[sizeof(wt)/sizeof(wt[0])][w+1];

    for(int i=0; i<sizeof(wt)/sizeof(wt[0]) +1; i++){
        for(int j=0; j<w+1; j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }
        
    return 0;
}