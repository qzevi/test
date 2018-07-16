#include <stdio.h>
main(){
	int i,j,s1=0,s2=0,a[3][3]={4,9,6,5,3,1,2,8,7};
	printf("a:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++) printf("%3d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		s1=s1+a[i][i];
		s2+=a[i][2-i];
	}
	printf("s1=%d,s2=%d\n",s1,s2);
}
