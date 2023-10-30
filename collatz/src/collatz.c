#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 3) {
        printf("Program needs to be called as `./prog final_exam homework lab`\n");
        return 1;
    }
    //Dilwsi metavlitwn
    int st = atoi(argv[1]);
    int fn = atoi(argv[2]);
    int max = 0, count;
    long long int num;
    //Elegxos egkirotitas
    if (st <= 0 || fn > 100000000){
        printf("0\n");
	return 0;
    }
    //Dynamiki desmeusi mnimis gia apothikeusi apotelesmatwn
    int *results = (int *)malloc((fn+1) * sizeof(int));

    for (int i = st; i <= fn; i++) {
        num = i;
        count = 0;
        while (num > 1) {
	    //Elegxos an exei hdh ypologistei
            if (num <= fn && results[num] != 0) {
                count += results[num];
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

        if (count > max)
            max = count;
    }
    //Ektypwsi apotelesmatos
    printf("%d\n", max+1);

    return 0;
}
