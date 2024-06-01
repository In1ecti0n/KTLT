#include <bits/stdc++.h>
using namespace std;

vector<string> s1 = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
vector<string> s2 = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
vector<string> s3 = {"Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
vector<string> s4 = {"Thousand", "Million", "Billion", "Trillion", "Quadrillion"};

string numberToWords(int n) {
    if (n == 0){
        return "zero";
    }
    if (n < 10){
        return s1[n - 1];
    }
    if (n < 20){
        return s2[n - 11];
    }
    if (n < 100){
        if  ( n % 10 == 0){
            return s3[(n / 10) - 1];
        }else{
            return s3[(n / 10) - 1 ] + " " + s1[(n % 10) - 1];  
        }
    }
    if (n < 1000){
        if (n % 100 == 0){
            return s1[(n / 100) - 1] + " Hundred";
        }else{
            return s1[(n / 100) - 1] + " Hundred and " + numberToWords((n % 100));
        }
    }
    if (n < 1000000){
        if (n % 1000 == 0){
            return numberToWords((n / 1000)) + s4[0]; 
        }else{
            return numberToWords((n/1000)) + " " + s4[0] + " " + numberToWords(n%1000);
        }
    }
    if (n < 1000000000){
        if (n % 1000000 == 0){
            return numberToWords(n / 1000000) + s4[1];
        }else{
            return numberToWords(n/1000000) + " " + s4[1] + " " + numberToWords(n%1000000);
        }
    }
    if (n >= 1000000000){
        if ( n % 1000000000 == 0){
            return numberToWords(n/1000000000) + s4[2];
        }else{
            return numberToWords(n/1000000000) + " " + s4[2] + " " + numberToWords(n%1000000000);
        }
    }
    return 0;
}

int main(){
    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        cout<<numberToWords(n)<<endl;
    }
}