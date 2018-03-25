#include <iostream>

using namespace std;

void zip();
void unzip();

int main()
{
    char mod;
    scanf("%c\n", &mod);
    if (mod == 'C'){
        zip();
    }
    if (mod == 'D'){
        unzip();
    }
    return 0;
}

void zip()
{
    char buf[1001] = {0};
    gets(buf);
    char pre = buf[0];
    int count = 0;
    int i = 0;
    for(i = 0; buf[i] != '\0'; i++){
        if(buf[i] == pre){
            count += 1;
        }else{
            if(count == 1){
                cout << buf[i-1];
            }else if(count > 1){
                cout << count << buf[i-1];
            }
            pre = buf[i];
            count = 1;
        }
    }
    if(count != 1) {
        cout << count;
    }
    cout << buf[i-1] << endl;
}
void unzip()
{
    char buf[1001] = {0};
    gets(buf);
    int num = 0;
    for(int i =0; buf[i] != '\0'; i++){
        if(buf[i] - '0' >= 0 && buf[i] - '0' <= 9){
            num = num*10 + (buf[i]-'0');
        }else{
            if(num >= 2) {
                for (int j = 0; j < num; j++) {
                    cout << buf[i];
                }
                num = 0;
            }else{
                cout << buf[i];
            }
        }
    }
    cout << endl;
}
