#include <stdio.h>


double ctof(int x);
double ftoc(int x);

int main(void) {

    int usertemp;
    char unit;
    double convertedtemp;

    scanf("%d %c", &usertemp, &unit);
    if (unit=='C'){
        
        convertedtemp = ctof(usertemp);    
        printf("%2.f F", convertedtemp);

    } else if (unit=='F'){

       convertedtemp = ftoc(usertemp);    
        printf("%2.f C", convertedtemp); 
        
    }

    return 0;

}



double ctof(int x){
    return((9.0/5)*x+32);
}

double ftoc(int x){
    return(5.0/9*(x-32));
}