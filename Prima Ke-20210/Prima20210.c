#include <stdio.h>
#include <stdbool.h>

// Function untuk mengecek prima atau bukan
int primakah(int num){
    int i=2;
    bool flag=1;
    
    while(i < num && flag){
		if(num%i == 0)
            flag = 0;
        i++;
    }
    return flag;
}

int main(){
    int count=0, num=2, n=20210, prima;
    // Mencari prima n ke berapa?
    while (count<n){
		if(primakah(num)){
			count += 1;
			prima = num;
		}
	    num += 1;    
	}
	// Print nilai prima ke n
	printf("Bilangan prima ke-%d adalah %d", n, prima);
		
    return 0;
}
