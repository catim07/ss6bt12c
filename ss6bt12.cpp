#include<stdio.h>
int main(){
	int a,stnhat=0,sthai=1,indra;
	printf("moi ban nhap so ");
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		if(i==0){
			stnhat=indra;
		}else if(i==1){
			indra=sthai;
		}else{
			indra=stnhat+sthai;
			stnhat=sthai;
			sthai=indra;
		}
		printf("%d ",indra);
	}
	return 0;
}
