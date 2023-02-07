#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *w,int *x,int *y,int *z){
	int katujik[4]={*w,*x,*y,*z};
	int kasakjai[4] = {0,0,0,0};
	for(int i=0;i<4;i++){
		kasakjai[i] = rand()%4;
		for(int j = 0;j<i;j++){
			if(kasakjai[i] == kasakjai[j]){
				i--;
				break;
			}
		}
	}
	*w = katujik[kasakjai[0]] ;
	*x = katujik[kasakjai[1]] ;
	*y = katujik[kasakjai[2]] ;
	*z = katujik[kasakjai[3]] ;
}