#include "iostream"
#include "cstdio"
using namespace std;
int a[100] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100};
int main(){
    int m,n;
    int sum = 0;
    int flag = 0;
    int count = 0;
    while(cin >> n >> m){
        for(int i = 0;i < n;i++){
            sum += a[i];
            count++;
            if(count == m){
                if(flag == 1){
                    cout << " " ;
                }
                cout << sum/m;
                count =0;
                flag = 1;
                sum = 0;
            }

        } 
        if(sum != 0){
                cout << " " << sum/count;
        }
        cout << endl;
        sum = count = flag = 0;
    }
}