#include <stdio.h>

int main()
{
    float v_ms, kn;
    printf("Podaj m/s: ");
    scanf("%f", &v_ms);
    
    kn = v_ms * 1.94384;
    int B;
    //printf("%f", kn);
    
    if(kn<1){
        B=0;
        printf("Siła wiatru: %d w skali Beauforta (Calm)", B);
    }else if(kn>=1 && kn<=3){
        B=1;
        printf("Siła wiatru: %d w skali Beauforta (Light Air)");
    }else if(kn>=4 && kn<=6){
        B=2;
        printf("Siła wiatru: %d w skali Beauforta (Light Breeze)");
    }else if(kn>=7 && kn<=10){
        B=3;
        printf("Siła wiatru: %d w skali Beauforta (Gentle Breeze)");
    }else if(kn>=11 && kn<=16){
        B=4;
        printf("Siła wiatru: %d w skali Beauforta (Moderate Breeze)");
    }else if(kn>=17 && kn<=21){
        B=5;
        printf("Siła wiatru: %d w skali Beauforta (Fresh Breeze)");
    }else if(kn>=22 && kn<=27){
        B=6;
        printf("Siła wiatru: %d w skali Beauforta (Strong Breeze)");
    }else if(kn>=28 && kn<=33){
        B=7;
        printf("Siła wiatru: %d w skali Beauforta (Near Gale)");
    }else if(kn>=34 && kn<=40){
        B=8;
        printf("Siła wiatru: %d w skali Beauforta (Gale)");
    }else if(kn>=41 && kn<=47){
        B=9;
        printf("Siła wiatru: %d w skali Beauforta (Strong Gale)");
    }else if(kn>=48 && kn<=55){
        B=10;
        printf("Siła wiatru: %d w skali Beauforta (Storm)");
    }else if(kn>=56 && kn<=63){
        B=11;
        printf("Siła wiatru: %d w skali Beauforta (Violent Storm)");
    }else{
        B=12;
        printf("Siła wiatru: %d w skali Beauforta (Hurricane)");
    }
    return 0;
}
