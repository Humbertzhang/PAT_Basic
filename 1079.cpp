#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>

using namespace std;

long long int reverse_num(long long int num);
bool check_palindromic(long long int num);

int main() {
    long long int n;
    cin >> n;
    for(int i = 0; i < 10; i++){
        bool flag = check_palindromic(n);
        if(flag){
            cout << n << " is a palindromic number." <<endl;
            return 0;
        }else{
            int n2 = reverse_num(n);
            cout << n << " + " << n2 << " = " << n + n2 <<endl;
            n = n + n2;
        }
    }
    cout << "Not found in 10 iterations." <<endl;
    return 0;
}

long long int reverse_num(long long int num)
{
    string s = to_string(num);
    reverse(s.begin(), s.end());
    long long int rnum = atoll(s.c_str());
    return rnum;
}

bool check_palindromic(long long int num)
{
    string s = to_string(num);
    string s2;
    int len = s.length();
    reverse(s.begin(), s.end());
    for(int i = 0; i < len/2 + 1; i++){
        if(s[i] != s[len-(i+1)]){
            return false;
        }
    }
    return true;
}

