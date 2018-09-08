#include"iostream"
#include "cstdio"
#include "vector"
#include "algorithm"
using namespace std;

int main(){
    vector<double> score;
    int n,a;
    double sum = 0;
    while(cin >> n){
        for(int i = 0;i < n;i++){
            cin >> a;
            score.push_back(a);
        }
        sort(score.begin(),score.end());
        for(int j = 1;j < n-1;j++){
            sum += score[j];
        }
        printf("%0.2lf\n",(double)sum/(n-2));
        sum = 0;
        score.clear();
    }
}