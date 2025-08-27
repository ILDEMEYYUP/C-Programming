# include <stdio.h>
# include <stdlib.h>

/* dinamik bellek oluşturma pointer ile  */


int main (){
    int size;
    printf("enter a size :");
    scanf("%d",&size);
    int *a=(int*)malloc(sizeof(int)*size);

    for (int i=0;i<size;i++){
        printf("enter %d number of arr :",i);
        scanf("%d",&*(a+i)); /*malloc ile alınan bellek, dizi gibi davranabilir
                    &*(a+i) teknik olarak doğru ama a[i] veya &a[i] yazmak daha okunaklıdır*/
    }

    free(a);
}