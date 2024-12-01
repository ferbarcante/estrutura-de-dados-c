# Consumo de memória
Sempre que utilizamos qualquer programa em nosso computador nossa memória RAM é consumida.

## Elementos
Na linguagem C a variável está associada a:
- Nome
- Tipo
	- Todo tipo de dado tem um tamanho necessário para alocação de memória, por exemplo um inteiro precisa de 4 bytes.
- Valor
- Endereço
	- Ao armazenar uma variável o C procura a primeira posição disponível.

## Endereço 
Ao selecionar a posição em que uma variável será armazenada o primeiro escolhido se chama **endereço base**, no caso do inteiro, vamos supor que o endereço base é 3020, a variável do tipo inteiro irá ocupar a posição 3020, 3021, 3022 e 3024 por precisar de 4 bytes. Ou seja, cada endereço de memória ocupa 1 byte (oito bits).

### Exemplo
```c
int a = 10;
int b, c; // lixo de memória

b = 20;
c = a + b;
```

Repare que ao declara as variáveis b e c não estamos atribuindo valores, o que significa que no endereçamento o que estará dentro da posição será um **lixo de memória**.