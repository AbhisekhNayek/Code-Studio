int findUnique(int *arr, int size)
{
    for(int i=0;i<size;i++){

        int key=arr[i];
        int count=0;

        for(int j=0;j<size;j++){

            if(arr[j]==key){
                count++;
            }

        }
        if(count==1){

            return key;
        }
}
