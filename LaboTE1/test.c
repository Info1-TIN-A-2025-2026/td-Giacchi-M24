#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long max_length_state(const char *signal, const unsigned long num_samples, const unsigned char state){
    unsigned long max_count=0;
    unsigned long count=0;
    for(unsigned long i=0;i<num_samples;i++) {
        count += signal[i]== state;
        max_count = count > max_count ? count : max_count;
        count = signal[i] != state ? 0 : count;
    }
    return max_count;
}

unsigned long max_length_high(const char *signal, const unsigned long num_samples){
    return max_length_state(signal, num_samples, 1);
}

unsigned long max_length_low(const char *signal, const unsigned long num_samples){
    return max_length_state(signal, num_samples, 0);
}

unsigned long count_rising_edge(const char *signal, const unsigned long num_samples){
    unsigned long count = signal[0];
    for (unsigned long i = 1; i < num_samples; i++) {
        if ((signal[i-1]==0) && (signal[i]==1)){
            count++;
        }
    }
return count;   
}

void rle(const char *signal, const unsigned long num_samples){
    unsigned long count=1;
    unsigned long symbols=0;   
    char state=signal[0];  
    printf("%d",state);
    symbols++;
    for (unsigned long i = 0; i < num_samples; i++)
    {
        if (signal[i]==state){
        count++;
        }
        else{
        printf("%lu",count);
        symbols++;
        count=1;
        state = 1 - state;
        }
    printf("%lu",count);
    symbols++;
    printf("num symbols in rle: %lu\n", symbols);
    printf("compression rate: %.2f\n", (double)num_samples/symbols);
    }
}


