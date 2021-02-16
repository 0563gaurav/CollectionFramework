#include<stdio.h>
int delete_element(int );
void print();
int elements,index;
int arr[]={0};
int main(){
	int i;
	printf("Enter the Size of Array: ");
	scanf("%d",&elements);
	printf("Enter element One by One: ");
	for(i=0;i<elements;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the apropriate Index: ");
	scanf("%d",&index);
	delete_element(index);
	printf("Element is deleted that  was at index %d",index);

	int test;
	printf("==============================================================\nPress 1 if you want to print updated array otherwise press 0 :");
	scanf("%d",&test);
	if(test==1){
		print();
	}

	return 0;


}


int delete_element(int index){
	int j;
	int deleted_element=arr[index];
	for(j=index;j<elements;j++){
		arr[j]=arr[j+1];
	}
	return deleted_element;
}

void print(){
	int j;
	for(j=0;j<elements-1;j++){
		printf("%d\t",arr[j]);
	}

}
