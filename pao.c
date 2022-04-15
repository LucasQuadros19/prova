#include <stdio.h>
#include <stdlib.h>
int main(){
    int opc,opc2;// variaveis para usar no loop
    do{//inicio do loop
        float pre,quant;
        system("clear"); 
        // as opcoes para escolher 
    printf("<------------------------>\nTipos de pao\n1-Forma=R$:7,50\n2-Centeio=R$:8,69\n3-Broa=R$:5,00\n4-Refrigerante=R$:8.00\n5-Sonho=R$:5.00\n6-Sair\n<------------------------>\nEscolha=");
        scanf("%d",&opc);
        getchar();
        if(opc==6){// se for igual 6 ele acaba o programa 
            opc=2;
            system("clear");
            break;
        }else if(opc>=7 || opc==0){// se for um numero q nao esta nas opcoes ele mostra o erro
            system("clear");
        printf("================\nopcao invalida\n================\n");
        printf("\n\n1-voltar ao menu\n2-sair\nescolha=");
         scanf("%d",&opc2);
         getchar();
         continue;
        }
        system("clear");
    printf("<------------------------>\nQantas unidades deseja=");// pega informacao da quantidade para usar na conta depois 
        scanf("%f",&quant);
         getchar();
        system("clear");
          printf("<------------------------>\n");
    switch (opc){// mudara o valor da varialvel para o preco dos produtos
        case 1://forma
         pre=7.50;
            break;
        case 2://centeio
            pre=8.69;
            break;
        case 3://broa
            pre=5.00;
            break;
        case 4://refrigerante
            pre=8.00;
            break;
        case 5://sonho
            pre=5.000;
            break;
    } 
    pre=quant*pre;   
    // pergunta a forma de pagamento 
    printf("Valor toltal=R$%0.2f\n\n-Qual a forma de pagamento-\n==================\n1-A vista\n2-Parcelado\n==================\nEscolha=",pre);
    scanf("%i",&opc);
    getchar();
    system("clear");
    switch(opc){
        float par;
        case 1:
            printf("<------------------------>\nDeve ser pago=R$:%0.2f\n<------------------------>\n",pre);
            break;
        case 2:
            printf("<------------------------>\nQuantas parcelas deseja=");
            scanf("%f",&par);
            getchar();
            system("clear");
            pre*=1.03;// a formula adicionando os juros 
            printf("<------------------------>\nValor total agora ficara como=R$:%0.2f\n<------------------------>\n",pre);
            pre/=par;
            printf("O valor deve ser pago em = %.0f parcelas de R$:%0.2f\n<------------------------>\n",par,pre);
            break;
            default:
            printf("================\nopcao invalida\n================\n");
            break;
    }
    //pergunta para voltar no loop
     printf("\n\n1-voltar ao menu\n2-sair\nescolha=");
    scanf("%d",&opc2);
     getchar();
    }while(opc2==1);// fim do loop
         system("clear");
    printf("========================================\n\tObrigado volte sempre:)\n========================================\n");
    return 0;}