#include <stdio.h>
#include <string.h>



int main() {

    //.
    //VARIÁVEIS COM VALOR REQUISITADO AO USUÁRIO
    float rendFamMensal, notaProcSelet, notaENEM, notaEnsinoM;
    int ePCD = 0; //coloquei 0 predefinido para lembrar que o valor irá alternar entre 0 e 1
    int redePublica = 0;
    int numFamiliares, numFamiliaresBolsistas, tipoBolsa;
    //1 para bolsa INTEGRAL e 2 para bolsa PARCIAL
    char cursoPretendido[30];
    //VARIÁVEIS COM VALOR REQUISITADO AO USUÁRIO

    //VARIÁVEIS DE USO INTERNO
    int entradaInvalida = 0; //para verificação se a entrada do usuário é válida
    float rendaPerCapita;
    float notaFinal;
    char resultadoBolsa[30];
    int bolsaConcedida = 0; // 0-nao concedida / 1- concedida
    char motivoRecusa[200] = "RECUSADA | Motivo(s): ";
    //VARIÁVEIS DE USO INTERNO


    printf("\n\n\n\nBem vindo(a) ao Sistema de Avaliacao de Bolsa!");
    printf("\nPara continuar, informe os dados abaixo!");



    printf("\n\nInsira a sua renda familiar mensal (em BRL): "); // RENDA FAMILIAR MENSAL
    scanf("%f", &rendFamMensal);
    do { 

        if (rendFamMensal <= 0){
            entradaInvalida = 1;
            printf("\n\n\nEntrada invalida, tente novamente");
            printf("\nInsira a sua renda familiar mensal (em BRL): ");
            scanf("%f", &rendFamMensal);
        } else {
            entradaInvalida = 0;
        };

    }
    while(entradaInvalida == 1);
    

    
    printf("\nInsira a sua nota do processo seletivo (de 0 a 10): "); // NOTA PROCESSO SELETIVO
    scanf("%f", &notaProcSelet);
    do { 

        if (notaProcSelet < 0 || notaProcSelet > 10){
            entradaInvalida = 1;
            printf("\n\n\nEntrada invalida, tente novamente");
            printf("\nInsira a sua nota do processo seletivo (de 0 a 10): ");
            scanf("%f", &notaProcSelet);
        } else {
            entradaInvalida = 0;
        };

    }
    while(entradaInvalida == 1);



    printf("\nInsira a sua nota do ENEM (de 0 a 10): "); // NOTA ENEM
    scanf("%f", &notaENEM);
    do {

        if (notaENEM < 0 || notaENEM > 10){
            entradaInvalida = 1;
            printf("\n\n\nEntrada invalida, tente novamente");
            printf("\nInsira a sua nota do ENEM (de 0 a 10): ");
            scanf("%f", &notaENEM);
        } else {
            entradaInvalida = 0;
        };

    }
    while(entradaInvalida == 1);



    printf("\nInsira a sua media global do ensino medio (de 0 a 10): "); // NOTA ENSINO MÉDIO
    scanf("%f", &notaEnsinoM);
    do {

        if (notaEnsinoM < 0 || notaEnsinoM > 10){
            entradaInvalida = 1;
            printf("\n\n\nEntrada invalida, tente novamente");
            printf("\nInsira a sua media global do ensino medio (de 0 a 10): ");
            scanf("%f", &notaEnsinoM);
        } else {
            entradaInvalida = 0;
        };

    }
    while(entradaInvalida == 1);



    printf("\nVoce possui alguma deficiencia? (1-SIM | 0-NAO): "); // PESSOA COM DEFICIÊNCIA
    scanf("%d", &ePCD);
    do {

        if (ePCD!=0 && ePCD!=1){
            entradaInvalida = 1;
            printf("\n\n\nEntrada invalida, tente novamente");
            printf("\nVoce possui alguma deficiencia? (1-SIM | 0-NAO): ");
            scanf("%d", &ePCD);
        } else {
            entradaInvalida = 0;
        };

    }
    while(entradaInvalida == 1);



    printf("\nVoce foi aluno de rede publica? (1-SIM | 0-NAO): "); // REDE PUBLICA
    scanf("%d", &redePublica);
    do {

        if (redePublica!=0 && redePublica!=1){
            entradaInvalida = 1;
            printf("\n\n\nEntrada invalida, tente novamente");
            printf("\nVoce foi aluno de rede publica? (1-SIM | 0-NAO): ");
            scanf("%d", &redePublica);
        } else {
            entradaInvalida = 0;
        };

    }
    while(entradaInvalida == 1);



    printf("\nInsira a quantidade de familiares que residem com voce: "); // NOTA ENSINO MÉDIO
    scanf("%d", &numFamiliares);  //------------------------------------------------------------IGUAL A ZERO PODE, NAO?
    do {

        if (numFamiliares<=0){
            entradaInvalida = 1;
            printf("\n\n\nEntrada invalida, tente novamente");
            printf("\nInsira a quantidade de familiares que residem com voce: ");
            scanf("%d", &numFamiliares);
        } else {
            entradaInvalida = 0;
        };

    }
    while(entradaInvalida == 1);



    printf("\nInsira a quantidade de familiares que sao bolsistas na universidade: "); // NOTA ENSINO MÉDIO
    scanf("%d", &numFamiliaresBolsistas);
    do {

        if (numFamiliaresBolsistas<0){
            entradaInvalida = 1;
            printf("\n\n\nEntrada invalida, tente novamente");
            printf("\nInsira a quantidade de familiares que sao bolsistas na universidade: ");
            scanf("%d", &numFamiliaresBolsistas);
        } else {
            entradaInvalida = 0;
        };

    }
    while(entradaInvalida == 1);



    printf("\nQual o tipo de bolsa desejada? (1-INTEGRAL | 2-PARCIAL): "); // TIPO BOLSA
    scanf("%d", &tipoBolsa);
    do {

        if (tipoBolsa!=1&&tipoBolsa!=2){
            entradaInvalida = 1;
            printf("\n\n\nEntrada invalida, tente novamente");
            printf("\nQual o tipo de bolsa desejada? (1-INTEGRAL | 2-PARCIAL): ");
            scanf("%d", &tipoBolsa);
        } else {
            entradaInvalida = 0;
        };

    }
    while(entradaInvalida == 1);

    getchar();
    printf("\nInforme o curso pretendido: "); // CURSO PRETENDIDO
    fgets(cursoPretendido, sizeof(cursoPretendido), stdin);
    cursoPretendido[strcspn(cursoPretendido, "\n")] = '\0';


    // OPERAÇÕES INTERNAS PARA CÁLCULO FINAL
    rendaPerCapita = (rendFamMensal/(numFamiliares+1));
    notaFinal = ((notaProcSelet*0.4) + (notaENEM*0.3) + (notaEnsinoM*0.3));



    switch(tipoBolsa) { // 1-integral / 2-parcial
        case 1:
            if (rendaPerCapita <=800 && notaFinal >= 8.0 && (ePCD == 1 || redePublica == 1) && numFamiliaresBolsistas == 0) { // tudo ok!
                bolsaConcedida = 1;
            }
            else { // adicionando na lista os motivos de recusa
                if (rendaPerCapita > 800) { // renda per capita
                    if (strlen(motivoRecusa) != 22){ // impedir a lista de ficar mal formatada
                        strcat(motivoRecusa, ", ");
                };
                strcat(motivoRecusa, "renda per capita maior que 800.00");
                };

                if (notaFinal < 8.0) { // nota final
                    if (strlen(motivoRecusa) != 22){
                        strcat(motivoRecusa, ", ");
                };
                strcat(motivoRecusa, "nota final inferior a 7.0");
                };

                if (!(ePCD == 1 || redePublica == 1)) { // PCD ou rede pública
                    if (strlen(motivoRecusa) != 22){
                        strcat(motivoRecusa, ", ");
                };
                strcat(motivoRecusa, "nao possui deficiencia ou estudou em rede publica");
                };

                if (numFamiliaresBolsistas > 0) { // numero familiares bolsistas
                    if (strlen(motivoRecusa) != 22){
                        strcat(motivoRecusa, ", ");
                };
                strcat(motivoRecusa, "ja possui familiar bolsista");
                };
        
            };


            break;
        case 2:
            if ((ePCD == 1 || redePublica == 1)){
                if (notaFinal >= 6.0 && rendaPerCapita <= 1600 && numFamiliaresBolsistas <= 1) {
                    bolsaConcedida = 1;
                } else {
                    if (rendaPerCapita > 1600) { // renda per capita
                        if (strlen(motivoRecusa) != 22){ // impedir a lista de ficar mal formatada
                            strcat(motivoRecusa, ", ");
                    };
                    strcat(motivoRecusa, "renda per capita maior que 1600.00");
                    };
    
                    if (notaFinal < 6) { // nota final
                        if (strlen(motivoRecusa) != 22){
                            strcat(motivoRecusa, ", ");
                    };
                    strcat(motivoRecusa, "nota final inferior a 6.0");
                    };
    
                    if (numFamiliaresBolsistas > 1) { // numero familiares bolsistas
                        if (strlen(motivoRecusa) != 22){
                            strcat(motivoRecusa, ", ");
                    };
                    strcat(motivoRecusa, "possui mais de 1 familiar bolsista");
                    };
            

                };
            };

            if (!(ePCD == 1 || redePublica == 1)){
                if (notaFinal >= 7.5 && rendaPerCapita <= 1600 && numFamiliaresBolsistas <= 1) {
                    bolsaConcedida = 1;
                } else {
                    if (rendaPerCapita > 1600) { // renda per capita
                        if (strlen(motivoRecusa) != 22){ // impedir a lista de ficar mal formatada
                            strcat(motivoRecusa, ", ");
                    };
                    strcat(motivoRecusa, "renda per capita maior que 1600.00");
                    };
    
                    if (notaFinal < 7.5) { // nota final
                        if (strlen(motivoRecusa) != 22){
                            strcat(motivoRecusa, ", ");
                    };
                    strcat(motivoRecusa, "nota final inferior a 7.5");
                    };
    
                    if (numFamiliaresBolsistas > 1) { // numero familiares bolsistas
                        if (strlen(motivoRecusa) != 22){
                            strcat(motivoRecusa, ", ");
                    };
                    strcat(motivoRecusa, "possui mais de 1 familiar bolsista");
                    };
            

                };
            };


            
            break;
    };

    printf("\n\n\nRESULTADO");
    printf("\nCurso pretendido: %s", cursoPretendido);
    printf("\nNota final: %.2f", notaFinal);
    printf("\nRenda per capita: R$%.2f", rendaPerCapita);
    if (bolsaConcedida == 1){
        switch(tipoBolsa){
            case 1:
                printf("\nResultado: Bolsa integral CONCEDIDA\n\n");
                break;
            case 2:
                printf("\nResultado: Bolsa parcial CONCEDIDA\n\n");
                break;
        };
    } else {
        switch(tipoBolsa){
            case 1:
                printf("\nResultado: Bolsa integral %s\n\n", motivoRecusa);
                break;
            case 2:
                printf("\nResultado: Bolsa parcial %s\n\n", motivoRecusa);
                break;
        };
    };

    printf("\nPressione ENTER para sair");
    getchar();

    return 0;
}

