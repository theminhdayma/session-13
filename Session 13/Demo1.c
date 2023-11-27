#include<stdio.h>
#include<string.h>
int main(){
//	char str1[] = {'H', 'e', 'l', 'l', 'o'};
//	char str2[] = "Hello World. Hello world...";
//	int size=sizeof(str1) / sizeof(char);
//	for(int i=0;i<size;i++){
//		printf("\t%c",str1[i]);
//	}
//	printf("%s\n",str1);
//	str1[0]='Y';
//	printf("%s",str1);
//	char randomString[]="Special NULL";
//	int length = sizeof(randomString)/sizeof(char);
//	for(int i=0;i<length;i++){
//		printf("ky tu %d: %c\n",i,randomString[i]);
//	}
//	char sentence[11] = "Hello world";
//	printf("%s",sentence);
//	printf("%s\n",&sentence[5]);
//	printf("%.4s\n",sentence);

//	char fullName[25];
//	printf("Nhap ten cua ban: \n");
//	scanf("%s\n",fullName);
//	printf("Ten toi la: %s",fullName);
//
//	char str[30];
//	printf("Nhap: \n");
//	gets(str);
//	puts(str);

	char str1[]="Hello";
	char str2[]="Tuoi gi luon";
	char str3[]=", ";
	strcat(strcat(str1,str3),str2);
	puts(str1);	
}

