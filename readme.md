
# *Movimentação Peça de Xadrez* 

Esse é o repositório do projeto do Movimentação Peça de Xadrez. Nesse projeto, implementei algumas lógicas com laços for, while e do while.

## **Nivel Novato** 🎮

Nesse nivel foi criado um único programa em C que simule o movimento de três peças: **Torre, Bispo e Rainha**. Para cada peça, utilizei uma estrutura de repetição diferente **(for, while ou do-while)** para simular seu movimento. 

### **Funcionalidades** ⚙️
- **Torre**: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.

- **Bispo**: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").

- **Rainha:** Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

### **Requesitos Funcionais** ✅
 - **Entrada de Dados:** Os valores para o número de casas a serem movidas serão definidos diretamente no código através de variáveis ou constantes.
 
- **Lógica de Movimentação:** Cada programa deverá implementar a lógica de movimento específica de cada peça (Torre, Bispo, Rainha).
 
- **Saída de Dados:** O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça. Para movimentos na diagonal (Bispo), imprimir a combinação de duas direções. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");

## **Nivel Aventureiro** 🎮

Neste desafio, você dei continuidade ao programa do nível básico, adicionando a lógica para movimentar o **Cavalo** no tabuleiro de xadrez. A principal diferença é que o Cavalo se move em "L", o que exigirá o uso de loops aninhados **(um loop dentro do outro)** para simular esse movimento.

### **Funcionalidades** ⚙️
 - Você precisará usar pelo menos dois loops aninhados, sendo um deles obrigatoriamente um loop for. O outro loop pode ser while ou do-while, à sua escolha. Assim como nas outras peças, você imprimirá a direção do movimento a cada casa percorrida.

### **Requesitos Funcionais** ✅
- **Entrada de Dados:** Os valores para o número de casas a serem movidas (duas para baixo, uma para a esquerda) devem ser definidos no código como variáveis ou constantes.
 
- **Lógica de Movimentação:** O programa deverá implementar a lógica específica do movimento em "L" do Cavalo usando loops aninhados (um loop for e um loop while ou do-while).
 
- **Saída de Dados:** O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo ("Baixo", "Baixo", "Esquerda"), utilizando o comando printf. Para as outras peças as saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. Separe o movimento do Cavalo dos movimentos anteriores com uma linha em branco.

##**Nivel Mestre** 🎮
Neste desafio final, você aprimorará o programa de xadrez que vem desenvolvendo, explorando técnicas avançadas de programação para simular os movimentos das peças.

### **Funcionalidades** ⚙️
- **Recursividade:** Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
 
- **Loops Complexos para o Cavalo:** Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições. Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa. O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
 
- **Bispo com Loops Aninhados:** O Bispo deve ser implementado com recursividade, e também com loops aninhados, utilizando o loop mais externo para o movimento vertical, e o mais interno para o movimento horizontal.

### **Requesitos Funcionais** ✅
- **Entrada de Dados:** Os valores para o número de casas a serem movidas (para recursão) e as condições dos loops (para o Cavalo) devem ser definidos diretamente no código, como variáveis ou constantes.
 
- **Recursividade (Torre, Bispo e Rainha):** Implemente funções recursivas para simular o movimento de cada peça, substituindo os loops originais.
 
- **Loops Complexos (Cavalo):** Utilize loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
 
- **Loops Aninhados (Bispo):** Utilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.
 
- **Saída de Dados:** O programa deverá imprimir no console, de forma clara e organizada, a direção do movimento a cada casa percorrida por cada peça. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. Utilize linhas em branco para separar a saída de cada peça.
