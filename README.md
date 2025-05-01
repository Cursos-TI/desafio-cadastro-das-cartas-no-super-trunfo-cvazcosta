# Desafio Super Trunfo - Países - Cadastro das Cartas - Atualizado: 21/02

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países", onde você comparará os atributos das cidades.

A empresa MateCheck contratou você para desenvolver a parte inicial do jogo, que consiste no cadastro das cartas.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior.  **Você deve escolher qual desafio quer realizar.**

🚨 **Atenção:** O nível Novato do desafio é focado apenas no cadastro das cartas, utilizando as funções `scanf` para ler os dados e `printf` para exibi-los.

## 🎮 Nível Novato: Cadastro Básico

No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.  Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).  A combinação forma o código da carta (ex: A01, B02).

🚩 **Objetivo:** Criar um programa em C que cadastra **duas** cartas com os seguintes atributos:

*   População (`int`)
*   Área (`float`)
*   PIB (`float`)
*   Número de pontos turísticos (`int`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema permitirá ao usuário cadastrar os dados de **duas** cartas manualmente via terminal.
*   Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário insere os dados de cada carta interativamente via `scanf`.
*   O programa exibe os dados cadastrados usando `printf`, com cada atributo em uma nova linha.

**Simplificações para o Nível Novato:**

*   Cadastre apenas **duas** cartas.
*   Concentre-se na leitura, armazenamento e exibição. Não implemente comparações ou outros recursos.
*   **Não use** laços (`for`, `while`) ou condicionais (`if`, `else`).


## 🛡️ Nível Aventureiro: Cálculo de Atributos

No nível Aventureiro, você expandirá o sistema para incluir o cálculo de dois novos atributos: Densidade Populacional e PIB per Capita.

🆕 **Diferença em relação ao Nível Novato:**

*   **Novos Atributos:**
    *   Densidade Populacional: População / Área (`float`)
    *   PIB per Capita: PIB / População (`float`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema calculará automaticamente a Densidade Populacional e o PIB per Capita.
*   Os novos atributos serão exibidos junto com os demais.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada do nível Novato.
*   A saída exibirá também os atributos calculados.

**Simplificações para o Nível Intermediário:**

*   Continue cadastrando apenas **duas** cartas.
*   Continue **sem usar** laços (`for`, `while`) ou condicionais (`if`, `else`).



## 🏆 Nível Mestre: Comparação e Super Poder

No nível Mestre, você implementará a comparação entre duas cartas e o cálculo do "Super Poder".

🆕 **Diferença em relação ao Nível Aventureiro:**

*   **Comparação de Cartas:** O usuário poderá comparar as duas cartas.
*   **Super Poder:** Soma de todos os atributos (inclusive os calculados), com a densidade populacional *invertida* antes da soma (1/densidade).  Tipo: `float`.

⚙️ **Funcionalidades do Sistema:**

*   Comparação atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).
*   Para Densidade Populacional, vence a carta com o *menor* valor.
*   Para os demais atributos (e o Super Poder), vence a carta com o *maior* valor.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada dos níveis anteriores, mas a População agora é `unsigned long int`.
*   A saída mostrará o resultado da comparação para cada atributo e o Super Poder.

**Observação:**  Preste atenção à conversão de tipos ao calcular o Super Poder!


## 🏁 Conclusão

Ao concluir qualquer um dos níveis, você terá dado um passo importante no desenvolvimento do Super Trunfo - Países. Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
content_copy

---
# 🏅 Nível Novato
No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão if e if-else.

## 🚩 Objetivos:
- Cadastro de Cartas: O sistema permitirá ao usuário cadastrar cartas de cidades, incluindo informações como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
- Comparação de Cartas: O sistema comparará os atributos de duas cartas e determinará a vencedora com base em uma propriedade específica (população, área, PIB, etc.), escolhida no código.
- Exibição de Resultados: Após a comparação, o sistema exibirá qual carta venceu com base na regra: maior valor vence, exceto em densidade populacional, onde o menor valor é o vencedor.
## 📥 Entrada de Dados:
Os dados das cartas serão inseridos manualmente via terminal.
O sistema solicitará interativamente as informações de cada carta.
## 📤 Saída de Dados:
Após o cadastro, as propriedades da cidade serão exibidas de forma organizada.
O resultado da comparação será mostrado, indicando a carta vencedora.

# 🏅 Nível Aventureiro
No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando switch.

## 🆕 Diferença em relação ao Nível Novato:
Menu Interativo: O usuário poderá escolher diferentes atributos para comparação através de um menu.
Comparação Aninhada: Implementação de lógica de comparação mais complexa, utilizando estruturas aninhadas para tomar decisões baseadas em múltiplos atributos.
## 🚩 Novas Funcionalidades:
Cadastro de Cartas: Similar ao nível Novato, com a adição de comparação de múltiplos atributos.
Menu Interativo: Uso de switch para criar um menu que permite ao jogador escolher os atributos a serem comparados.
Exibição de Resultados: O sistema exibirá o resultado da comparação, indicando qual carta venceu e qual atributo foi utilizado.
# 🏅 Nível Mestre
No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, como menus dinâmicos e lógica de decisão complexa com operadores ternários.

## 🆕 Diferença em relação ao Nível Aventureiro:
Escolha de Dois Atributos: O usuário poderá escolher dois atributos para comparação entre as cartas.
Lógica de Decisão Complexa: Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
Menus Dinâmicos: Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.
## 🚩 Novas Funcionalidades:
Comparação de Dois Atributos: O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
Lógica Avançada: Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
Empates: O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
Exibição de Resultados: Exibição dos resultados das comparações de forma clara e interativa.
## 📋 Requisitos Funcionais Comuns
Cadastro de Cartas: O sistema deve permitir o cadastro de cartas com as informações necessárias.
Comparação: O sistema deve comparar as cartas e determinar a vencedora com base nas regras estabelecidas.
Exibição de Resultados: Os resultados devem ser exibidos de forma clara, indicando a carta vencedora.
## 📌 Requisitos Não Funcionais Comuns
Usabilidade: A interface do usuário deve ser simples e intuitiva.
Performance: O sistema deve executar operações sem atrasos perceptíveis.
Manutenibilidade: O código deve ser bem estruturado e documentado.
Confiabilidade: O sistema deve ser robusto e capaz de lidar com entradas inválidas de forma adequada.
