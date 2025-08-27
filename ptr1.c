/*pointer ile main de tanımlı bir değişkenin değerni değştirebilirm */
# include <stdio.h>


void make_it_20(int *x){
    *x=20; /* adresine eriştim adrsindeki yere 20 yazdım ve artık x=20*/
}

int main (){
    int x=3;
    make_it_20(&x);
    /*adresini yolladım */
    printf("x is %d\n",x);
    /*ne de olsa adres yolluyorum */
    /*darklı şekilde de yapabilirm*/
    x=4;
    int *ptr =&x ;
    make_it_20(ptr);
    printf("x is %d\n",x);
}