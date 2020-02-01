#include <stdio.h>
#include <string.h>

enum {
    Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, ERROR, FINISH
} state;

void state_machine(char sym)
{
    switch (state) {
    case Q1:
        if(sym==)
            state=;
        break;
    case Q2:
        if(sym==)
            state=;
        break;
    case Q3:
        if(sym==)
            state=;
        break;
    case Q4:
        if(sym==)
            state=;
        break;
    case Q5:
        if(sym==)
            state=;
        break;
    case Q6:
        if(sym==)
            state=;
        break;
    case Q7:
        if(sym==)
            state=;
        break;
    case Q8:
        if(sym==)
            state=;
        break;
    case ERROR:
        break;
    case FINISH:
        break;
    }

}

int main()
{
    char input[100];
    printf("Введите строку:\n");
    gets(input);
    unsigned int input_size=strlen(input);
    for(unsigned int i=0;i<=input_size;i++) {
        state_machine(input[i]);
    }
    if(state==FINISH) {
        printf("Строка соответствует");
    }
    else if (state==ERROR) {
        printf("Строка не соответствует");
    }
    else {
        printf("Ошибка выполнения. Последнее состояние: Q%d",state+1);
    }
    return 0;
}
