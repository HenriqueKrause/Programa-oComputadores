// Nome: Henrique Borges Krause     Turma: M2


// Mude a palavra de acordo com o codigo soundex:

#include <stdio.h>
#include <ctype.h>

int main(){
    char texto[20];


    printf("Pressione B F P V para 1");
    printf("\nPressione C G J K Q S X Z para 2");
    printf("\nPressione D T para 3");
    printf("\nPressione  L para 4");
    printf("\nPressione M N  para 5");
    printf("\nPressione  R  para 6");
    printf("\nPressione A E I O U H W Y para X");
    printf("\n\nInforme as letras: ");
    scanf("%s", texto);
   
   
    for (int i = 0; texto[i] != '\0'; i++) {
        
        char letra = toupper(texto[i]);
        
        if 
                (letra == 'B' || texto[i] == 'F' || letra == 'P' || letra == 'V')
                     printf("1");
        else if 
            (letra == 'C' || letra == 'G' || letra == 'J' || letra == 'K' || letra == 'Q' || letra == 'S' || letra == 'X' || letra == 'Z')
                     printf("2");
        else if 
            (letra == 'D' || letra == 'T')
                     printf("3");
        else if 
            (letra == 'L' )
                     printf("4");
                    
        else if 
            (letra == 'M' || letra == 'N') 
                    printf("5");
        else if 
            ( letra == 'R' )
                     printf("6");
        else if 
            (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'H' ||letra == 'W' ||letra == 'Y')
             printf("8");
                
    }

    return 0;
}