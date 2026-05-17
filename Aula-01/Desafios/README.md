# 🏆 Desafios — Aula 01

> Tente resolver **sozinho** antes de ver qualquer solução.  
> Esse é o único jeito de realmente aprender. Lute com o problema. 💪

---

## 📋 Regras

- Você só pode usar o que foi visto na **Aula-01**: variáveis, tipos, `printf`, `scanf` e operadores.
- **Sem `if`, sem loops, sem funções** — apenas lógica e criatividade com o básico.
- Escreva o código do zero, sem copiar.
- Só veja a solução depois de ter tentado por pelo menos **15 minutos**.

---

## 🟢 Fáceis

### Desafio-F01 — Troco
O usuário informa o preço de um produto e o valor que pagou.  
Calcule e exiba o troco.

**Exemplo de saída:**
```
Digite o valor do produto: 12.50
Digite o valor do dinheiro: 20.00
Valor do troco: 7.50
```

---

### Desafio-F02 — IMC
Leia peso (kg) e altura (m) do usuário.  
Calcule e exiba o IMC com 2 casas decimais.  
Fórmula: `IMC = peso / (altura * altura)`

**Exemplo de saída:**
```
Diga sua altura: 1.80
Diga seu peso: 80
Seu IMC e: 24.69
```

---

### Desafio-F03 — Média Escolar
Leia 4 notas (float) de um aluno e exiba a média com 1 casa decimal.

**Exemplo de saída:**
```
Digite a primeira nota: 7.5
Digite a segunda nota: 8.0
Digite a terceira nota: 6.5
Digite a quarta nota: 9.0
Sua media foi: 7.8
```

---

## 🟡 Médios

### Desafio-M01 — Conversor de Unidades
Leia uma distância em quilômetros e exiba convertida em metros, centímetros e milímetros.

**Exemplo de saída:**
```
Distancia em KM: 2.5
Metros: 2500.00
Centimetros: 250000.00
Milimetros: 2500000.00
```

---

### Desafio-M02 — Conta de Luz
Leia o consumo em kWh e o preço por kWh.  
Calcule subtotal, imposto de 12% e total a pagar.

**Exemplo de saída:**
```
Consumo (kWh): 150
Preco por kWh: 0.75
Subtotal: R$ 112.50
Imposto (12%): R$ 13.50
Total: R$ 126.00
```

---

### Desafio-M03 — Velocidade Média
Leia distância (km) e tempo (horas).  
Calcule a velocidade média e o tempo necessário para percorrer 100km nessa velocidade.

**Exemplo de saída:**
```
Distancia (km): 300
Tempo (h): 3.5
Velocidade media: 85.71 km/h
Tempo para 100km: 1.17h
```

---

### Desafio-M04 — Pintura de Parede
Leia largura e altura de uma parede em metros.  
Considere que 1 lata de tinta cobre 6m² e custa R$45,00.  
Exiba a área, a quantidade de latas necessárias e o custo total.

> 💡 Dica: use `(int)` para converter o número de latas para inteiro.

**Exemplo de saída:**
```
Largura: 5
Altura: 3
Area: 15.00 m2
Latas necessarias: 3
Custo total: R$ 135.00
```

---

## 🔴 Difíceis

### Desafio-D01 — Juros Simples
Leia capital (R$), taxa de juros ao mês (%) e período em meses.  
Calcule os juros e o montante final.  
Fórmulas: `J = C * i * t` e `M = C + J`

**Exemplo de saída:**
```
Capital: 1000
Taxa (%): 2.5
Periodo (meses): 6
Juros: R$ 150.00
Montante: R$ 1150.00
```

---

### Desafio-D02 — Tabuada sem Loop
Leia um número inteiro e exiba a tabuada dele de 1 a 10.  
**Sem usar loops** — apenas `printf` com os cálculos direto.

> 💡 Dica: use `n*1`, `n*2`, `n*3`... diretamente dentro do `printf` com vários `%d`.

**Exemplo de saída:**
```
Tabuada do 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
```

---

### Desafio-D03 — Ficha do Atleta
Leia nome, idade, peso e altura de um atleta.  
Calcule o IMC e exiba uma ficha formatada com bordas.

> 💡 Dica: os caracteres `╔`, `═`, `╗`, `╚`, `╝` funcionam normalmente no `printf`. Basta copiar e colar.

**Exemplo de saída:**
```
╔══════════════════════╗
   FICHA DO ATLETA
 Nome: Matheus
 Idade: 18 anos
 Peso: 80.00 kg
 Altura: 1.80 m
 IMC: 24.69
╚══════════════════════╝
```

---

## 💡 Dicas Gerais

- Declare suas variáveis com nomes que façam sentido (`altura`, não `x`).
- Use `float` quando o resultado puder ter casas decimais.
- Lembre-se do `&` no `scanf` para variáveis numéricas.
- Formate a saída com `%.2f` para 2 casas decimais.
- Compile e teste com valores diferentes para garantir que está correto.

---

## 📁 Estrutura esperada de arquivos

```
Desafios/
├── Faceis/
│   ├── desafio-F01.c
│   ├── desafio-F02.c
│   └── desafio-F03.c
├── Medios/
│   ├── desafio-M01.c
│   ├── desafio-M02.c
│   ├── desafio-M03.c
│   └── desafio-M04.c
└── Dificeis/
    ├── desafio-D01.c
    ├── desafio-D02.c
    └── desafio-D03.c
```