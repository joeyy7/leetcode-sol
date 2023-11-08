#include<iostream>
using namespace std;

int ind=0;
int arr1[100];
void decompressRLElist(int nums[], int arrSize){
    int i=0,k=0,l=0,iter=0;
    
    while(i<arrSize){
        ind += nums[i];
        i+=2;
    }
       while(l<ind){
            for(int j=0;j<nums[k];j++){
                arr1[iter]=nums[k+1];
                iter++;
                l++;
            }
            k+=2;
       }
        
 }
        
int main(){
    int nums[] = {1,2,3,4,5,6,7,8};
    int arrSize = sizeof(nums)/sizeof(nums[0]);

    decompressRLElist(nums,arrSize);
    cout<<"The elements: ";
    for(int i =0;i<ind;i++){
        cout<<arr1[i]<<"\t";
    }
    return 0;
}