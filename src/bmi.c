#include <stdio.h>

int main()
{
    float kg, m;
    printf("Podaj mase w kg: ");
    scanf("%f", &kg);
    
    printf("Podaj wzrost w m: ");
    scanf("%f", &m);
    
    float bmi = kg / (m * m);
    
    if(bmi<18.5){
        printf("BMI %.1f niedowaga", bmi);
    }else if(bmi>=18.5 && bmi<=24.9){
        printf("BMI %.1f prawidlowa", bmi);
    }else if(bmi>=25.0 && bmi<=29.9){
        printf("BMI %.1f nadwaga", bmi);
    }else printf("BMI %.1f otylosc", bmi);
    
    
    return 0;
}
