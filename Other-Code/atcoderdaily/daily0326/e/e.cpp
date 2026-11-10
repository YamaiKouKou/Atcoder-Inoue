#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using ll = long long;

ll make_palindrome(ll N, bool is_even){
    ll res = N;
    ll tmp = is_even ? N : N/10;
    while(tmp > 0){
        res = res*10 + (tmp%10);
        tmp /= 10;
    }
    return res;
}

bool check_palindrome(ll p, int A){
    ll tmp = p;
    ll rev = 0;

    while(tmp > 0){
        rev = rev*A + (tmp%A);
        tmp /= A;
    }

    return p == rev;
}
/*
string make_even_palindrome(int N){
    string even_str_N = to_string(N);
    
    string even_rev_N = even_str_N;
    reverse(even_rev_N.begin(), even_rev_N.end());
    
    return even_str_N + even_rev_N;
}

string make_odd_palindrome(int N){
    string even_str_N = to_string(N);

    string odd_str_N = even_str_N;
    odd_str_N.pop_back();

    string odd_rev_N = odd_str_N;
    reverse(odd_rev_N.begin(), odd_rev_N.end());
    
    return even_str_N + odd_rev_N;
}*/


int main(){
    int A;
    ll N;
    ll ans = 0;
    
    cin >> A;
    cin >> N;

    for(int i = 1; i < 1'000'000; ++i){
        ll p1 = make_palindrome(i,true);
        if(p1 <= N && check_palindrome(p1,A)){
            ans += p1;
        }

        ll p2 = make_palindrome(i,false);
        if(p2 <= N && check_palindrome(p2,A)){
            ans += p2;
        }
    }
    cout << ans << endl;
}