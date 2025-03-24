# README.md
              ## Tema 1 - Super Trunfo em c: Fundamentos e Técnicas Avançadas ##
## Descrição do Projeto

Este projeto em C foi desenvolvido para permitir a comparação de duas cidades brasileiras, representadas por "cartas". O programa coleta e exibe uma série de dados relevantes sobre cada cidade, como estado, código da carta, nome, população, área, PIB e número de pontos turísticos. Além disso, ele calcula métricas importantes, como densidade populacional, PIB per capita e um novo parâmetro chamado "Super Poder", que combina diferentes fatores para avaliar o desempenho geral da cidade.

## Funcionalidades

- *Coleta de Dados*: O usuário é solicitado a inserir informações sobre duas cidades. Para cada cidade, o programa coleta os seguintes dados:
  - Estado (representado por uma letra de A a H)
  - Código da carta
  - Nome da cidade
  - População
  - Área em km²
  - PIB em bilhões de reais
  - Número de pontos turísticos

- *Cálculos Realizados*:
  - *Densidade Populacional*: Calculada como a razão entre a população e a área da cidade.
  - *PIB per Capita*: Obtido dividindo o PIB pela população da cidade.
  - *Super Poder*: Uma métrica composta que considera a população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional. Essa métrica é projetada para refletir uma avaliação geral da cidade, dando mais valor a cidades que são menos densas.

- *Exibição dos Dados*: Após a coleta e os cálculos, o programa exibe todas as informações coletadas e calculadas para cada cidade, incluindo:
  - Estado
  - Código
  - Nome da cidade
  - População
  - Área
  - PIB
  - Número de pontos turísticos
  - Densidade populacional
  - PIB per capita
  - Super Poder

- *Comparação de Cidades*: O programa compara as duas cartas em diversos atributos, exibindo qual cidade "vence" em cada categoria. Para a densidade populacional, a cidade com menor valor é a vencedora, enquanto para os demais atributos, a cidade com maior valor é considerada a vencedora.

## Como Executar

1. *Compilação*: Utilize um compilador de C, como gcc, para compilar o código. O comando pode ser:
   bash
   gcc -o comparacao_cartas comparacao_cartas.c
   

2. *Execução*: Após a compilação, execute o programa gerado:
   bash
   ./comparacao_cartas
   

## Exemplo de Uso

Ao executar o programa, o usuário verá prompts solicitando as informações das duas cidades. Depois de inserir os dados, o programa exibirá as informações organizadas e os resultados dos cálculos. A saída pode se parecer com o exemplo abaixo:


Insira os dados da Carta 1:
Estado (A-H): A
Código da Carta (ex: A01): A01
Nome da Cidade: Cidade Exemplo 1
População: 1000000
Área (em km²): 500.0
PIB: 50.0
Número de Pontos Turísticos: 5

Insira os dados da Carta 2:
Estado (A-H): B
Código da Carta (ex: A01): B01
Nome da Cidade: Cidade Exemplo 2
População: 2000000
Área (em km²): 300.0
PIB: 80.0
Número de Pontos Turísticos: 10

Carta 1:
Estado: A
Código: A01
Nome da Cidade: Cidade Exemplo 1
População: 1000000
Área: 500.00 km²
PIB: 50.00 bilhões de reais
Número de Pontos Turísticos: 5
Densidade Populacional: 2000.00 habitantes/km²
PIB per Capita: 50.00 reais
Super Poder: 2000050.00

Carta 2:
Estado: B
Código: B01
Nome da Cidade: Cidade Exemplo 2
População: 2000000
Área: 300.00 km²
PIB: 80.00 bilhões de reais
Número de Pontos Turísticos: 10
Densidade Populacional: 6666.67 habitantes/km²
PIB per Capita: 40.00 reais
Super Poder: 2000080.00

Comparação de Cartas:
População: Carta 1 venceu (0)
Área: Carta 1 venceu (0)
PIB: Carta 1 venceu (0)
Pontos Turísticos: Carta 1 venceu (0)
Densidade Populacional: Carta 1 venceu (1)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (0)


## Conclusão

Este programa é uma ferramenta valiosa para quem deseja entender melhor as características demográficas e econômicas de diferentes cidades propostas para o jogo. oferecendo de forma interativa a comparação das cartas, ajudando a destacar tanto os pontos fortes quanto os fracos de cada uma.