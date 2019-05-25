#include<stdio.h>
#include<string.h>

int main()
{
	char s1[400],s2[400];
	FILE* fp1;
	FILE* fp2;
	FILE* fp3;
	fp1=fopen("1.txt","r");
	fp2=fopen("2.txt","r");
	fp3=fopen("3.txt","w");
	int i=0,j=0;
	int n=0;
	int l1=0,l2=0; 
	while(fgets(s1,400,fp1)){
		if(s1[0]=='I'){
			fgets(s1,400,fp1);
			fgets(s1,400,fp1);
		}
		fgets(s2,400,fp2);
		if(s2[0]=='I'){
			fgets(s2,400,fp2);
			fgets(s2,400,fp2);
		}
		l1++;
		l2++;
		for(i=0;s1[i]!='\0';i++){
			if(s1[i]=='@'){
				break;
			}
		}
		for(j=0;s2[j]!='\0';j++){
			if(s2[j]=='@'){
				break;
			}
		}
//		if(s1[i+5]=='3'){
//			printf("1:%s\n",s1);
//		}
//		if(s1[i+5]=='4'&&s1[i+6]=='1'&&s1[i+7]=='8'&&s1[i+8]=='0'){
//			n++;
//			printf("1:%d %s\n",n,s1);
//		}
//		if(s1[i+5]=='4'&&s1[i+6]=='5'&&s1[i+7]=='6'&&s1[i+8]=='c'){
//			n++;
//			printf("1:%d %s\n",n,s1);
//		}
//		if(s2[i+5]=='4'&&s2[i+6]=='1'&&s2[i+7]=='8'&&s2[i+8]=='0'){
//			n++;
//			printf("2:%d %s\n",n,s2);
//		}
//		if(s2[i+5]=='4'&&s2[i+6]=='5'&&s2[i+7]=='6'&&s2[i+8]=='c'){
//			n++;
//			printf("2:%d %s\n",n,s2);
//		}
//		if(s2[j+5]=='3'){
//			printf("2:%s\n",s2);
//		}
		if(strcmp(s1,s2)){
			printf("NO!!\nget   :%s\nexpect:%s\n%s\n",s1,s2,s1);
			fputs("NO!!!!!!!!!!!!",fp3);
			fputs(s1+i,fp3);
			fputs(s2+j,fp3);
		}
		else{
			fputs(s1+i,fp3);
			fputs(s2+j,fp3);
		}	
	}
	printf("l1=%d\nl2=%d\n",l1,l2);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
} 
