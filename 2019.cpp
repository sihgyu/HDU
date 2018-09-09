
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<queue>
#include<sstream>
#include<iterator>
#include<math.h>

#include<string.h>
#include<stack>
#include<functional>
#define TIME std::ios::sync_with_stdio(false)
#define LL long long
#define MOD 1000000007
#define MAX 101000
#define INF 0x3f3f3f3f

using namespace std;

int N,M;
int arr[110];

int main() {
    TIME;
    while(scanf("%d%d",&N,&M) != EOF){
        if(N == 0 && M == 0) break;
        int flag = -1;
        for(int i = 0;i < N;i++){
            scanf("%d",&arr[i]);
            if(M < arr[i] && flag == -1) flag = i;
        }
        int i = 0;
        if(flag == -1){
            for(;i < N;i++){
                printf("%d ",arr[i]);
            }
            printf("%d",M);
        }else{
            for(;i < flag;i++){
                printf("%d ",arr[i]);
            }
            printf("%d ",M);
            for(;i < N-1;i++){
                printf("%d ",arr[i]);
            }
            printf("%d",arr[N-1]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}