// 2.	Elaborar o algoritmo em linguagem C com o objetivo de gerar o resultado do teste de perfil representacional de um aluno hipot�tico, cujos dados s�o:
//		Nome 		: DIN DJARIN
//		PRONTU�RIO	: S07102Z
// "	O algoritmo dever� solicitar o percentual de cada um dos sistemas representacionais (VISUAL, CINEST�SICO, AUDITIVO e DIGITAL).
// "	Depois disso, dever� ser exibida na tela o resultado da avalia��o conforme exemplificado nas telas seguintes.
// "	Em seguida, dever� ser gerado o resultado da avalia��o em arquivo texto, cujo nome deve ser: RESULTADO_DIN_DJARIN_S07102Z.TXT.
// "	Gerado o comprovante, o algoritmo dever� exibi-lo num editor de texto para que o usu�rio possa imprimi-lo.


// Bibliotecas /
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Vari�veis globais /
int vis;
int cin;
int aud;
int dig;
int total;
char resultado[3];
FILE * RESULT;

// Corpo do programa /

int main ()
{
	
	// Interface inicial do programa /
	printf("================================================");
	printf("\n            Painel Representacional           ");
	printf("\n================================================");
	printf("\n\n             Seja bem-vindo(a)!");
	printf("\n\n   Por favor, insira os respectivos porcentuais\n   referentes ao seu perfil representacional.");
	fflush(stdin);
	
	// Solicita o percentual de cada sistema representacional e armazena nas respectivas vari�veis/
	printf("\n\n Visual: ");
	fflush(stdin);
	scanf("%i", &vis);
	fflush(stdin);
	printf("\n Cinestesico: ");
	fflush(stdin);
	scanf("%i", &cin);
	printf("\n Auditivo: ");
	fflush(stdin);
	scanf("%i", &aud);
	printf("\n Digital: ");
	fflush(stdin);
	scanf("%i", &dig);
	
	// F�rmula para confirmar total inserido / 
	total = vis+cin+aud+dig;
	
	// A partir do total inserido, a condicional IF decide se o programa continua rodando ou d� erro /
	if (total != 100)
	{
		printf("\nErro: Total de soma diferente de 100%%, por favor, tente novamente");
		exit (0);
		getch();
    }

	// Printa o resultado /
	printf("\n=================================================");
	printf("\n        Perfil de Din Djarin - S07102Z           ");
	printf("\n=================================================");
	printf("\n\n   Verifique seu perfil representacional abaixo"  );
	
	// Estrutura condicional para decidir qual perfil do usu�rio baseado nos dados inseridos /  
	    if (vis>aud && vis>cin && vis>dig){
    	printf("\n\n             Seu perfil e VISUAL");
	}
		if (aud>vis && aud>cin && aud>dig){
    	printf("\n\n             Seu perfil e AUDITIVO");
	}
		if (cin>vis && cin>aud && cin>dig){
    	printf("\n\n             Seu perfil e CINESTESICO");
	}
		if (dig>vis && dig>cin && dig>aud){
    	printf("\n\n             Seu perfil e DIGITAL");
	}
	printf("\n=================================================");
	getch();
	
	// Vari�vel RESULT manipula o arquivo para gerar comprovante em texto /
	RESULT = fopen("RESULTADO_DIN_DJARIN_S07102Z.TXT", "w");
	
	fprintf(RESULT, "\n=================================================");
    fprintf(RESULT, "\n        Perfil de Din Djarin - S07102Z           ");
	fprintf(RESULT, "\n=================================================");
	fprintf(RESULT,"\n\n   Verifique seu perfil representacional abaixo" );
	
		if (vis>aud && vis>cin && vis>dig){
    	fprintf(RESULT, "\n\n             Seu perfil e VISUAL");
	}
		if (aud>vis && aud>cin && aud>dig){
    	fprintf(RESULT, "\n\n             Seu perfil e AUDITIVO");
	}
		if (cin>vis && cin>aud && cin>dig){
    	fprintf(RESULT, "\n\n             Seu perfil e CINESTESICO");
	}
		if (dig>vis && dig>cin && dig>aud){
    	fprintf(RESULT, "\n\n             Seu perfil e DIGITAL");
	}
	fprintf(RESULT, "\n=================================================");
	
	fclose(RESULT);
	
	system ("Notepad RESULTADO_DIN_DJARIN_S07102Z.TXT");
	getch();
return(0);	
}


