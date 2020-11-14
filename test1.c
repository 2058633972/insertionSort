#include<stdio.h>
#include<stdlib.h>
#include"insertionsort.h"//自定义的头文件
#include"insertionSort.c"//实现头文件中声明的函数
int main(int argc,char** argv){
	int a[]={5,1,9,4,6,2,10,3,8,7},i;
	insertionSort(a,10);//调用函数对数组a进行插入排序
	for(i=0;i<10;i++)
		printf("%d ",a[i]);//输出排序结果
	printf("\n");
	return (EXIT_SUCCESS);
}

