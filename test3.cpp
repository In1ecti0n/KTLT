#include <bits/stdc++.h>
using namespace std;
/*
int findSmallestMissing(vector<int> nums, int lowIndex, int highIndex) {
    if (lowIndex > highIndex){
        return highIndex + 1;
    }
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == lowIndex){
            return findSmallestMissing(nums, lowIndex + 1, highIndex);
        }
    }
    return lowIndex;
}
*/
/*
int findSmallestMissing(vector<int>nums){
    int small = 0; 
    for (int i = 0; i <= nums.size(); i++){
        if (nums[i]== small){
            small++;
        }
    }
    return small;
}
*/

int findSmallestMissing(vector<int> nums, int lowIndex, int highIndex){
    if (lowIndex > highIndex){
        return lowIndex;
    }
    int mid = lowIndex + (highIndex - lowIndex) / 2;
    if (nums[mid] == mid){
        return findSmallestMissing(nums, mid + 1, highIndex);
    }else{
        return findSmallestMissing(nums, lowIndex, mid - 1);
    }
}


int main(){
    int t; 
    cin>>t;
    cin.ignore();
    while (t--){
        vector<int>x;
        string s;
        getline(cin, s);
        if (s == ""){
            cout<<'0'<<endl;
        }else{
            string temp;
            istringstream ss(s);
            while(getline(ss, temp, ',')){
                x.push_back(stoi(temp));
            }
            cout<<findSmallestMissing(x, 0, x.size() - 1 )<<endl;
            x.clear();
        }
    }
}