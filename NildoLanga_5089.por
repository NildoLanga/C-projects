programa
{
	
	funcao inicio()
	{
		/*
    Titulo do Projeto; Quiz em Portugol
    Autor; Nildo Joao Salomao Langa
    Data e hora; 2.4.2026  22h:00min
    Descriçao: Quiz com 2 niveis de dificuldade. o codigo foi feito recorrendo a estruturas de repetiçoes e 
    "Ses" encadeados. É pseudo-codigo com muitas semelhanças com a linguagem C

    */
		inteiro opcao
		caracter repetir
		//logico resposta
		 logico V = verdadeiro
		 logico F = falso
		 inteiro VERITA = 0
		 inteiro falsidade = 0
		 logico resposta = verdadeiro
		 //logico resposta1 = verdadeiro
		 //logico resposta2 = verdadeiro
		 inteiro contador_vezes=1
		 
		//inteiro perg1, perg2, perg3, perg4, perg5, perg6, perg7, perg8, perg9, perg10
		//inteiro perg11, perg12, perg13, perg14, perg15, perg16, perg17, perg18, perg19, perg20
		

		faca
		
		{
			
		limpa()
		para(inteiro i=1; i<=40; i++)
			escreva("*")
			escreva("\n") 
	//escreva("******************************************\n")
			escreva("* QUIS V1.0 NILDO LANGA | MENU INICIAL *\n")
		escreva("****************************************\n\n")

escreva("1 - nivel de dificuldade(1 ou 2)\n2 - instrucoes\n3 - sair do programa\nR:")

leia(opcao)
	/*se(resposta==verdadeiro){
VERITA++
//leia(VERITA)
	}
	senao{
falsidade++
//leia(falsidade)
	} */
	
	

escolha(opcao){

caso 1:

se (opcao==1){
	inteiro nivel
	nivel=0


	escreva("escolhe o nivel:\n")
	leia(nivel)


	//escreva(" as respostas deve estar obrigatoriamente neste formato em mausculas verdadeiro/falso\n")

escolha(nivel){

	caso 1: escreva("1- opcao para iniciantes\n")
faca{
	escreva(" pergunta 1 a tela é um periferico\n")
 
	leia(resposta)
  
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)


	}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva(" pergunta 2 o cabo coaxial é um cabo de rede de dados\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)

faca{
	escreva("pergunta 3 O sistema operacional controla o hardware\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)

faca{
	escreva("pergunta 4 Memória RAM é volátil\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 5 O mouse é um dispositivo de entrada\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 6  O disco rígido armazena dados permanentemente\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 7  O BIOS é executado antes do sistema operacional\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)

faca{
	escreva("pergunta 8   O processador (CPU) executa instruções\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 9  A linguagem C é interpretada\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)

faca{
	escreva("pergunta 10  A linguagem VBA é interpretada\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)

	//leia(VERITA)
		escreva("tens\t", VERITA,"\tVERDADEIRAS\n")
//leia(falsidade)
escreva("tens\t", falsidade,"\tFALSAS\n")

	escreva("queres continuar? [s]im, [n]ão\n")
		leia(repetir)


	pare

	caso 2: 
	escreva("2- opcao Pro\n")
	faca{
  escreva("pergunta 1  O protocolo TCP garante entrega ordenada dos pacotes\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva(" pergunta 2 O algoritmo quicksort tem complexidade\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 3  Um ponteiro pode apontar para qualquer tipo sem cast\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 4 O modelo OSI possui 7 camadas\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 5 O Git é um sistema de controlo de versões distribuído\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva(" pergunta 6 Em C, a palavrachave Statit é reservada\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 7  A criptografia RSA utiliza chaves simétricas\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 8  python é uma linguagem intepretada\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 9  um byte tem 8 bits \n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)
faca{
	escreva("pergunta 10 AI é um conjunto de programas informaticos\n")
	leia(resposta)
	se(resposta==verdadeiro){
	VERITA++
	
}senao{
	falsidade++
	//leia(falsidade)
}
} enquanto (resposta!=verdadeiro e resposta!=falso)

	
escreva("tens\t", VERITA,"\tVERDADEIRAS\n")
escreva("tens\t", falsidade,"\tFALSAS\n")
escreva("queres continuar? [s]im, [n]ão\n")
		leia(repetir)

	/*se(resposta==verdadeiro){
 VERITA++
	}
	senao{
falsidade++
	} 
escreva("tens quantas verdadeiras\n" , VERITA)
escreva("tens quantas falsas\n" , falsidade)*/
	pare
	
	}
	}

	caso 2:
	se(opcao==2){
	escreva("Aqui tens a instruçoes para o teu quiz\n")
escreva("tenha atençao que so sao aceite respostas;\n")
escreva(" verdadeiro ou falso\n")
pare
}
caso 3:
se (opcao==3){
	escreva("queres contunar a jogar? [s]im, [n]ão\n")
		leia(repetir)
}
}


		}enquanto(repetir=='s' ou repetir=='S')
	se (repetir=='s' ou repetir=='S'){
		contador_vezes++
	}
		se(repetir=='n' ou repetir=='N'){
			escreva("obrigado, espero pela presença\n")
			escreva("Jogaste\t",contador_vezes, "x\n")
		}
	
	}
}
	
