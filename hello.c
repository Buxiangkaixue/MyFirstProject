#include<stdio.h>
#include<stdlib.h>

main(){
    printf("hello world\n");
    int arr[] = {0,3,2,4,7,2,4,63,6,20,5,43,10};
    int i,j;
    int length = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<length-1;i++){
        for(j=0;j<length-1-i;j++){
            int temp;
            if(arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //冒泡排序






    system("pause");
  
    return 0;
    

}