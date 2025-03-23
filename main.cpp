#include <iostream>
#include <string>
#include<algorithm>
using namespace std;




bool isUnique(long long n1,long long n2){
    string str = to_string(n1) + to_string(n2);
    if(str.length() != 10) return false;
    sort(str.begin(),str.end());
    for(int i=0;i<10;i++){
        if(str[i] != '0' + i) return false;
    }
    return true;
}

int main() {
//    ::printf("fuck u");
    for(int i=10;i<30;i++){
        long long cube = i * i * i;
        long long fourth = i * i * i * i;
        if(cube>=1000 && cube<10000 && fourth>=100000 && fourth<1000000){
            if(isUnique(cube,fourth)){
                cout << i << " " << cube << " " << fourth << endl;
            }
        }
    }
    return 0;
}