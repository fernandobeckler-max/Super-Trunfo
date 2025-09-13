# Super Trunfo

## Descrição do Projeto

Jogo Super Trunfo desenvolvido em linguagem C, com execução via terminal. O projeto simula partidas entre cidades, comparando atributos como população, área, PIB e IDH (Índice de Desenvolvimento Humano). 

Este é um projeto ideal para praticar:
- Lógica de programação em C
- Estruturas condicionais e de repetição
- Manipulação de dados e estruturas
- Entrada e saída via terminal
- Algoritmos de comparação e decisão

## Pré-requisitos

Para compilar e executar o jogo, você precisará ter instalado:
- Compilador GCC (GNU Compiler Collection)
- Sistema operacional Linux, macOS ou Windows com WSL
- Terminal/linha de comando

### Instalação do GCC

**Ubuntu/Debian:**
```bash
sudo apt update
sudo apt install gcc
```

**CentOS/RHEL/Fedora:**
```bash
sudo yum install gcc  # CentOS/RHEL
sudo dnf install gcc  # Fedora
```

**macOS:**
```bash
xcode-select --install
# ou usando Homebrew
brew install gcc
```

**Windows:**
- Instale o WSL (Windows Subsystem for Linux) ou use o MinGW-w64

## Compilação

Para compilar o jogo, execute os seguintes comandos no terminal:

```bash
# Clone o repositório (se ainda não clonou)
git clone https://github.com/fernandobeckler-max/Super-Trunfo.git
cd Super-Trunfo

# Compile o projeto
gcc -o super_trunfo *.c -std=c99 -Wall -Wextra

# Ou se houver um Makefile
make
```

## Como Executar

Após a compilação, execute o jogo com:

```bash
# Executar o jogo
./super_trunfo

# No Windows (usando MinGW)
super_trunfo.exe
```

## Como Jogar

O Super Trunfo é um jogo de cartas onde os jogadores comparam atributos de suas cartas para determinar o vencedor de cada rodada.

### Regras Básicas:
1. Cada jogador recebe um conjunto de cartas com cidades
2. Cada carta possui atributos como:
   - **População**: Número de habitantes
   - **Área**: Área territorial em km²
   - **PIB**: Produto Interno Bruto
   - **IDH**: Índice de Desenvolvimento Humano
3. O jogador da vez escolhe um atributo de sua carta
4. Todos os jogadores comparam o mesmo atributo
5. Quem tiver o maior valor no atributo escolhido vence a rodada
6. O vencedor da rodada recebe todas as cartas jogadas
7. O jogo continua até que um jogador fique com todas as cartas

### Comandos do Jogo:
- Use o teclado para navegar pelos menus
- Digite o número correspondente ao atributo que deseja jogar
- Pressione Enter para confirmar suas escolhas
- Digite 'q' ou 'quit' para sair do jogo

## Estrutura do Projeto

```
Super-Trunfo/
├── README.md           # Este arquivo
├── main.c             # Arquivo principal do programa
├── jogo.c             # Lógica principal do jogo
├── cartas.c           # Gerenciamento das cartas
├── jogador.c          # Gerenciamento dos jogadores
├── utils.c            # Funções utilitárias
├── includes/          # Arquivos de cabeçalho (.h)
│   ├── jogo.h
│   ├── cartas.h
│   ├── jogador.h
│   └── utils.h
├── dados/             # Arquivos de dados das cartas
│   └── cidades.txt
└── Makefile           # Arquivo de compilação (opcional)
```

## Contribuindo

1. Faça um fork do projeto
2. Crie uma branch para sua feature (`git checkout -b feature/nova-feature`)
3. Commit suas mudanças (`git commit -am 'Adiciona nova feature'`)
4. Push para a branch (`git push origin feature/nova-feature`)
5. Abra um Pull Request

## Compilação Avançada

### Com Makefile personalizado:
```makefile
CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -g
TARGET=super_trunfo
SOURCES=*.c

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

install: $(TARGET)
	cp $(TARGET) /usr/local/bin/

.PHONY: clean install
```

### Comandos de depuração:
```bash
# Compilar com símbolos de debug
gcc -g -o super_trunfo *.c -std=c99 -Wall -Wextra

# Executar com valgrind (verificar vazamentos de memória)
valgrind --leak-check=full ./super_trunfo

# Executar com gdb (debugger)
gdb ./super_trunfo
```

## Licença

Este projeto está sob a licença MIT. Veja o arquivo LICENSE para mais detalhes.

## Autor

Desenvolvido por Fernando Beckler Max
