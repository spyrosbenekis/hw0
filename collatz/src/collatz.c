#include <stdio.h>
#include <stdlib.h>

int results[100000001];

int main(int argc, char **argv)
{
    if (argc != 3) {
        printf("0\n");
  	    return 1;
    }
    //Dilwsi metavlitwn
    int st = atoi(argv[1]);
    int fn = atoi(argv[2]);
    int max = 0, count;
    register long long int num;

    //Elegxos egkirotitas timwn
    if (st <= 0 || fn > 100000000){
        printf("0\n");
  	    return 1;
    }

    for (int i = 1; i <= fn; i++) {
        num = i;
        count = 1;
        while (num > 1) {
	    //Elegxos an exei hdh ypologistei
            if (num<i) {
                count += results[num] - 1;
                break;
            }
	    //Collatz
            if(num%2==0)
	        num>>=1;//Olisthisi pros ta aristera
	    else{
	        num=(3*num+1)>>1;//Olisthisi pros ta aristera
	        count++;
	    }
	    count++;
        }
	
        results[i] = count;//kataxwrisi apotelesmatos

        if (i>=st && count > max)
            max = count;
    }
	
    //Ektypwsi apotelesmatos
    printf("%d\n",max);

    return 0;
}
