#include <stdio.h>
int main(){

    // ---------question-1-----------
    // for(int i=0; i<=5; i++){
    //     for(int j=0; j<=9; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }



    // ----------question-2------------
    int array[3][3]={{8,20,30},{13,35,9},{2,7,6}};
    int sum=0;
    int avg;
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            sum+=array[i][j];
        }
    }
    avg=sum/9;
    printf("%d",avg);
    
          
    // ------------question-3------------
    //    int a[3][3]={ {8,20,30},
    //                  {13,35,9},
    //                  {2,7,6}};
    //  int sum1=0;
    //  int sum2=0;
    //  for(int i=0 ;i<=3 ;i++){
    //     for( int j=0; j<=3; j++){
    //         if(i==j){
    //             sum1=sum1+a[i][j];
    //         }

    //     }
    //  }
    //  printf("%d",sum1);

    return 0;
}