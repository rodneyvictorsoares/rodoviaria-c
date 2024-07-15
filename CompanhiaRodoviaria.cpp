#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct tm{
		int tm_sec;
		int tm_min;
		int tm_hora;
		int tm_dia;
		int tm_mes;
		int tm_ano;
		int tm_diaSemana;
		int tm_diaAno;
	};	
	
	struct tm *data_hora_atual;
	time_t segundos;
	time(&segundos);
	
	
	int qtdNormal, pMeia, pGratuidade, pTotal;
	int pNormal2, pMeia2, pGratuidade2, pTotal2;
	int pNormal3, pMeia3, pGratuidade3, pTotal3;
	int pNormal4, pMeia4, pGratuidade4, pTotal4;
	
	int lugares[12][4]; 
	int onibus2[12][4];
	int onibus3[12][4]; 
	int onibus4[12][4]; 
	
	int l, c, menu, destino, tipo, soma, qtd, lugar, t,qa;
	
	double precoSalvador, precoSaoLuiz, precoCuritiba, precoRio, precoMeias;
	
	char opcaoTarifa;
	
	qtd = 0;
	soma = 0;
	c = 0;
	l = 0;
	destino = 0;
	menu = 0;
	//****************Indicadores do Onibus para Salvador*******************
	qtdNormal = 0;
	pMeia = 0;
	pGratuidade = 0;
	pTotal = 0;
	//**********************************************************************
	//****************Indicadores do Onibus para Sao Luiz*******************
	pNormal2 = 0;
	pMeia2 = 0;
	pGratuidade2 = 0;
	pTotal2 = 0;
	//**********************************************************************
	//****************Indicadores do Onibus para Curitiba*******************
	pNormal3 = 0;
	pMeia3 = 0;
	pGratuidade3 = 0;
	pTotal3 = 0;
	//**********************************************************************
	//**********************************************************************
	//****************Indicadores do Onibus para Rio de Janeiro*******************
	pNormal4 = 0;
	pMeia4 = 0;
	pGratuidade4 = 0;
	pTotal4 = 0;
	//**********************************************************************
	precoSalvador = 500.0;
	precoSaoLuiz = 200.0;
	precoCuritiba = 1000.0;
	precoRio = 700.0;
	precoMeias = 0.0;
	tipo = 0;
	lugar = 0;
	t = 0;
	
	//varrer todos os lugares do onibus
	//Salvador
	qtd = 0;
	for(l=0;l<12;l++){
		for(c=0;c<4;c++){
		qtd++;
		lugares[l][c] = qtd;
		}
	}
	
	//sao Luiz
	qtd = 0;
	for(l=0;l<12;l++){
		for(c=0;c<4;c++){
		qtd++;
		onibus2[l][c] = qtd;
		}
	}
	
	//curitiba
	qtd = 0;
	for(l=0;l<12;l++){
		for(c=0;c<4;c++){
		qtd++;
		onibus3[l][c] = qtd;
		}
	}
	
	//rio
	qtd = 0;
	for(l=0;l<12;l++){
		for(c=0;c<4;c++){
		qtd++;
		onibus4[l][c] = qtd;
		}
	}

	printf("Deseja atualizar o preco das passagem(digite s para sim): ");
	scanf("%c", &opcaoTarifa);
	printf("\n");
	
	if(opcaoTarifa == 's'){
		system("cls");
		printf("Defina o valor da Passagem para Salvador: ");
		scanf("%d", &precoSalvador);
		printf("\n");
		
		printf("Defina o valor da Passagem para Sao Luiz: ");
		scanf("%d", &precoSaoLuiz);
		printf("\n");
		
		printf("Defina o valor da Passagem para Curitiba: ");
		scanf("%d", &precoCuritiba);
		printf("\n");

		printf("Defina o valor da Passagem para Rio de Janeiro: ");
		scanf("%d", &precoRio);
		printf("\n");	
	}
	
	
	
	while(menu != 7){
		inicioMenuPassagem:
		system("cls");
		system("color f5");
		printf("\n-------- Companhia de Viagens Legais--------");
		printf("\n   --------Sistema de Passagens Rodoviarias Unip----------------");
		printf("\n 1 - Passagens Vendidas");
		printf("\n 2 - Gratuidade vendida");
		printf("\n 3 - Estudante Vendidas");
		printf("\n 4 - Vender Passagens");
		printf("\n 5 - Saldo Arrecadado");
		printf("\n 6 - Horario das Viagens");
		printf("\n 7 - Sair do Sistema");
		printf("\n");
		printf("\n Diga a sua escolha: ");
		scanf("%d", &menu);
		system("cls");
		switch(menu){
			case 1:
				inicioMapa:
					printf("\nEscolha o Destino");
					printf("\n1 - Salvador");
					printf("\n2 - Sao Luiz");
					printf("\n3 - Curitiba");
					printf("\n4 - Rio de Janeiro");
					printf("\n5 - Voltar");
					printf("\n");
					printf("\nQual a Opcao: ");
					scanf("%d", &destino);
					system("cls");
					switch(destino){
						case 1:
							printf("\nSalvador");
							printf("\n");
							for(l=0;l<12;l++){
								for(c=0;c<4;c++){
									if(lugares[l][c] == 0){
										printf("[ X] ");
									}else{
										printf("[ %d]",lugares[l][c]);
									}
								}
								printf("\n");
							}
							printf("\n");
							system("pause");
							break;
						case 2:
							printf("\nSao Luiz");
							printf("\n");
							for(l=0;l<12;l++){
								for(c=0;c<4;c++){
									if(onibus2[l][c] == 0){
										printf("[ X] ");
									}else{
										printf("[ %d]",onibus2[l][c]);
									}
								}
								printf("\n");
							}
							printf("\n");
							system("pause");
							break;
						case 3:
							printf("\nCuritiba");
							printf("\n");
							for(l=0;l<12;l++){
								for(c=0;c<4;c++){
									if(onibus3[l][c] == 0){
										printf("[ X] ");
									}else{
										printf("[ %d]",onibus3[l][c]);
									}
								}
								printf("\n");
							}
							printf("\n");
							system("pause");
							break;
						case 4:
							printf("\nRio de Janeiro");
							printf("\n");
							for(l=0;l<12;l++){
								for(c=0;c<4;c++){
									if(onibus4[l][c] == 0){
										printf("[ X] ");
									}else{
										printf("[ %d]",onibus4[l][c]);
									}
								}
								printf("\n");
							}
							printf("\n");
							system("pause");
							break;
						case 5:
							printf("\nVoltando ao menu Anterior");
							printf("\n");
							system("pause");
							break;
						default:
							goto inicioMapa;
							printf("\n");
							system("pause");
							break;
					}
				
				break;
			case 2:
				inicioGratuidade:
					printf("\nEscolha o Destino");
					printf("\n1 - Salvador");
					printf("\n2 - Sao Luiz");
					printf("\n3 - Curitiba");
					printf("\n4 - Rio de Janeiro");
					printf("\n5 - Voltar");
					printf("\n");
					printf("\nQual a Opcao: ");
					scanf("%d", &destino);
					system("cls");
					switch(destino){
						case 1:
							printf("\nPassagens Melhor Idade para Salvador: %d", pGratuidade);
							printf("\n");
							system("pause");
							break;
						case 2:
							printf("\nPassagens Melhor Idade para Sao Luiz: %d", pGratuidade2);
							printf("\n");
							system("pause");
							break;
						case 3:
							printf("\nPassagens Melhor Idade para Curitiba: %d", pGratuidade3);
							printf("\n");
							system("pause");
							break;
						case 4:
							printf("\nPassagens Melhor Idade para Rio de Janeiro: %d", pGratuidade4);
							printf("\n");
							system("pause");
							break;
						case 5:
							printf("\nVoltando ao menu Anterior");
							printf("\n");
							system("pause");
							break;
						default:
							goto inicioGratuidade;
							printf("\n");
							system("pause");
							break;
					}
					
				
				break;
			case 3:
				inicioMeiaPassagem:
					printf("\nEscolha o Destino");
					printf("\n1 - Salvador");
					printf("\n2 - Sao Luiz");
					printf("\n3 - Curitiba");
					printf("\n4 - Rio de Janeiro");
					printf("\n5 - Voltar");
					printf("\n");
					printf("\nQual a Opcao: ");
					scanf("%d", &destino);
					system("cls");
					switch(destino){
						case 1:
							printf("\nMeias Passagens Salvador %d", pMeia);
							printf("\n");
							system("pause");
							break;
						case 2:
							printf("\nMeias Passagens Sao Luiz %d", pMeia2);
							printf("\n");
							system("pause");
							break;
						case 3:
							printf("\nMeias Passagens Curitiba %d", pMeia3);
							printf("\n");
							system("pause");
							break;
						case 4:
							printf("\nMeias Passagens Rio de Janeiro %d", pMeia4);
							printf("\n");
							system("pause");
							break;
						case 5:
							printf("\nVoltando ao menu Anterior");
							printf("\n");
							system("pause");
							break;
						default:
							goto inicioMeiaPassagem;
							printf("\n");
							system("pause");
							break;
					}
				
				break;
			case 4:
				inicioVendas:
					printf("\nEscolha o Destino");
					printf("\n1 - Salvador");
					printf("\n2 - Sao Luiz");
					printf("\n3 - Curitiba");
					printf("\n4 - Rio de Janeiro");
					printf("\n5 - Voltar");
					printf("\n");
					printf("\nQual a Opcao: ");
					scanf("%d", &destino);
					system("cls");
					switch(destino){
						case 1:
							iniSalvador:
								printf("\nEscolha o tipo de passagem");
								printf("\n1 - Gratuidade");
								printf("\n2 - Meia");
								printf("\n3 - Inteira");
								printf("\n4 - Voltar");
								printf("\n");
								printf("\nQual a Opcao: ");
								scanf("%d", &tipo);
								system("cls");
								switch(tipo){
									case 1:
										if(pGratuidade < 2){
											cadeira:
											printf("\nGratuidade do Idoso");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(lugares[l][c] == lugar){
															lugares[l][c] = 0;
															pGratuidade++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto cadeira;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto cadeira;
											}
										}else{
											printf("\nGratuidades esgotadas!");
											printf("\n");
											system("pause");
											goto iniSalvador;
										}
										break;
									case 2:
										cadeiraMeia:
											printf("\nMeia de Estudante");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(lugares[l][c] == lugar){
															lugares[l][c] = 0;
															pMeia++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto cadeiraMeia;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto cadeiraMeia;
											}
										break;
									case 3:
										Inteira:
											printf("\nPassagem Convencional");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(lugares[l][c] == lugar){
															lugares[l][c] = 0;
															qtdNormal++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto Inteira;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto Inteira;
											}
										break;
									case 4:
										printf("\nVoltando ao menu anterior!");
										printf("\n");
										system("pause");
										break;
									default:
										break;
								}
						break;
						case 2:
							iniSaoLuiz:
								printf("\nEscolha o tipo de passagem");
								printf("\n1 - Gratuidade");
								printf("\n2 - Meia");
								printf("\n3 - Inteira");
								printf("\n4 - Voltar");
								printf("\n");
								printf("\nQual a Opcao: ");
								scanf("%d", &tipo);
								system("cls");
								switch(tipo){
									case 1:
										if(pGratuidade2 < 2){
											cadeira2:
											printf("\nGratuidade do Idoso");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(onibus2[l][c] == lugar){
															onibus2[l][c] = 0;
															pGratuidade2++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto cadeira2;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto cadeira2;
											}
										}else{
											printf("\nGratuidades esgotadas!");
											printf("\n");
											system("pause");
											goto iniSaoLuiz;
										}
										break;
									case 2:
										cadeiraMeia2:
											printf("\nMeia de Estudante");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(onibus2[l][c] == lugar){
															onibus2[l][c] = 0;
															pMeia2++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto cadeiraMeia2;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto cadeiraMeia2;
											}
										break;
									case 3:
										Inteira2:
											printf("\nPassagem Convencional");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(onibus2[l][c] == lugar){
															onibus2[l][c] = 0;
															pNormal2++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto Inteira2;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto Inteira2;
											}
										break;
									case 4:
										printf("\nVoltando ao menu anterior!");
										printf("\n");
										system("pause");
										break;
									default:
										break;
								}
						break;
						case 3:
							iniCuritiba:
								printf("\nEscolha o tipo de passagem");
								printf("\n1 - Gratuidade");
								printf("\n2 - Meia");
								printf("\n3 - Inteira");
								printf("\n4 - Voltar");
								printf("\n");
								printf("\nQual a Opcao: ");
								scanf("%d", &tipo);
								system("cls");
								switch(tipo){
									case 1:
										if(pGratuidade3 < 2){
											cadeira3:
											printf("\nGratuidade do Idoso");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(onibus3[l][c] == lugar){
															onibus3[l][c] = 0;
															pGratuidade3++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto cadeira3;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto cadeira3;
											}
										}else{
											printf("\nGratuidades esgotadas!");
											printf("\n");
											system("pause");
											goto iniCuritiba;
										}
										break;
									case 2:
										cadeiraMeia3:
											printf("\nMeia de Estudante");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(onibus3[l][c] == lugar){
															onibus3[l][c] = 0;
															pMeia3++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto cadeiraMeia3;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto cadeiraMeia3;
											}
										break;
									case 3:
										Inteira3:
											printf("\nPassagem Convencional");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(onibus3[l][c] == lugar){
															onibus3[l][c] = 0;
															pNormal3++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto Inteira3;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto Inteira3;
											}
										break;
									case 4:
										printf("\nVoltando ao menu anterior!");
										printf("\n");
										system("pause");
										break;
									default:
										break;
								}
						break;
						case 4:
							iniRio:
								printf("\nEscolha o tipo de passagem");
								printf("\n1 - Gratuidade");
								printf("\n2 - Meia");
								printf("\n3 - Inteira");
								printf("\n4 - Voltar");
								printf("\n");
								printf("\nQual a Opcao: ");
								scanf("%d", &tipo);
								system("cls");
								switch(tipo){
									case 1:
										if(pGratuidade4 < 2){
											cadeira4:
											printf("\nGratuidade do Idoso");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(onibus4[l][c] == lugar){
															onibus4[l][c] = 0;
															pGratuidade4++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto cadeira4;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto cadeira4;
											}
										}else{
											printf("\nGratuidades esgotadas!");
											printf("\n");
											system("pause");
											goto iniRio;
										}
										break;
									case 2:
										cadeiraMeia4:
											printf("\nMeia de Estudante");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(onibus4[l][c] == lugar){
															onibus4[l][c] = 0;
															pMeia4++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto cadeiraMeia4;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto cadeiraMeia4;
											}
										break;
									case 3:
										Inteira4:
											printf("\nPassagem Convencional");
											printf("\nInforme a cadeira: ");
											scanf("%d", &lugar);
											
											if((lugar >= 1)&&(lugar <= 48)){
												//Flag para verificar se o lugar foi encontrado
												t = 0;
												
												for(l=0;l<12;l++){
													for(c=0;c<4;c++){
														if(onibus4[l][c] == lugar){
															onibus4[l][c] = 0;
															pNormal4++;
															t++;
														}
													}
												}
												
												if(t > 0){
													printf("\nPassagem Vendida com sucesso!");
													printf("\n");
													system("pause");
												}else{
													printf("\nA cadeira ja esta ocupada!");
													printf("\n");
													system("pause");
													goto Inteira4;
												}
											}else{
												printf("\nInforme uma cadeira valida!");
												printf("\n");
												system("pause");
												goto Inteira4;
											}
										break;
									case 4:
										printf("\nVoltando ao menu anterior!");
										printf("\n");
										system("pause");
										break;
									default:
										break;
								}
						break;
						case 5:
							printf("\nVoltando ao menu Anterior");
							printf("\n");
							system("pause");
						break;
					}
				
				
				break;
			case 5:
				inicioCaixa:
					printf("\nEscolha o Onibus");
					printf("\n1 - Salvador");
					printf("\n2 - Sao Luiz");
					printf("\n3 - Curitiba");
					printf("\n4 - Rio de Janeiro");
					printf("\n5 - Voltar");
					printf("\n");
					printf("\nQual a Opcao: ");
					scanf("%d", &destino);
					system("cls");
					switch(destino){
						case 1:
							printf("\nSaldo em Caixa Salvador");
							printf("\n");
							for(l=0;l<12;l++){
								for(c=0;c<4;c++){
									if(lugares[l][c] == 0){
										pTotal++;
										//ptotal = ptotal + 1;
									}
								}
								
							}
							
							soma = pTotal * precoSalvador;
							precoMeias = pMeia * (precoSalvador/2);
							soma = soma - precoMeias - (pGratuidade * precoSalvador);
							
							if(soma == 0){
								printf("\nNenhuma Passagem Vendida");
								printf("\n");
								system("pause");
							}else{
								printf("\nTotal Arrecadado: %d", soma);
								printf("\n");
								system("pause");
							}
							
							break;
						
						case 2:
							printf("\nSaldo em Caixa Sao Luiz");
							printf("\n");
							for(l=0;l<12;l++){
								for(c=0;c<4;c++){
									if(onibus2[l][c] == 0){
										pTotal2++;
										//ptotal = ptotal + 1;
									}
								}
								
							}
							
							soma = pTotal2 * precoSaoLuiz;
							precoMeias = pMeia2 * (precoSaoLuiz/2);
							soma = soma - precoMeias - (pGratuidade2 * precoSaoLuiz);
							
							if(soma == 0){
								printf("\nNenhuma Passagem Vendida");
								printf("\n");
								system("pause");
							}else{
								printf("\nTotal Arrecadado: %d", soma);
								printf("\n");
								system("pause");
							}
							
							break;
						
						case 3:
							printf("\nSaldo em Caixa Curitiba");
							printf("\n");
							for(l=0;l<12;l++){
								for(c=0;c<4;c++){
									if(onibus3[l][c] == 0){
										pTotal3++;
										//ptotal = ptotal + 1;
									}
								}
								
							}
							
							soma = pTotal3 * precoCuritiba;
							precoMeias = pMeia3 * (precoCuritiba/2);
							soma = soma - precoMeias - (pGratuidade3 * precoCuritiba);
							
							if(soma == 0){
								printf("\nNenhuma Passagem Vendida");
								printf("\n");
								system("pause");
							}else{
								printf("\nTotal Arrecadado: %d", soma);
								printf("\n");
								system("pause");
							}
							
							break;

						case 4:
							printf("\nSaldo em Rio de Janeiro");
							printf("\n");
							for(l=0;l<12;l++){
								for(c=0;c<4;c++){
									if(onibus4[l][c] == 0){
										pTotal4++;
										//ptotal = ptotal + 1;
									}
								}
								
							}
							
							soma = pTotal4 * precoRio;
							precoMeias = pMeia4 * (precoRio/2);
							soma = soma - precoMeias - (pGratuidade4 * precoRio);
							
							if(soma == 0){
								printf("\nNenhum valor arrecadado.");
								printf("\n");
								system("pause");
							}else{
								printf("\nTotal Arrecadado: %d", soma);
								printf("\n");
								system("pause");
							}
							
							break;
								
						case 5:
							printf("\nVoltando ao menu anterior!");
							printf("\n");
							system("pause");
							break;
						default:
							printf("\nDigite uma opcao valida ");
							system("pause");
							goto inicioCaixa;
							break;
					}
				
				
				break;
			
			case 6:
				inicioHorario:
					printf("\nEscolha a Viagem");
					printf("\n1 - Salvador");
					printf("\n2 - Sao Luiz");
					printf("\n3 - Curitiba");
					printf("\n4 - Rio de Janeiro");
					printf("\n5 - Voltar");
					printf("\n");
					printf("\nQual a Opcao: ");
					scanf("%d", &destino);
					system("cls");
					switch(destino){
						case 1:
							printf("\nDestino Salvador");
							printf("\nSaída as 20:00:00 do dia 25/12/2022");
							printf("\nChegada as 08:00:00 do dia 27/12/2022");
							system("pause");
							break;
						case 2:
							printf("\nDestino Sao Luiz");
							printf("\nSaída as 22:00:00 do dia 30/12/2022");
							printf("\nChegada as 22:00:00 do dia 31/12/2022");
							system("pause");
							break;
						case 3:
							printf("\nDestino Curitiba");
							printf("\nSaída as 19:00:00 do dia 30/12/2022");
							printf("\nChegada as 19:00:00 do dia 01/01/2023");
							system("pause");
							break;
						case 4:
							printf("\nDestino Rio de Janeiro");
							printf("\nSaída as 09:00:00 do dia 30/11/2022");
							printf("\nChegada as 23:00:00 do dia 03/12/2022");
							system("pause");
							break;
						case 5:
							printf("\nVoltando ao menu anterior!");
							printf("\n");
							system("pause");
							break;
						default:
							printf("\nDigite uma opcao valida ");
							system("pause");
							goto inicioHorario;
							break;
					}
				
				break;
			case 7:
				printf("Obrigado por usar o nosso sistema!");
				break;
			default:
				printf("\nDigite uma opcao valida ");
				goto inicioMenuPassagem;
				break;
			
		}
	}
	return 0;
}