#include"insertionsort.h"//头文件 
void insertionSort(int *a,int *b){
	//a,b分别是待排序列的首位指针
	int i,j,key,*p,*q,*t,n=b-a;
	for(j=1,p=q=a,p++,t=p;j<n;j++,q=p,p++,t=p){
	//p用来标记子序列后边界之后的第一个元素
		key=*p;
		i=j-1;
		while((i>=0)&&(*q>key)){
		//q用来指向排好序的子序列中每次进行比较的元素
		//t用来指向想要新插入的的元素	
			*t=*q;
			t--;
			i--;
			if(q!=a)q--;
		}
		*t=key;
	}

}
