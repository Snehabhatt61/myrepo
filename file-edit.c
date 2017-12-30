#include <stdio.h>

int bubbleSortDescending(int arr[], int n) {
    int i, j, temp;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
            if(arr[j] < arr[j+1]) {     
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

// FUNCTION TO COPY THE ARRAY
int copyArray(int src[], int destin[], int n){
    for (int i = 0; i < n; i++)
        destin[i] = src[i];
}

// MAIN
int main() {
    //===========================================================
    //  1.      GET VALUES
	
    int i, j;
    scanf("%d %d", &i, &j);

    int values[i], queries[j];
    for (int k=0; k < i; k++)
        scanf("%d", &values[k]);
    
    for (int k=0; k < j; k++)
        scanf("%d", &queries[k]);
    
    
    //  2.      SORT THE ARRAY IN DESCENDING ORDER
    bubbleSortDescending(values, i);
    //===========================================================

    
    for (int k=0; k < j; k++) {
        int arr[i], top=0, bottom=i, result=0;
        
        
		
        copyArray(values, arr, i);

       
        while (top < bottom) {
            
            if (arr[top] >= queries[k]) {
                result++;
                top++;      
            }
            
            else {
                arr[top]++;
                bottom--;   
            }
        }
        printf("%d ", result);     }
   
}