#include<stdio.h>

int a[10][10];
int f[10][10];
int m,n;
int tx,ty,px,py;
int cnt=0;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

void DFS(int x,int y)
{
	if(x==px&&y==py){
		cnt++;
		return;
	}
	int i;
	for(i=0;i<4;i++){
		int xx=x+dx[i];//0
		int yy=y+dy[i];//1
		if(xx>=0&&xx<n&&yy>=0&&yy<m&&f[xx][yy]==0&&a[xx][yy]==0){
			f[xx][yy]=1;
			DFS(xx,yy);
			f[xx][yy]=0;
		}
	}
}

int main()
{
	scanf("%d %d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&tx,&ty);
	scanf("%d %d",&px,&py);
	tx--;ty--;
	px--;py--; 
	f[tx][ty]=1;
	DFS(tx,ty);
	printf("%d\n",cnt);
	return 0;
} 
