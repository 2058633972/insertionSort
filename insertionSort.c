#include"insertionsort.h"//头文件
void insertionSort(int *a,int n){
	/*先将数组a的前j个元素排好序，得出一个已经排好序的子序列a[0]~a[j-1],
	 *再把a[j]插入到该子序列中合适的位置（该位置通过比较来确定），
	 *这子序列就扩充了一个元素且仍然是排好序的，
	 *以此类推不断扩充就能把a的全部元素排好序
	 */
	int i,j,key;
	for(j=1;j<n;j++){
		//子序列初始时只有一个元素a[0]
		//for循环每循环一次子序列就扩充一个元素
		key=a[j];
		i=j-1;
		while((i>=0)&&(a[i]>key)){
			//找出插入位置
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
}
