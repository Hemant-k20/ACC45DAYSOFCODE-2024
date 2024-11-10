#include <stdio.h>

unsigned long long max(unsigned long long a, unsigned long long b);

int main(void) {
	// your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
        unsigned long long Nsize, Mlim;
        scanf("%lld %lld", &Nsize, &Mlim);
        
        unsigned long long arr[Nsize];
        for(int i=0; i<Nsize; i++){
            scanf("%lld", &arr[i]);
        }
        
        unsigned long long dist = 0;
        for(int i=0; i<Nsize; i++){
            arr[i] = max(arr[i]-1, Mlim-arr[i]);
            dist+=arr[i];
        }
        // for(int i=0; i<Nsize; i++){
        //     printf("%d ", arr[i]);
        // } correct!
        
        printf("%lld\n", dist);
        // we know the minimum distance of an element from array B can be 1, and maximum can be 'Mlim', so for each element in array A, we take the bigger difference out of both i.e.: from 1 or Mlim of the array A elements and add it to a distance variable.
    }
}

unsigned long long max(unsigned long long a, unsigned long long b){
    if(a>b) return a;
    else return b;
}
