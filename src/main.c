#include <stdio.h>

int graphic(int x,int y);
int main(){
	int a;
	a=graphic(32,18);
	printf("%d",a);
}
int graphic(int x,int y){
//x*y　画面サイズ
//p 画素数
	int p=x*y;
	return p;
}
