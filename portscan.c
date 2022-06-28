#include "stdio.h"
#include "netdb.h"
#include "sys/socket.h"

int main(int argc, char *argv[]){

if(argc < 1){

printf("Portscan - Modo de Uso ./portscan.c IP");
return 0;

}else{

char *ip = argv[1];
int socket;
struct socketaddr_in alvo;
int porta;
int conexao;

for(porta = 0; porta < 65536; porta++){

socket = socket(AF_INET, SOCK_STREAM, 0);
alvo.sin_family = AF_INET;
alvo.sin_porta = htons(porta);
alvo.sin_addr.s_addr = inet_addr(ip);

conexao = connect(socket, (struct sockaddr *)&alvo, sizeof alvo);

if(conexao == 0){

	printf("Porta %s [ABERTA]", porta);
	close(socket);
	close(conexao);

}
else{

	close(socket);
	close(conexao);
}

}

}

}
