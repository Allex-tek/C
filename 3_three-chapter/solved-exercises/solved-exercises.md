# Exercícios Resolvidos - Capitulo 3
Estudo da linguagem C, através do livro Linguagem C - Luís Damas | Décima Edição

## 1. prog0301.c
* <p style="text-align: justify">Escreva um programa que indique quantos segundos tem um determinado números de horas.
</p>

## 2. prog0302.c
* <p style="text-align: justify">Altere o programa anteior de tal forma que permita indicar, a partir de um determinado número de horas, quais os minutos, os segundos ou mesmo os décimos de segundos que esse número de horas contém.
</p>

## 3. prog0303.c
* <p style="text-align: justify">Resolva o mesmo enuciado utilizando um switch.
</p>

# Exercícios Propostos - Capitulo 3

1. <p style="text-align: justify">Por que razão variáveis do tipo float não devem armazenar valores do lógicos?
</p>

*R: Porque o tipo float é para armazenar pontos flutuante, números reais. È uma má prática*


2. <p style="text-align: justify">Indique quais, das seguintes afirmações, são vrdadeiras e quais são valsas.
</p>

[ ✅ ] O else de um ***___if___*** é facultativo.

[ ✅ ] Num ***___if___*** são necessários parenteses em torno da condição.

[ ***F*** ] O ***___if___*** pode conter a palavra ***___then___*** opcionalmente.

[ ***F*** ] Tanto a componente ***___if___*** como a componente ***___else___*** so podem conter uma única instrução.

[ ***F*** ] O ***___if___*** tem que estar numa linha diferente do ***___else___***.

[ ✅ ] Na condição do ***___if___*** pode ser colocada uma ***___constante___***, uma ***___variável___*** ou uma ***___expressão___***.

3. <p style="text-align: justify">Como consegue uma instrução <i>if-else</i> saber onde termina of <i>if</i> e começa o <i>else</i>, ou se o if tem ou não <i>else</i>.
</p>

*R: Colocando chaves para delimitar o bloco.*

4. <p style="text-align: justify">Um bloco pode ser constituído por apenas uma istrução?
</p>

*R: Sim, mas também pode conter inumeras instrução, ou nenhuma delimitada pelo bloco de chaves {}*

5. <p style="text-align: justify">Depois de um bloco é obrigatório o uso de <b>;</b> ?
</p>

*R: Não, pois no final de um bloco não pode conter ***;***.*

6. <p style="text-align: justify"><b>[Exercício de Exame]</b> Existe alguma diferença no funcionamento dos seguintes trechos?
</p>

```
if(x==0)                    if (x=0)
    printf("X");                printf("X");
else                        else
    printf("Y");                printf("Y");
```

*R: A diferença está nos operadores, um de comparação ***==***, e o outro de atribuição ***=****.

7. <p style="text-align: justify"><b>[Exercício de Exame]</b>  A indentação facilita o processo de
</p>

a) Compilação

b) Linkagem

C) Execução

D) <u><b>Programação</b></u> ✅

8. <p style="text-align: justify"><b>[Exercício de Exame]</b> Um programa indentado é, em geral:
</p>

a) Mais rápido de executar que outro que não o seja.

b) Mais lento de executar que outro que não o seja.

C) <u><b>Mais legivel que outro que não seja indentado.</b></u> ✅

D) Menos legível que o outro que não o seja.

9. <p style="text-align: justify"><b>[Exercício de Exame]</b> Sempre que o compilador detecta um código mal indentado:
</p>

a) Emite erro.

b) Emite um WARNING.

C) Escreve o arquivo corretamente indentado.

D) <u><b>Um compilador não faz qualquer tipo de verificação da indentação.</b></u> ✅

10. <p style="text-align: justify"><b>[Exercício de Exame]</b> Indique duas vantagens de duas desvantagens do <b>if-else</b> em relação ao <b>switch</b>.
</p>

*R: Vantagens do if-else em relação ao switch:*

*Maior flexibilidade nas condições:*
*O if-else permite testar qualquer expressão lógica ou relacional, como:*

```if (x > 10 && y < 5)```

*Já o switch só permite testar igualdade com valores constantes (normalmente inteiros, caracteres ou strings, dependendo da linguagem).*

*Suporte a diferentes tipos de dados e intervalos:*

*O if-else pode trabalhar com números reais, intervalos, strings complexas, entre outros*

*O switch é limitado a tipos simples e valores constantes*

11. <p style="text-align: justify"><b>[Exercício de Exame]</b> será que a instrução <b>break</b>, quando apresentada dentro de um <b>if</b>, passa a execução automaticamente para o <b>else</b>.
</p>

*R:Não, pois o break e um comando ultilizado nos laços de repetição (for, while) ou de um bloco switch.*

12. <p style="text-align: justify"><b>[Exercício de Exame]</b> Qual o valor lógico que as seguintes expressões envia para i <b>if</b>?
</p>

a) ```if (10== 5)``` ***FALSE***

b) ```if ((2+3) == - (-2 -3))``` ***TRUE*** 

C) ```if (x = 5)``` ***TRUE*** 

D) ```if (x = 0)``` ***FALSE***

13. <p style="text-align: justify"><b>[Exercício de Exame]</b>Supondo x = 4, y = 6 e z = -1, qual o valor lógico das seguintes expressões;
</p>

a) ```if (x == 5)``` ***FALSE***

b) ```if (x == 5 || z < 0)``` ***TRUE*** 

C) ```if (y - x + z -1)``` ***FALSE***

D) ```if (x = 4 || y >= z && !(z))``` ***TRUE***

14. <p style="text-align: justify"><b>[Exercício de Exame]</b>Escreva, utilizando um único <b>if</b> o seguinte código.
</p>

```c
if (x == 0)
    if (y <= 32)
        printf("Sucesso!!!");

```
Resultado:
```c
if ((x ==0 && Y <= 32>))
    printf("Sucesso!!!");
```

18. <p style="text-align: justify"><b>[Exercício de Exame]</b> Escreva um programa que verifique se um ano é bissexto ou não.

19. <p style="text-align: justify"><b>[Exercício de Exame]</b> Escreva um programa que indique o número de dias existentes em um mês (digite o número do mês: 2 fevereiro = 28 dias).

20. <p style="text-align: justify"><b>[Exercício de Exame]</b> Escreva um programa que leia uma data e verifique se esta é válida ou não.