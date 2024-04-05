#include <stdio.h>

	void myFunction() {
	int A = 5;
	
	int B = 4;
	
	printf("Valor de A: %d\n\n\n", A);
	printf("Valor de B: %d\n\n\n", B);
	
	
	
 	A = B;
 	
 	printf("Valor de A mudado: %d\n\n\n", A);
 	
}
	
	
	
	
	
	void function2() {
		
		int	loop;
		
		float array[11] = {3.14, 3.15, 3.16, 3.17, 3.18, 3.19, 3.20, 3.21, 3.22, 3.23, 3.24, 3.25};
		
		
   for(loop = 0; loop < 11; loop++)
      printf("array de float: %f \n\n", array[loop]);
   
}


	void functionMatrix(){
		
{
		  int matriz[3][3],i, j;
		  
		  printf ("\nDigite valor para os elementos da matriz\n\n");
		  
		  for ( i=0; i<3; i++ )
		    for ( j=0; j<3; j++ )
		    {
		      printf ("\nElemento[%d][%d] = ", i, j);
		      scanf ("%d", &matriz[ i ][ j ]);
		    }
		  
		  printf("\n\n******************* Saida de Dados ********************* \n\n");
		  
		  for ( i=0; i<3; i++ )
		    for ( j=0; j<3; j++ )
		    {
		      printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
		    }
		  
		  getch();
		  return(0);
			
		}
		
		
		
		
		
		
	}







	

int main() {
	int loop2;
	
	int inteiro = 2;
	
	char character[] = "teste";
	
	float floate = 3.14;
	
	int *ptrI = &inteiro;
	
	
	int *ptrC = &character;
	
	
	float *ptrF;
	
	ptrF = &floate;
	
	printf("valor de inteiro: %d\n", inteiro);
	
	printf("valor de char: %s\n", character);
	
	printf("valor de floate: %f\n\n\n", floate);
	
	
	
	printf("Endereco na memoria de inteiro: %p\n", ptrI);
	
	printf("Endereco na memoria de char: %p\n", ptrC);
	
	printf("Endereco na memoria de float: %p\n\n\n\n" ,ptrF);
	
	
	
	inteiro += 2;
	
	floate += 3.14;
	
	character[5] = "testado";
	
	
	printf("valor de inteiro Mudado: %d\n", inteiro);
	
	printf("valor de char Mudado: %s\n", character);
	
	printf("valor de float Mudado: %f\n\n\n", floate);
	
	
	
	
*ptrI = inteiro;
	
	
*ptrC = character;
	
	
*ptrF = floate;


	
	
	printf("Endereco na memoria de inteiro Mudado: %\p\n", ptrI);
	
	printf("Endereco na memoria de character Mudado: %\p\n", ptrC);
	
	printf("Endereco na memoria de floate Mudado: %\p\n\n\n", ptrF);
	
	
	
	myFunction();
	function2();
	functionMatrix();
	
	int inteiro2 = 6;

		if(inteiro>inteiro2){
		
		printf("o maior valor eh inteiro: %d\n\n\n\n",inteiro);
		printf("o menor valor eh inteiro2: %d\n\n\n\n",inteiro2);
	
	}
	
		if(inteiro<inteiro2){
		
		printf("o maior valor eh inteiro2: %d\n\n\n\n",inteiro2);
		printf("o menor valor eh inteiro: %d\n\n\n\n",inteiro);}
	
	
	
	
	
	
	
	return 0;
}
