#include <iostream>
#include <cstdio>

using namespace std;

int tokens, times;

void func(int n1, int b, int t, int n2)
{
    if(t <= tokens){
        if(b == 1){ // 2 more than 1
            if(n2 > n1){
                tokens += t;
                printf("Win %d!  Total = %d.\n", t, tokens);
            }
            else if(n2 < n1){
                tokens -= t;
                printf("Lose %d.  Total = %d.\n", t, tokens);
            }
        }
        else if(b == 0){ // 2 less than 1
            if(n2 > n1){
                tokens -= t;
                printf("Lose %d.  Total = %d.\n", t, tokens);
            }
            else if(n2 < n1){
                tokens += t;
                printf("Win %d!  Total = %d.\n", t, tokens);
            }
        }
    }
    else{
        cout << "Not enough tokens.  Total = " << tokens<<"." <<endl;
        return;
    }
}

int main()
{
    cin >> tokens >> times;
    for(int i = 0; i < times; i++){
        if(tokens == 0){
            cout << "Game Over." <<endl;
            break;
        }
        int n1, b, t, n2;
        cin >> n1 >> b >> t >> n2;
        func(n1, b, t, n2);
    }
    return 0;
}
