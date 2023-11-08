#include<iostream>
using namespace std;
string s;
int count=0;
    int maxScore(string s) {
        // for(int i=1;i<s.length();i++){
        //     int temp=0;
            
        //     string left, right;
        //     left=s.substr(0,i);
        //     cout<<"Left: "<<left<<endl;
        //     cout<<"Right: "<<right<<endl;
        //     right=s.substr(i,s.length());
        //     for(int k=0;k<i;k++){
        //         if(left[k]=='0'){
        //             temp++;
        //         }
        //     }
        //     for(int k=0;k<s.length()-i;k++){
        //         if(right[k]=='1'){
        //             temp++;
        //         }
        //     }
        //     count=max(count,temp);
        // }

        count = s.length() - 1;
        return count;
    }
int main(){
    s="1111";
    maxScore(s);
    cout<<count;
    return 0;
}