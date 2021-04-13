#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    //variaveis
    int vetor[50] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
int escolha,escolhamoto,escolhamotoyamaha;



//menu 01
printf("BANCO DE DADOS\n"
      "MOTOS(1)-------\n"
      "CARROS(2)------\n"
      "_______________\n"
      "Escolha:");
  scanf("%d",&escolha);
switch (escolha){
case 1:
    printf("motos:\n"
           "Honda..........(%d)\n"
           "Yamaha.........(%d)\n"
           "BMW............(%d)\n"
           "Harley-Davidson(%d)\n"
          ,
            vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5],
                    vetor[6],vetor[7],vetor[8],vetor[9]);
                    scanf("%d",&escolhamoto);
            switch(escolhamoto){
                system("cls");
            case 1:
                system("cls");
                printf("HONDA\n ADVENTURE(1)\n STREET(2)\n OFF ROAD(3)\n SPORT(4)\n TOURING(5)");
            scanf("%d",&escolhamoto);
            switch(escolhamoto){

        case 1:system("cls");

            printf("motos honda adventure\n"
                   "NXR 160 Bros ESDD...........(%d)\n"
                   "XRE 190.....................(%d)\n"
                   "XRE 300.....................(%d)\n"
                   "CB 500X.....................(%d)\n"
                   "NC 750X.....................(%d)\n"
                   "CRF 1000L Africa Twin.......(%d)\n"
                   "Africa Twin Adventure Sports(%d)\n"
                   "Honda ADV...................(%d)\n"
                   "X-ADV.......................(%d)\n");

            break;
        case 2: system("cls");
        printf("motos honda street\n\n"
               "CG 160 Start..(%d)\n"
               "CG 160 Fan....(%d)\n"
               "CG 160 Titan..(%d)\n"
               "CG 160 Titan S(%d)\n"
               "CG 160 Cargo..(%d)\n"
               "Pop 110i......(%d)\n"
               "Biz 110i......(%d)\n"
               "Biz 125.......(%d)\n"
               "Elite 125.....(%d)\n"
               "PCX...........(%d)\n"
               "Honda ADV.....(%d)\n"
               "SH 150i.......(%d)\n"
               "SH 300i.......(%d)\n"
               "X-ADV.........(%d)\n"
               "CB Twister....(%d)\n"
               "CB 500F.......(%d)\n"
               "CB 650R.......(%d)\n"
               "CB 1000R......(%d)\n");
        break;
        case 3:system("cls");
        printf("motos honda OFF ROAD\n"
               "CRF 250F........(%d)\n"
               "TRX 420 FourTrax(%d)\n");
        break;
        case 4:system("cls");
        printf("motos honda SPORT\n"
               "CBR 1000RR Fireblade(%d)\n"
               "CBR 650R............(%d)\n");
        break;
        case 5:system("cls");
        printf("motos honda TOURING\n"
               "GL 1800 Gold Wing.....(%d)\n"
               "GL 1800 Gold Wing Tour(%d)\n");
        break;
            }

            break;//case1

        case 2:
            system("cls");
            printf("Yamaha\n"
                   "XT 660.........(%d)\n"
                   "XJ6 N..........(%d)\n"
                   "Xtz 250 Lander.(%d)\n"
                   "YS 250 Fazer...(%d)\n"
                   "YBR 125 Factor.(%d)\n"
                   "Xtz 250 Tenere.(%d)\n"
                   "MT 03..........(%d)\n"
                   "Xtz 150 Crosser(%d)\n"
                   "Xj6 F..........(%d)\n"
                   "YBR 150 Factor.(%d)\n"
                   "YS 150 Fazer...(%d)\n"
                   "Xtz 125 E......(%d)\n"
                   "NMax...........(%d)\n"
                   "NEO............(%d)\n"
                   "Crypton........(%d)\n"
                   "MT 07..........(%d)\n"
                   "YZF R1.........(%d)\n"
                   "Xtz 125 X......(%d)\n"
                   "YZF R3.........(%d)\n"
                   "MT 09..........(%d)\n"
                   "XT 1200Z.......(%d)\n"
                   "V Max 1700.....(%d)\n"
                   "YZ.............(%d)\n"
                   "TT-R...........(%d)\n"
                   "Wr.............(%d)\n"
                   "Tmax...........(%d)\n"
                   "Grizzly........(%d)\n");
            break; //case2

        case 3:
            printf("BMW\n"
                   "Adventure(1)\n"
                   "Roadster(2)\n"
                   "Sport(3)\n"
                   "Tour(4)");
                   scanf("%d",&escolha);
            switch(escolha){
        case 1:
            system("cls");
            printf("BMW\nADVENTURE\n"
                   "G 310 GS...........(%d)\n"
                   "F 750 GS...........(%d)\n"
                   "F 850 GS...........(%d)\n"
                   "F 850 GS Adventure.(%d)\n"
                   "S 1000 XR..........(%d)\n"
                   "R 1250 GS..........(%d)\n"
                   "R 1250 GS ADVENTURE(%d)\n"
                   , vetor[0],
                vetor[1],vetor[2],vetor[3],vetor[4],vetor[5],vetor[6]);
            break;

        case 2:
            system("cls");
            printf("BMW\nROADSTER\n"
                   "G 310 R.(%d)\n"
                   "S 1000 R(%d)\n", vetor[0],
                vetor[1]);
            break;
        case 3:
            system("cls");
            printf("BMW\nSPORT\n"
                   "S 1000 RR(1)");
            break;
        case 4:
            system("cls");
            printf("BMW\nTOUR\n"
                   "K 1600 GTL(%d)\n"
                   "K 1600 B(%d)\n"
                   "R 1250 RT(%d)\n",
                    vetor[0],
                vetor[1],vetor[2]);
            }

            break;//case3

        case 4:system("cls");
            printf("Harley-Davidson\n"
                   "Bad Boy.....................................(%d)\n"
                   "BREAKOUT....................................(%d)\n"
                   "BREAKOUT 114................................(%d)\n"
                   "DELUXE......................................(%d)\n"
                   "DYNA FAT BOB FXDF...........................(%d)\n"
                   "DYNA LOW RIDER..............................(%d)\n"
                   "DYNA STREET BOB.............................(%d)\n"
                   "DYNA SUPER GLIDE CUSTOM.....................(%d)\n"
                   "DYNA SUPER GLIDE FXD........................(%d)\n"
                   "DYNA SWITCHBACK.............................(%d)\n"
                   "DYNA WIDE GLIDE FXDWG.......................(%d)\n"
                   "ELECTRA GLIDE CLASSIC.......................(%d)\n"
                   "ELECTRA GLIDE SCREAMIN EAGLE................(%d)\n"
                   "ELECTRA GLIDE ULTRA CLASSIC CVO.............(%d)\n"
                   "ELECTRA GLIDE ULTRA CLASSIC.................(%d)\n"
                   "ELECTRA FLIDE ULTRA CLASSIC SCREAMIN EAGLE..(%d)\n"
                   "ELECTRA GLIDE ULTRA LIMITED.................(%d)\n"
                   "FLH 1200....................................(%d)\n"
                   "FLH 1340....................................(%d)\n"
                   "FXDR 114(SOFTAIL)...........................(%d)\n"
                   "FAST........................................(%d)\n"
                   "FAT B0B 107.................................(%d)\n"
                   "FAT BOB 114.................................(%d)\n"
                   "FAT BOY 107.................................(%d)\n"
                   "FAT BOY 114.................................(%d)\n"
                   "HERITAGE CLASSIC............................(%d)\n"
                   "LOW RIDERS..................................(%d)\n",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5],
                    vetor[6],vetor[7],vetor[8],vetor[9],vetor[10],vetor[11],
                    vetor[12],vetor[13],vetor[14],vetor[15],
                    vetor[16],vetor[17],vetor[18],vetor[19],vetor[20],vetor[21],
                    vetor[22],vetor[23],vetor[24],vetor[25],vetor[26],vetor[27]);

            break; //case4
            }
    break;
    //CARROS---------------------------------------
   case 2:


     printf("BANCO DE DADOS\n\n");
    printf("CARROS");
    printf("\nMarcas\n\n");
    printf("\n---Toyota(%d)",vetor[0]);
    printf("\n---Volkswagen(%d)",vetor[1]);
    printf( "\n---Ford(%d)",vetor[2]);
    printf("\n---Honda(%d)",vetor[3]);
    printf("\n---Hyundai(%d)",vetor[4]);
    printf("\n---Nissan(%d)",vetor[5]);
    printf("\n---Chevrolet(%d)",vetor[6]);
    printf("\n---Kia(%d)",vetor[7]);
    printf("\n---Mercedes-Benz(%d)",vetor[8]);
    printf("\n---BMW(%d)\n\n",vetor[9]);

scanf("%d",&escolha);


   switch (escolha)
{
   case 1:
       system("cls");
     printf("TOYOTA\n"
            "CAMIONETES e SUVS(1)\nPASSEIOS(2)\n"
            "SAIR(0)\n");
            scanf("%d",&escolha);
            switch (escolha)
            {
            case 1:
                system("cls");
                printf("TOYOTA\n");
                printf("CAMIONETES E SUVS:\n\n");
                printf("-Corola-cross(1)\n"
                       "-RAV4(2)\n"
                       "-HILUX cabine simples(3)\n"
                       "-HILUX cabine dupla(4)\n"
                       "-SAIR(5)\n");
                       scanf("%d",&escolha);

            case 2:
                system("cls");
                printf("TOYOTA\n");
                printf("PASSEIOS:\n\n");
             printf("YARIS HATCH\n"
                    "YARIS SEDÃ\n"
                    "COROLLA\n"
                    "CAMRY\n"
                    "PRIUS\n");
                break;

            case 0:
                system("cls");
                printf("obrigado volte sempre.");}

    break;//fim do case 1

    case 2:
        system("cls");
    printf("Volkswagen\n");
    printf("\nGol(1)\n"
           "Voyage(2)\n"
            "Fox(3)\n"
            "Polo(4)\n"
            "Virtus(5)\n"
            "Nivus(6)\n"
            "T-Cross(7)\n"
            "Jetta(8)\n"
            "Tiguan Allspace(9)\n"
            "Saveiro(10)\n"
            "Amarok(11)\n"
            "Sair(0)");
    break;

    case 3:
        system("cls");
        printf( "Ford\n"
                "EcoSport.........................(%d)\n"
                "Ka...............................(%d)\n"
                "New Fiesta Hatch.................(%d)\n"
                "Ka Sedan.........................(%d)\n"
                "Ranger(Cabine Dupla).............(%d)\n"
                "Focus Hatch......................(%d)\n"
                "Fusion...........................(%d)\n"
                "Focus Sedan......................(%d)\n"
                "Ner Fiesta Sedan.................(%d)\n"
                "Ranger (Cabine Simples-Estendida)(%d)\n"
                "Edge.............................(%d)\n"
                "Mustang..........................(%d)\n"
                "Territory........................(%d)\n",
                vetor[0],
                vetor[1],vetor[2],vetor[3],vetor[4],
                vetor[5],vetor[6],vetor[7],vetor[8],
                vetor[9],vetor[10],vetor[11],vetor[12],
                vetor[13]);




        printf("Sair(0)");
        scanf("%d",&escolha);
                switch (escolha){
                case 0: system("cls");
                        printf("obrigado por me utilizar");
                        printf("\n\n\n");
                break;
        }
        break;
    case 4:
        system("cls");
        printf("Honda......(%d)\n"
               "Honda Civic(%d)\n"
               "Honda Fit..(%d)\n"
               "Honda Hrv..(%d)\n"
               "Honda City.(%d)\n"
               "CR-V.......(%d)\n"
               "WR-W.......(%d)\n"
               "Accord.....(%d)\n",
               vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5],
               vetor[6],vetor[7]);
        printf("Sair(0)");
        scanf("%d",&escolha);
        switch(escolha){
        case 0: system("cls");
                        printf("obrigado por me utilizar");
                        printf("\n\n\n");
        }
        break;
    case 5:
        system("cls");
        printf("Hyundai.(%d)\n"
               "HB20....(%d)\n"
               "HB20 S..(%d)\n"
               "Creta...(%d)\n"
               "Tucson..(%d)\n"
               "ix35....(%d)\n"
               "Santa Fe(%d)\n"
               "HB20X...(%d)\n"
               "Azera...(%d)\n"
               "Elantra.(%d)\n"
               "HR......(%d)\n",
              vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5],
               vetor[6],vetor[7],vetor[8],vetor[9],vetor[10],vetor[11] );
        printf("Sair(0)");
        scanf("%d",&escolha);

        switch(escolha){
        case 0: system("cls");
                        printf("obrigado por me utilizar");
                        printf("\n\n\n");
        }
        break;

    case 6:
        system("cls");
        printf("Nissan...(%d)\n"
               "Kicks....(%d)\n"
               "Versa....(%d)\n"
               "Sentra...(%d)\n"
               "March....(%d)\n"
               "Frontier.(%d)\n"
               "GT-R.....(%d)\n"
               "LEAF.....(%d)\n");
        printf("Sair(0)");
        scanf("%d",&escolha);

        switch(escolha)
        {
        case 0:
                        system("cls");
                        printf("obrigado por me utilizar");
                        printf("\n\n\n");
        break;
        }
        break;//hyundai nissan chevrolet

    case 7: system("cls");
            printf("Chevrolet\n"
                   "Onix..............(%d)\n"
                   "Prisma............(%d)\n"
                   "S10 Cabine Dupla..(%d)\n"
                   "Spin..............(%d)\n"
                   "Cruze.............(%d)\n"
                   "Cobalt............(%d)\n"
                   "Onix Plus.........(%d)\n"
                   "Tracker...........(%d)\n"
                   "Montana...........(%d)\n"
                   "Cruze Sport6......(%d)\n"
                   "S10 Cabine Simples(%d)\n"
                   "Camaro............(%d)\n"
                   "TrailBlazer.......(%d)\n"
                   "quinox............(%d)\n"
                   "Joy...............(%d)\n"
                   "Joy Plus..........(%d)\n"
                   "Bolt EV...........(%d)\n"
                   "Sair..............(%d)\n",
               vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5],
               vetor[6],vetor[7],vetor[8],vetor[9],vetor[10],vetor[11],
                    vetor[12],vetor[13],vetor[14],vetor[15],
                    vetor[16],vetor[17]);
            scanf("%d",&escolha);
            switch(escolha){
            case 0:
                        system("cls");
                        printf("obrigado por me utilizar");
                        printf("\n\n\n");
                        break;
            }

            break;
    case 8: system("cls");
            printf("Kia...........(%d)\n"
                   "Sportage......(%d)\n"
                   "Cerato........(%d)\n"
                   "Soul..........(%d)\n"
                   "Sorento.......(%d)\n"
                   "Picanto.......(%d)\n"
                   "Bongo.........(%d)\n"
                   "Rio...........(%d)\n"
                   "Mohave........(%d)\n"
                   "Grand Carnival(%d)\n"
                   "Stinger.......(%d)\n"
                   "Sair..........(0)\n"
                   "_________________\n"
                   "RESPOSTA:",
                   vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5],
                    vetor[6],vetor[7],vetor[8],vetor[9],vetor[10]);
            scanf("%d",&escolha);

            switch(escolha){
        case 0:
            printf("obrigado por me utilizar");
                        printf("\n\n\n");
            }
            break;
    case 9: system("cls");
            printf("Mercedez-Benz\n"
                   "Classe C........(%d)\n"
                   "Sprinter........(%d)\n"
                   "Classe GLA......(%d)\n"
                   "Classe A........(%d)\n"
                   "Classe CLA......(%d)\n"
                   "Classe B........(%d)\n"
                   "Classe E........(%d)\n"
                   "Classe GLC......(%d)\n"
                   "Classe C AMG....(%d)\n"
                   "Classe GLA AMG..(%d)\n"
                   "Classe GLE......(%d)\n"
                   "Classe A AMG....(%d)\n"
                   "Classe C Touring(%d)\n"
                   "Classe GLC AMG..(%d)\n"
                   "Classe CLA AMG..(%d)\n"
                   "Classe GLE AMG..(%d)\n"
                   "Classe CLS......(%d)\n"
                   "Classe S AMG....(%d)\n"
                   "Classe G AMG....(%d)\n"
                   "Classe S........(%d)\n"
                   "Classe E AMG....(%d)\n"
                   "Classe SLC AMG..(%d)\n"
                   "Classe  E Cabrio(%d)\n"
                   "Classe SLC......(%d)\n"
                   "Classe GLS AMG..(%d)\n"
                   "Classe E Coupé..(%d)\n"
                   "Classe SL.......(%d)\n"
                   "Classe SL AMG...(%d)\n"
                   "Classe GLS......(%d)\n"
                   "Vito............(%d)\n"
                   "AMG GT..........(%d)\n"
                   "AMG GT Roadster.(%d)\n"
                   "GLB 200.........(%d)\n",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5],
                    vetor[6],vetor[7],vetor[8],vetor[9],vetor[10],vetor[11],
                    vetor[12],vetor[13],vetor[14],vetor[15],
                    vetor[16],vetor[17],vetor[18],vetor[19],vetor[20],vetor[21],
                    vetor[22],vetor[23],vetor[24],vetor[25],vetor[26],vetor[27],
                    vetor[28],vetor[29],vetor[30],vetor[31],vetor[32]
                   );
            printf("Sair(0)");
            scanf("%d",&escolha);

            switch(escolha)
            {
            case 0:
                system("cls");
                        printf("obrigado por me utilizar");
                        printf("\n\n\n");
                break;
            }
            break;
    case 10: system("cls");
     setlocale(LC_ALL, "Portuguese");
             printf("BMW\n"
                    "\n---BMW Série 1..................(%d)"
                    "\n---BMW Série 2 Gran Coupé.......(%d)"
                    "\n---BMW Série 3 Sedã.............(%d)"
                    "\n---BMW Série 4 Cabrio...........(%d)"
                    "\n---BMW Série 5 Sedã.............(%d)"
                    "\n---BMW Série 7 Plug-in Híbrido..(%d)"
                    "\n---BMW Série 8 Coupé............(%d)"
                    "\n---BMW X1.......................(%d)"
                    "\n---BMW X2.......................(%d)"
                    "\n---BMW X3......................(%d)"
                    "\n---BMW X4......................(%d)"
                    "\n---BMW X5......................(%d)"
                    "\n---BMW X6......................(%d)"
                    "\n---BMW X7......................(%d)"
                    "\n---BMW Z4......................(%d)"
                    "\n---Z4 M40I.....................(%d)"
                    "\n---BMW M135I xDrive............(%d)"
                    "\n--M235i xDrive Gran Coupé......(%d)"
                    "\n---BMW M3 Sedan................(%d)"
                    "\n---BMW M340I xDrive............(%d)"
                    "\n--BMW M850i xDrive Coupe.......(%d)"
                    "\n--BMW X2 M35i..................(%d)"
                    "\n--Z4 M40i......................(%d)"
                    "\n--BMW M2 Competition...........(%d)"
                    "\n--BMW M5.......................(%d)"
                    "\n--BMW M8 Gran Coupé Competition(%d)"
                    "\n--BMW X3 M Competition.........(%d)"
                    "\n--BMW X4 M Competition.........(%d)"
                    "\n--BMW X6 M.....................(%d)"
                    "\n--BMW i3.......................(%d)"
                    "\n--BMW Série 3..................(%d)"
                    "\n--BMW Série 5..................(%d)"
                    "\n--BMW Série 7..................(%d)"
                    "\n--BMW X3 xDrive30e.............(%d)"
                    "\n--BMW X5.......................(%d)"
                    "\n\nSair(0)",
                    vetor[0],vetor[1],vetor[2],vetor[3],vetor[4],vetor[5],
                    vetor[6],vetor[7],vetor[8],vetor[9],vetor[10],vetor[11],
                    vetor[12],vetor[13],vetor[14],vetor[15],
                    vetor[16],vetor[17],vetor[18],vetor[19],vetor[20],vetor[21],
                    vetor[22],vetor[23],vetor[24],vetor[25],vetor[26],vetor[27],
                    vetor[28],vetor[29],vetor[30],vetor[31],vetor[32],vetor[33],
                    vetor[34],vetor[35]);
             scanf("%d",&escolha);

             switch(escolha)
             {

                 case 0: system("cls");
                        printf("obrigado por me utilizar");
                        printf("\n\n\n");
             }
             break;
   }
}
}

