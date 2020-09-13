
*
   INTRODUÇÃO A FUNÇÃO
 
	Uma função é um bloco de código que executa uma tarefa específica.


	Tipos de função

 
	Existem dois tipos de função na programação C:

	-> Funções de biblioteca padrão
	-> Funções definidas pelo usuário / esta que iremos abordar é mais comum
	
	 
    #include <stdio.h>
    
    
	void nomeFuncao ()
	{	
		... .. ...
		... .. ...
	}

	int main ()
	{
		... .. ...
		... .. ...

		nomeFuncao  ();
    
		... .. ...
		... .. ...
	}
	
	
	A execução de um programa C começa a partir da main()função.

	Quando o compilador encontra nomeFuncao ();, o controle do programa salta para

	nomeFuncao  ()
	
	E, o compilador começa a executar os códigos internos nomeFuncao().
 
    O controle do programa volta para a main() função uma vez que o código dentro da definição da função é executado.
 
	
	Vantagens da função definida pelo usuário
	
	1 - O programa será mais fácil de entender, manter e depurar.
	2 - Códigos reutilizáveis ​​que podem ser usados ​​em outros programas
	3 - Um grande programa pode ser dividido em módulos menores. Portanto, 
	um grande projeto pode ser dividido entre muitos programadores.
	
 */



#include <stdio.h>


int main()
{
	
	
	return 0;
}
