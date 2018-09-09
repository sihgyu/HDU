#include "iostream"
#include "algorithm"
#include "cmath"
using namespace std;
struct A{
    int x,y;
}a[105];
bool cmp(A aa,A bb){
    return aa.y > bb.y; // 降序排列的比较方法
}
int main(){
    int n;
    int k;
    while(cin >> n && n){
        for(int i = 0; i < n;i++){
            cin >> k;
            a[i].x = k;
            a[i].y = abs(k);
        }
        sort(a,a+n,cmp);
        for(int j = 0;j < n;j++){
            if(!j){
                cout << a[j].x ;
            }
            else {
                cout << " " << a[j].x;
            }
        }
        cout << endl;
    }

    return 0;
}