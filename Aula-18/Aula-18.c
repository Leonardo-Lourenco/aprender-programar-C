#include<stdio.h> 


// Caixa Eletrônico


int main(){ 
	
	int opcao;
	
	float depositar, saque, saldo = 500;
	
	
	printf("Bem vindo Canal Coffee Tag - Exercício Caixa Eletrônico :\n");
	
	printf("1 - Deposito na conta \n");
	printf("2 -  Sacar dinheiro da conta \n");
	printf("3 - Sair \n \n");
	
	printf("Selecione  a opção desejada:  ");
	scanf("%i", &opcao);
	
	switch(opcao){
		
		case 1:
		
			printf("Deseja depositar quanto na sua conta? \n");
			scanf("%f", &depositar);
			
			saldo = saldo + depositar;
			// saldo += depositar;
			
			printf("Deposito realizado com SUCESSO seu saldo agora é %.2f", saldo);
			
			
			break;
			
			
		case 2:
			
			printf("Informe quanto você deseja sacar? ");
			scanf("%f", &saque);
			
			if(saque > saldo){
				
				printf("Saldo insuficiente");
				
				
				}else{
				
					saldo =  saldo - saque;
					//saldp -= saque;
					
					printf("Você sacou %.2f", saque);
				
				
				}
				
		
		    break;
		    
		    case 3: ; break;
		    
		    
		    default: printf("Opção não existe ");
		
		
		}
	

	return 0; 
	
	}
