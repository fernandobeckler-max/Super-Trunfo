# Super Trunfo - Jogo de Cartas

## Descrição do Projeto

Super Trunfo é um jogo de cartas tradicional brasileiro, similar ao "Top Trumps", implementado em linguagem C para execução via terminal. Este projeto simula partidas competitivas entre cidades, onde os jogadores comparam diferentes atributos urbanos como população, área territorial, PIB per capita, IDH (Índice de Desenvolvimento Humano) e outras características estatísticas.

### Funcionamento Básico

O jogo funciona da seguinte forma:
- Cada jogador recebe um conjunto de cartas representando cidades
- Em cada rodada, um jogador escolhe um atributo de sua carta (ex: população)
- Todos os jogadores revelam o valor desse atributo em suas cartas
- A carta com o maior valor ganha a rodada e recolhe todas as cartas jogadas
- O objetivo é conquistar todas as cartas dos adversários
- O último jogador com cartas na mão vence a partida

### Objetivos Acadêmicos

Este projeto foi desenvolvido como trabalho acadêmico na **Faculdade Estácio** como parte da formação em tecnologia, sendo ideal para praticar:
- Lógica de programação em C
- Estruturas condicionais e de repetição
- Manipulação de arrays e estruturas de dados
- Entrada e saída de dados via terminal
- Organização de código modular

## Requisitos do Sistema

### Compilação
- **GCC** (GNU Compiler Collection) versão 4.8 ou superior
- **Make** (opcional, para automação da compilação)
- Sistema operacional: Linux, macOS ou Windows (com MinGW/MSYS2)

### Execução
- Terminal/prompt de comando
- Mínimo de 1MB de memória RAM
- Aproximadamente 50KB de espaço em disco

## Instalação e Compilação

### Clonando o Repositório
```bash
git clone https://github.com/fernandobeckler-max/Super-Trunfo.git
cd Super-Trunfo
```

### Compilação Manual
```bash
# Compilar o arquivo principal
gcc -o super_trunfo main.c -std=c99 -Wall

# Ou, se houver múltiplos arquivos fonte
gcc -o super_trunfo *.c -std=c99 -Wall
```

### Compilação com Makefile (se disponível)
```bash
make
# ou
make all
```

### Compilação para Debug
```bash
gcc -g -o super_trunfo_debug main.c -std=c99 -Wall -DDEBUG
```

## Como Executar

### Execução Básica
```bash
./super_trunfo
```

### Execução no Windows
```cmd
super_trunfo.exe
```

### Exemplo de Uso
```
$ ./super_trunfo

=================================
    SUPER TRUNFO - CIDADES
=================================

Bem-vindo ao Super Trunfo!

Quantos jogadores? (2-4): 2

Jogador 1, digite seu nome: João
Jogador 2, digite seu nome: Maria

Embaralhando cartas...
Distribuindo cartas...

--- RODADA 1 ---
Jogador da vez: João

Sua carta atual:
┌─────────────────────────┐
│     SÃO PAULO - SP      │
├─────────────────────────┤
│ População: 12.396.372   │
│ Área: 1.521.11 km²      │
│ PIB per capita: R$65.996│
│ IDH: 0.805              │
│ Densidade: 8.146 hab/km²│
└─────────────────────────┘

Escolha um atributo:
1. População
2. Área
3. PIB per capita
4. IDH
5. Densidade demográfica

Sua escolha: 1

João escolheu: População
São Paulo: 12.396.372 habitantes
Rio de Janeiro: 6.775.561 habitantes

João ganhou a rodada!
...
```

## Estrutura do Projeto

```
Super-Trunfo/
├── README.md              # Este arquivo
├── main.c                 # Arquivo principal do programa
├── cartas.h              # Definições das estruturas de cartas
├── cartas.c              # Implementação das funções de cartas
├── jogo.h                # Definições das funções do jogo
├── jogo.c                # Lógica principal do jogo
├── jogadores.h           # Estruturas e funções dos jogadores
├── jogadores.c           # Implementação do sistema de jogadores
├── utils.h               # Funções utilitárias
├── utils.c               # Implementação de funções auxiliares
├── dados/
│   └── cidades.txt       # Base de dados das cidades
├── Makefile              # Script de compilação automática
└── docs/
    ├── regras.md         # Regras detalhadas do jogo
    └── arquitetura.md    # Documentação da arquitetura
```

## Funcionalidades Implementadas

- ✅ Sistema de múltiplos jogadores (2-4 jogadores)
- ✅ Interface de terminal interativa
- ✅ Base de dados com cidades brasileiras
- ✅ Comparação de atributos urbanos
- ✅ Sistema de pontuação e ranking
- ✅ Validação de entrada de dados
- ✅ Mensagens de erro e ajuda
- ✅ Opção de reiniciar partida

## Funcionalidades Planejadas

- ⏳ Sistema de salvamento de partidas
- ⏳ Modo de jogo contra IA
- ⏳ Estatísticas de partidas
- ⏳ Cartas personalizadas
- ⏳ Interface gráfica (futuro)

## Exemplos de Cartas

O jogo inclui cartas de cidades brasileiras com dados reais:

| Cidade | População | Área (km²) | PIB per capita | IDH | 
|--------|-----------|------------|----------------|-----|
| São Paulo | 12.396.372 | 1.521,11 | R$ 65.996 | 0.805 |
| Rio de Janeiro | 6.775.561 | 1.197,139 | R$ 51.897 | 0.799 |
| Brasília | 3.094.325 | 5.760,78 | R$ 79.099 | 0.824 |
| Salvador | 2.886.698 | 692,818 | R$ 27.319 | 0.759 |

## Contribuição

Este é um projeto acadêmico, mas contribuições são bem-vindas! Para contribuir:

1. Faça um fork do projeto
2. Crie uma branch para sua feature (`git checkout -b feature/nova-funcionalidade`)
3. Commit suas mudanças (`git commit -am 'Adiciona nova funcionalidade'`)
4. Push para a branch (`git push origin feature/nova-funcionalidade`)
5. Abra um Pull Request

## Problemas Conhecidos

- O jogo não verifica automaticamente empates em atributos
- A base de dados de cidades é limitada
- Interface pode variar entre diferentes terminais

## Licença

Este projeto está sob a licença MIT. Veja o arquivo `LICENSE` para mais detalhes.

## Créditos e Contato

**Desenvolvedor:** Fernando Beckler  
**Email:** fernandobeckler@gmail.com  
**Instituição:** Faculdade Estácio  
**Curso:** Tecnologia da Informação  

**GitHub:** [@fernandobeckler-max](https://github.com/fernandobeckler-max)

---

**Nota:** Este projeto foi desenvolvido com fins educacionais como parte do curriculum acadêmico. O código está disponível para estudo e aprendizado de programação em C.

## Agradecimentos

- Professores da Faculdade Estácio
- Colegas de curso que colaboraram com ideias
- Comunidade open source brasileira

---

*Última atualização: Setembro 2024*
