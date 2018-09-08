#include <stdio.h>

int nu[101];

int main(){
	int n,pos,mn;
	while( ~scanf( "%d",&n ) && n ){
		pos = 0;
		for( int i=0 ; i<n ; i++ ){
			scanf( "%d",&nu[i] );
			//如果有多个最小值，与最后一个交换 
			if( nu[i]<=nu[pos] ){ 
				mn = nu[i];
				pos = i;
			} 
		}
		nu[pos] = nu[0];
		nu[0] = mn;
		for( int i=0 ; i<n-1 ; i++ )
			printf( "%d ",nu[i] );
		printf( "%d\n",nu[n-1] );
	}
}