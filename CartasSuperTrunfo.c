#include <stdio.h>

int main() {
  char pais[20];

  char estadoA[25], cidadeA01[25], cidadeA02[25], cidadeA03[25], cidadeA04[25], estadoB[25], cidadeB01[25], cidadeB02[25], cidadeB03[25], cidadeB04[25], estadoC[25], cidadeC01[25], cidadeC02[25], cidadeC03[25], cidadeC04[25], estadoD[25], cidadeD01[25], cidadeD02[25], cidadeD03[25], cidadeD04[25], estadoE[25], cidadeE01[25], cidadeE02[25], cidadeE03[25], cidadeE04[25], estadoF[25], cidadeF01[25], cidadeF02[25], cidadeF03[25], cidadeF04[25], estadoG[25], cidadeG01[25], cidadeG02[25], cidadeG03[25], cidadeG04[25], estadoH[25], cidadeH01[25], cidadeH02[25], cidadeH03[25], cidadeH04[25];

  int populacaoA01, populacaoA02, populacaoA03, populacaoA04, populacaoB01, populacaoB02, populacaoB03, populacaoB04, populacaoC01, populacaoC02, populacaoC03, populacaoC04, populacaoD01, populacaoD02, populacaoD03, populacaoD04, populacaoE01, populacaoE02, populacaoE03, populacaoE04, populacaoF01, populacaoF02, populacaoF03, populacaoF04, populacaoG01, populacaoG02, populacaoG03, populacaoG04, populacaoH01, populacaoH02, populacaoH03, populacaoH04;

  float areaA01, areaA02, areaA03, areaA04, areaB01, areaB02, areaB03, areaB04, areaC01, areaC02, areaC03, areaC04, areaD01, areaD02, areaD03, areaD04, areaE01, areaE02, areaE03, areaE04, areaF01, areaF02, areaF03, areaF04, areaG01, areaG02, areaG03, areaG04, areaH01, areaH02, areaH03, areaH04;

  float pibA01, pibA02, pibA03, pibA04, pibB01, pibB02, pibB03, pibB04, pibC01, pibC02, pibC03, pibC04, pibD01, pibD02, pibD03, pibD04, pibE01, pibE02, pibE03, pibE04, pibF01, pibF02, pibF03, pibF04, pibG01, pibG02, pibG03, pibG04, pibH01, pibH02, pibH03, pibH04;

  int numeroPontoTuristicoA01, numeroPontoTuristicoA02, numeroPontoTuristicoA03, numeroPontoTuristicoA04, numeroPontoTuristicoB01, numeroPontoTuristicoB02, numeroPontoTuristicoB03, numeroPontoTuristicoB04, numeroPontoTuristicoC01, numeroPontoTuristicoC02, numeroPontoTuristicoC03, numeroPontoTuristicoC04, numeroPontoTuristicoD01, numeroPontoTuristicoD02, numeroPontoTuristicoD03, numeroPontoTuristicoD04, numeroPontoTuristicoE01, numeroPontoTuristicoE02, numeroPontoTuristicoE03, numeroPontoTuristicoE04, numeroPontoTuristicoF01, numeroPontoTuristicoF02, numeroPontoTuristicoF03, numeroPontoTuristicoF04, numeroPontoTuristicoG01, numeroPontoTuristicoG02, numeroPontoTuristicoG03, numeroPontoTuristicoG04, numeroPontoTuristicoH01, numeroPontoTuristicoH02, numeroPontoTuristicoH03, numeroPontoTuristicoH04;

  printf("Digite o pais a ser cadastrado: ");
  scanf(" %s", &pais);
  printf("O país a ser cadastrado é o %s\n", pais);

    printf("Digite a sigla do estado a qual será atríbuido o código \"A\": ");
    scanf("%s", &estadoA);
    printf("O estado atribuído ao código \"A\" é %s\n", estadoA);
      
      char codigoA01[4] = "A01";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"A01\": ", estadoA);
        scanf("%s", &cidadeA01);
            
        printf("Digite a população de %s: ", cidadeA01);
        scanf("%d", &populacaoA01);

        printf("Digite a area de %s: ", cidadeA01);
        scanf("%f", &areaA01);

        printf("Digite o PIB de %s: ", cidadeA01);
        scanf("%f", &pibA01);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeA01);
        scanf("%d", &numeroPontoTuristicoA01);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoA01, cidadeA01, populacaoA01, areaA01, pibA01, numeroPontoTuristicoA01);

      char codigoA02[4] = "A02";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"A02\": ", estadoA);
        scanf("%s", &cidadeA02);
            
        printf("Digite a população de %s: ", cidadeA02);
        scanf("%d", &populacaoA02);

        printf("Digite a area de %s: ", cidadeA02);
        scanf("%f", &areaA02);

        printf("Digite o PIB de %s: ", cidadeA02);
        scanf("%f", &pibA02);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeA02);
        scanf("%d", &numeroPontoTuristicoA02);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoA02, cidadeA02, populacaoA02, areaA02, pibA02, numeroPontoTuristicoA02);
    
      char codigoA03[4] = "A03";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"A03\": ", estadoA);
        scanf("%s", &cidadeA03);
            
        printf("Digite a população de %s: ", cidadeA03);
        scanf("%d", &populacaoA03);

        printf("Digite a area de %s: ", cidadeA03);
        scanf("%f", &areaA03);

        printf("Digite o PIB de %s: ", cidadeA03);
        scanf("%f", &pibA03);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeA03);
        scanf("%d", &numeroPontoTuristicoA03);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoA03, cidadeA03, populacaoA03, areaA03, pibA03, numeroPontoTuristicoA03);
      
      char codigoA04[4] = "A04";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"A04\": ", estadoA);
        scanf("%s", &cidadeA04);
            
        printf("Digite a população de %s: ", cidadeA04);
        scanf("%d", &populacaoA04);

        printf("Digite a area de %s: ", cidadeA04);
        scanf("%f", &areaA04);

        printf("Digite o PIB de %s: ", cidadeA04);
        scanf("%f", &pibA04);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeA04);
        scanf("%d", &numeroPontoTuristicoA04);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoA04, cidadeA04, populacaoA04, areaA04, pibA04, numeroPontoTuristicoA04);

    printf("Digite a sigla do estado a qual sera atribuido o código \"B\": ");
    scanf("%s", &estadoB);
    printf("O estado atribuído ao código \"B\" é %s\n", estadoB);
        
      char codigoB01[4] = "B01";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"B01\": ", estadoB);
        scanf("%s", &cidadeB01);
            
        printf("Digite a população de %s: ", cidadeB01);
        scanf("%d", &populacaoB01);

        printf("Digite a area de %s: ", cidadeB01);
        scanf("%f", &areaB01);

        printf("Digite o PIB de %s: ", cidadeB01);
        scanf("%f", &pibB01);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeB01);
        scanf("%d", &numeroPontoTuristicoB01);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoB01, cidadeB01, populacaoB01, areaB01, pibB01, numeroPontoTuristicoB01);

      char codigoB02[4] = "B02";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"B02\": ", estadoB);
        scanf("%s", &cidadeB02);
            
        printf("Digite a população de %s: ", cidadeB02);
        scanf("%d", &populacaoB02);

        printf("Digite a area de %s: ", cidadeB02);
        scanf("%f", &areaB02);

        printf("Digite o PIB de %s: ", cidadeB02);
        scanf("%f", &pibB02);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeB02);
        scanf("%d", &numeroPontoTuristicoB02);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoB02, cidadeB02, populacaoB02, areaB02, pibB02, numeroPontoTuristicoB02);
    
      char codigoB03[4] = "B03";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"B03\": ", estadoB);
        scanf("%s", &cidadeB03);
            
        printf("Digite a população de %s: ", cidadeB03);
        scanf("%d", &populacaoB03);

        printf("Digite a area de %s: ", cidadeB03);
        scanf("%f", &areaB03);

        printf("Digite o PIB de %s: ", cidadeB03);
        scanf("%f", &pibB03);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeB03);
        scanf("%d", &numeroPontoTuristicoB03);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoB03, cidadeB03, populacaoB03, areaB03, pibB03, numeroPontoTuristicoB03);
      
      char codigoB04[4] = "B04";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"B04\": ", estadoB);
        scanf("%s", &cidadeB04);
            
        printf("Digite a população de %s: ", cidadeB04);
        scanf("%d", &populacaoB04);

        printf("Digite a area de %s: ", cidadeB04);
        scanf("%f", &areaB04);

        printf("Digite o PIB de %s: ", cidadeB04);
        scanf("%f", &pibB04);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeB04);
        scanf("%d", &numeroPontoTuristicoB04);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoB04, cidadeB04, populacaoB04, areaB04, pibB04, numeroPontoTuristicoB04);
      
    printf("Digite a sigla do estado a qual sera atribuido o código \"C\": ");
    scanf("%s", &estadoC);
    printf("O estado atribuído ao código \"C\" é %s\n", estadoC);
      
      char codigoC01[4] = "C01";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"C01\": ", estadoC);
        scanf("%s", &cidadeC01);
            
        printf("Digite a população de %s: ", cidadeC01);
        scanf("%d", &populacaoC01);

        printf("Digite a area de %s: ", cidadeC01);
        scanf("%f", &areaC01);

        printf("Digite o PIB de %s: ", cidadeC01);
        scanf("%f", &pibC01);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeC01);
        scanf("%d", &numeroPontoTuristicoC01);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoC01, cidadeC01, populacaoC01, areaC01, pibC01, numeroPontoTuristicoC01);

      char codigoC02[4] = "C02";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"C02\": ", estadoC);
        scanf("%s", &cidadeC02);
            
        printf("Digite a população de %s: ", cidadeC02);
        scanf("%d", &populacaoC02);

        printf("Digite a area de %s: ", cidadeC02);
        scanf("%f", &areaC02);

        printf("Digite o PIB de %s: ", cidadeC02);
        scanf("%f", &pibC02);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeC02);
        scanf("%d", &numeroPontoTuristicoC02);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoC02, cidadeC02, populacaoC02, areaC02, pibC02, numeroPontoTuristicoC02);
    
      char codigoC03[4] = "C03";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"C03\": ", estadoC);
        scanf("%s", &cidadeC03);
            
        printf("Digite a população de %s: ", cidadeC03);
        scanf("%d", &populacaoC03);

        printf("Digite a area de %s: ", cidadeC03);
        scanf("%f", &areaC03);

        printf("Digite o PIB de %s: ", cidadeC03);
        scanf("%f", &pibC03);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeC03);
        scanf("%d", &numeroPontoTuristicoC03);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoC03, cidadeC03, populacaoC03, areaC03, pibC03, numeroPontoTuristicoC03);
      
      char codigoC04[4] = "C04";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"C04\": ", estadoC);
        scanf("%s", &cidadeC04);
            
        printf("Digite a população de %s: ", cidadeC04);
        scanf("%d", &populacaoC04);

        printf("Digite a area de %s: ", cidadeC04);
        scanf("%f", &areaC04);

        printf("Digite o PIB de %s: ", cidadeC04);
        scanf("%f", &pibC04);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeC04);
        scanf("%d", &numeroPontoTuristicoC04);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoC04, cidadeC04, populacaoC04, areaC04, pibC04, numeroPontoTuristicoC04);

    printf("Digite a sigla do estado a qual sera atribuido o código \"D\": ");
    scanf("%s", &estadoD);
    printf("O estado atribuído ao código \"D\" é %s\n", estadoD);
      
      char codigoD01[4] = "D01";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"D01\": ", estadoD);
        scanf("%s", &cidadeD01);
            
        printf("Digite a população de %s: ", cidadeD01);
        scanf("%d", &populacaoD01);

        printf("Digite a area de %s: ", cidadeD01);
        scanf("%f", &areaD01);

        printf("Digite o PIB de %s: ", cidadeD01);
        scanf("%f", &pibD01);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeD01);
        scanf("%d", &numeroPontoTuristicoD01);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoD01, cidadeD01, populacaoD01, areaD01, pibD01, numeroPontoTuristicoD01);

      char codigoD02[4] = "D02";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"D02\": ", estadoD);
        scanf("%s", &cidadeD02);
            
        printf("Digite a população de %s: ", cidadeD02);
        scanf("%d", &populacaoD02);

        printf("Digite a area de %s: ", cidadeD02);
        scanf("%f", &areaD02);

        printf("Digite o PIB de %s: ", cidadeD02);
        scanf("%f", &pibD02);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeD02);
        scanf("%d", &numeroPontoTuristicoD02);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoD02, cidadeD02, populacaoD02, areaD02, pibD02, numeroPontoTuristicoD02);
    
      char codigoD03[4] = "D03";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"D03\": ", estadoD);
        scanf("%s", &cidadeD03);
            
        printf("Digite a população de %s: ", cidadeD03);
        scanf("%d", &populacaoD03);

        printf("Digite a area de %s: ", cidadeD03);
        scanf("%f", &areaD03);

        printf("Digite o PIB de %s: ", cidadeD03);
        scanf("%f", &pibD03);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeD03);
        scanf("%d", &numeroPontoTuristicoD03);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoD03, cidadeD03, populacaoD03, areaD03, pibD03, numeroPontoTuristicoD03);
      
      char codigoD04[4] = "D04";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"D04\": ", estadoD);
        scanf("%s", &cidadeD04);
            
        printf("Digite a população de %s: ", cidadeD04);
        scanf("%d", &populacaoD04);

        printf("Digite a area de %s: ", cidadeD04);
        scanf("%f", &areaD04);

        printf("Digite o PIB de %s: ", cidadeD04);
        scanf("%f", &pibD04);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeD04);
        scanf("%d", &numeroPontoTuristicoD04);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoD04, cidadeD04, populacaoD04, areaD04, pibD04, numeroPontoTuristicoD04);

    printf("Digite a sigla do estado a qual sera atribuido o código \"E\": ");
    scanf("%s", &estadoE);
    printf("O estado atribuído ao código \"E\" é %s\n", estadoE);
      
      char codigoE01[4] = "E01";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"E01\": ", estadoE);
        scanf("%s", &cidadeE01);
            
        printf("Digite a população de %s: ", cidadeE01);
        scanf("%d", &populacaoE01);

        printf("Digite a area de %s: ", cidadeE01);
        scanf("%f", &areaE01);

        printf("Digite o PIB de %s: ", cidadeE01);
        scanf("%f", &pibE01);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeE01);
        scanf("%d", &numeroPontoTuristicoE01);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoE01, cidadeE01, populacaoE01, areaE01, pibE01, numeroPontoTuristicoE01);

      char codigoE02[4] = "E02";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"E02\": ", estadoE);
        scanf("%s", &cidadeE02);
            
        printf("Digite a população de %s: ", cidadeE02);
        scanf("%d", &populacaoE02);

        printf("Digite a area de %s: ", cidadeE02);
        scanf("%f", &areaE02);

        printf("Digite o PIB de %s: ", cidadeE02);
        scanf("%f", &pibE02);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeE02);
        scanf("%d", &numeroPontoTuristicoE02);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoE02, cidadeE02, populacaoE02, areaE02, pibE02, numeroPontoTuristicoE02);
    
      char codigoE03[4] = "E03";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"E03\": ", estadoE);
        scanf("%s", &cidadeE03);
            
        printf("Digite a população de %s: ", cidadeE03);
        scanf("%d", &populacaoE03);

        printf("Digite a area de %s: ", cidadeE03);
        scanf("%f", &areaE03);

        printf("Digite o PIB de %s: ", cidadeE03);
        scanf("%f", &pibE03);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeE03);
        scanf("%d", &numeroPontoTuristicoE03);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoE03, cidadeE03, populacaoE03, areaE03, pibE03, numeroPontoTuristicoE03);
      
      char codigoE04[4] = "E04";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"E04\": ", estadoE);
        scanf("%s", &cidadeE04);
            
        printf("Digite a população de %s: ", cidadeE04);
        scanf("%d", &populacaoE04);

        printf("Digite a area de %s: ", cidadeE04);
        scanf("%f", &areaE04);

        printf("Digite o PIB de %s: ", cidadeE04);
        scanf("%f", &pibE04);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeE04);
        scanf("%d", &numeroPontoTuristicoE04);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoE04, cidadeE04, populacaoE04, areaE04, pibE04, numeroPontoTuristicoE04);

    printf("Digite a sigla do estado a qual sera atribuido o código \"F\": ");
    scanf("%s", &estadoF);
    printf("O estado atribuído ao código \"F\" é %s\n", estadoF);
      
      char codigoF01[4] = "F01";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"F01\": ", estadoF);
        scanf("%s", &cidadeF01);
            
        printf("Digite a população de %s: ", cidadeF01);
        scanf("%d", &populacaoF01);

        printf("Digite a area de %s: ", cidadeF01);
        scanf("%f", &areaF01);

        printf("Digite o PIB de %s: ", cidadeF01);
        scanf("%f", &pibF01);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeF01);
        scanf("%d", &numeroPontoTuristicoF01);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoF01, cidadeF01, populacaoF01, areaF01, pibF01, numeroPontoTuristicoF01);

      char codigoF02[4] = "F02";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"F02\": ", estadoF);
        scanf("%s", &cidadeF02);
            
        printf("Digite a população de %s: ", cidadeF02);
        scanf("%d", &populacaoF02);

        printf("Digite a area de %s: ", cidadeF02);
        scanf("%f", &areaF02);

        printf("Digite o PIB de %s: ", cidadeF02);
        scanf("%f", &pibF02);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeF02);
        scanf("%d", &numeroPontoTuristicoF02);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoF02, cidadeF02, populacaoF02, areaF02, pibF02, numeroPontoTuristicoF02);
    
      char codigoF03[4] = "F03";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"F03\": ", estadoF);
        scanf("%s", &cidadeF03);
            
        printf("Digite a população de %s: ", cidadeF03);
        scanf("%d", &populacaoF03);

        printf("Digite a area de %s: ", cidadeF03);
        scanf("%f", &areaF03);

        printf("Digite o PIB de %s: ", cidadeF03);
        scanf("%f", &pibF03);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeF03);
        scanf("%d", &numeroPontoTuristicoF03);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoF03, cidadeF03, populacaoF03, areaF03, pibF03, numeroPontoTuristicoF03);
      
      char codigoF04[4] = "F04";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"F04\": ", estadoF);
        scanf("%s", &cidadeF04);
            
        printf("Digite a população de %s: ", cidadeF04);
        scanf("%d", &populacaoF04);

        printf("Digite a area de %s: ", cidadeF04);
        scanf("%f", &areaF04);

        printf("Digite o PIB de %s: ", cidadeF04);
        scanf("%f", &pibF04);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeF04);
        scanf("%d", &numeroPontoTuristicoF04);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoF04, cidadeF04, populacaoF04, areaF04, pibF04, numeroPontoTuristicoF04);

    printf("Digite a sigla do estado a qual sera atribuido o código \"G\": ");
    scanf("%s", &estadoG);
    printf("O estado atribuído ao código \"G\" é %s\n", estadoG);
      
      char codigoG01[4] = "G01";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"G01\": ", estadoG);
        scanf("%s", &cidadeG01);
            
        printf("Digite a população de %s: ", cidadeG01);
        scanf("%d", &populacaoG01);

        printf("Digite a area de %s: ", cidadeG01);
        scanf("%f", &areaG01);

        printf("Digite o PIB de %s: ", cidadeG01);
        scanf("%f", &pibG01);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeG01);
        scanf("%d", &numeroPontoTuristicoG01);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoG01, cidadeG01, populacaoG01, areaG01, pibG01, numeroPontoTuristicoG01);

      char codigoG02[4] = "G02";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"G02\": ", estadoG);
        scanf("%s", &cidadeG02);
            
        printf("Digite a população de %s: ", cidadeG02);
        scanf("%d", &populacaoG02);

        printf("Digite a area de %s: ", cidadeG02);
        scanf("%f", &areaG02);

        printf("Digite o PIB de %s: ", cidadeG02);
        scanf("%f", &pibG02);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeG02);
        scanf("%d", &numeroPontoTuristicoG02);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoG02, cidadeG02, populacaoG02, areaG02, pibG02, numeroPontoTuristicoG02);
    
      char codigoG03[4] = "G03";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"G03\": ", estadoG);
        scanf("%s", &cidadeG03);
            
        printf("Digite a população de %s: ", cidadeG03);
        scanf("%d", &populacaoG03);

        printf("Digite a area de %s: ", cidadeG03);
        scanf("%f", &areaG03);

        printf("Digite o PIB de %s: ", cidadeG03);
        scanf("%f", &pibG03);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeG03);
        scanf("%d", &numeroPontoTuristicoG03);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoG03, cidadeG03, populacaoG03, areaG03, pibG03, numeroPontoTuristicoG03);
      
      char codigoG04[4] = "G04";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"G04\": ", estadoG);
        scanf("%s", &cidadeG04);
            
        printf("Digite a população de %s: ", cidadeG04);
        scanf("%d", &populacaoG04);

        printf("Digite a area de %s: ", cidadeG04);
        scanf("%f", &areaG04);

        printf("Digite o PIB de %s: ", cidadeG04);
        scanf("%f", &pibG04);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeG04);
        scanf("%d", &numeroPontoTuristicoG04);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoG04, cidadeG04, populacaoG04, areaG04, pibG04, numeroPontoTuristicoG04);

    printf("Digite a sigla do estado a qual sera atribuido o código \"H\": ");
    scanf("%s", &estadoH);
    printf("O estado atribuído ao código \"H\" é %s\n", estadoH);
      
      char codigoH01[4] = "H01";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"H01\": ", estadoH);
        scanf("%s", &cidadeH01);
            
        printf("Digite a população de %s: ", cidadeH01);
        scanf("%d", &populacaoH01);

        printf("Digite a area de %s: ", cidadeH01);
        scanf("%f", &areaH01);

        printf("Digite o PIB de %s: ", cidadeH01);
        scanf("%f", &pibH01);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeH01);
        scanf("%d", &numeroPontoTuristicoH01);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoH01, cidadeH01, populacaoH01, areaH01, pibH01, numeroPontoTuristicoH01);

      char codigoH02[4] = "H02";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"H02\": ", estadoH);
        scanf("%s", &cidadeH02);
            
        printf("Digite a população de %s: ", cidadeH02);
        scanf("%d", &populacaoH02);

        printf("Digite a area de %s: ", cidadeH02);
        scanf("%f", &areaH02);

        printf("Digite o PIB de %s: ", cidadeH02);
        scanf("%f", &pibH02);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeH02);
        scanf("%d", &numeroPontoTuristicoH02);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoH02, cidadeH02, populacaoH02, areaH02, pibH02, numeroPontoTuristicoH02);
    
      char codigoH03[4] = "H03";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"H03\": ", estadoH);
        scanf("%s", &cidadeH03);
            
        printf("Digite a população de %s: ", cidadeH03);
        scanf("%d", &populacaoH03);

        printf("Digite a area de %s: ", cidadeH03);
        scanf("%f", &areaH03);

        printf("Digite o PIB de %s: ", cidadeH03);
        scanf("%f", &pibH03);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeH03);
        scanf("%d", &numeroPontoTuristicoH03);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoH03, cidadeH03, populacaoH03, areaH03, pibH03, numeroPontoTuristicoH03);
      
      char codigoH04[4] = "H04";
        printf("Digite o nome de uma cidade de %s a qual será atribuída o código \"H04\": ", estadoH);
        scanf("%s", &cidadeH04);
            
        printf("Digite a população de %s: ", cidadeH04);
        scanf("%d", &populacaoH04);

        printf("Digite a area de %s: ", cidadeH04);
        scanf("%f", &areaH04);

        printf("Digite o PIB de %s: ", cidadeH04);
        scanf("%f", &pibH04);

        printf("Digite o numero de pontos turisticos de %s: ", cidadeH04);
        scanf("%d", &numeroPontoTuristicoH04);

        printf("\nA carta cadastrada no código %s eh:\n\nNome da cidade: %s;\nPopulação: %d habitantes\nArea: %.2f km2\nPIB: %.2f\nNumero de pontos turisticos: %d\n\n", codigoH04, cidadeH04, populacaoH04, areaH04, pibH04, numeroPontoTuristicoH04);


  return 0;
}