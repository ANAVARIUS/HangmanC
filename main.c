#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void to_lower_case(char* str)
{
    for(int i=0; i< strlen(str); i++)
    {
        if(str[i] < 91 && str[i] > 64 )
        {
            str[i] += 32;
        }
    }
}

int main(void)
{
    char answer = 'n';
    int longitud = 0;
    char palabra[100];
    int noletras = 1;
    while (answer == 'n')
    {
        while (noletras != 0 || longitud>20 || longitud<3)
        {
            noletras = 0;
            printf("Escriba su palabra: ");
            scanf("%s", &palabra[0]);
            for (int i = 0; i<strlen(palabra);i++)
            {
                if (!((palabra[i]<91 && palabra[i]>64) || (palabra[i]<123 && palabra[i]>96)))
                {
                    noletras +=1;
                    break;
                }
            }
            if (noletras != 0)
            {
                printf("\nSu palabra debe tener solamente letras (sin acentos).\n");
                continue;
            }
            else if (strlen(palabra)>20 || strlen(palabra)<3)
            {
                longitud = strlen(palabra);
                printf("\nSu palabra debe tener mas de 3 caracteres y menos de 20.\n");
                continue;
            }
            else 
            {
                printf("Esta seguro de que desea esa palabra? (s/n)\n");
                getchar();
                scanf("%c", &answer);
                break;
            }
        }
    }
    to_lower_case(palabra);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    char arreglo[50];
    for (int i = 0; i<strlen(palabra); i++)
    {
        arreglo[2*i] = '_';
        arreglo[2*i+1] = 32;
    }
    arreglo[2*strlen(palabra)] = 00;
    char intento;
    char letras[30] = 00;
    short int cant_ltr = 0;
    short int c = 0;
    short int try = 5;
    char miss[8];
    miss[0] = 00;
    int t = 0;
    short int flag;
    while (t<strlen(palabra))
    {
        flag = 0;
        printf("Juego: %s\n", arreglo);
        printf("%d de 5 errores: %s\n", 5-try, miss);
        printf("Ingrese su intento: ");
        getchar();
        scanf("%c", &intento);
        printf("\n");
        for (int i = 0; i<strlen(letras); i++)
        {
            if (intento == letras[i])
            {
                printf("Usted ya intento esa letra.\n");
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            continue;
        }
        letras[cant_ltr] = intento;
        cant_ltr += 1;
        for(int i = 0; i<strlen(palabra);i++)
        {
            if (palabra[i] == intento)
            {
                arreglo[2*i] = palabra[i];
                c+=1;
            }
        }
        if (c!=0)
        {
            t +=c;
            c=0;
        }
        else
        {
            try-=1;
            if (try!=0)
            {
            miss[4-try] = intento;
            miss[5-try] = 00;
            }
            else
            {
                break;
            }

        }
    }
    if (t==strlen(palabra))
    {
        printf("GRAN APLAUSO! La palabra era %s\n", palabra);
        return 0;
    }
    else
    {
        printf("Perdiste! La palabra era %s", palabra);
        return 0;
    }
}