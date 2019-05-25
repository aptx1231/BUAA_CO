#include<stdio.h>

int a[12][12];
int b[12][12];

int main()
{
	int m1,n1,m2,n2;
	scanf("%d %d %d %d",&m1,&n1,&m2,&n2);
	int i,j,k,l,p,q;
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			scanf("%d",&b[i][j]);
		}
	}
//	for(i=0;i+m2<=m1;i++){
//		for(j=0;j+n2<=n1;j++){//i,j代表左上角 
//			for(k=i;k<i+m2;k++){
//				for(l=j;l<j+n2;l++){
//					printf("%d ",a[k][l]);
//				}
//				printf("\n");
//			}
//			printf("\n");
//		}
//	}
	for(i=0;i+m2<=m1;i++){
		for(j=0;j+n2<=n1;j++){//i,j代表左上角 
			int c = 0;
			for(k=i,p=0;p<m2;k++,p++){
				for(l=j,q=0;q<n2;l++,q++){
					c+=b[p][q]*a[k][l];
					printf("%d %d ",b[p][q],a[k][l]);
				}
			}
			printf("%d ",c);
		}
		printf("\n");
	}
	return 0;
} 
