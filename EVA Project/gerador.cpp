#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void gerarHello(const string& nomeArquivo) {
    ofstream file(nomeArquivo);
    file << "// Exemplo Hello World\n";
    file << "#include <iostream>\n";
    file << "using namespace std;\n\n";
    file << "int main() {\n";
    file << "    cout << \"Hello, world!\" << endl;\n";
    file << "    return 0;\n";
    file << "}\n";
    file.close();
    cout << "Arquivo " << nomeArquivo << " criado com sucesso!\n";
}

void gerarSoma(const string& nomeArquivo) {
    ofstream file(nomeArquivo);
    file << "// Exemplo de soma\n";
    file << "#include <iostream>\n";
    file << "using namespace std;\n\n";
    file << "int main() {\n";
    file << "    int a, b;\n";
    file << "    cout << \"Digite dois numeros: \";\n";
    file << "    cin >> a >> b;\n";
    file << "    cout << \"Soma = \" << (a + b) << endl;\n";
    file << "    return 0;\n";
    file << "}\n";
    file.close();
    cout << "Arquivo " << nomeArquivo << " criado com sucesso!\n";
}

void gerarClasse(const string& nomeArquivo) {
    ofstream file(nomeArquivo);
    file << "// Exemplo com classe Pessoa\n";
    file << "#include <iostream>\n";
    file << "using namespace std;\n\n";
    file << "class Pessoa {\n";
    file << "public:\n";
    file << "    string nome;\n";
    file << "    int idade;\n\n";
    file << "    void apresentar() {\n";
    file << "        cout << \"Nome: \" << nome << \", Idade: \" << idade << endl;\n";
    file << "    }\n";
    file << "};\n\n";
    file << "int main() {\n";
    file << "    Pessoa p;\n";
    file << "    p.nome = \"Joao\";\n";
    file << "    p.idade = 30;\n";
    file << "    p.apresentar();\n";
    file << "    return 0;\n";
    file << "}\n";
    file.close();
    cout << "Arquivo " << nomeArquivo << " criado com sucesso!\n";
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Uso: gerador [character|enemies|gold] nome_arquivo.cpp\n";
        return 1;
    }

    string tipo = argv[1];
    string nomeArquivo = argv[2];

    if (tipo == "character") {
        gerarHello(nomeArquivo);
    } else if (tipo == "enemies") {
        gerarSoma(nomeArquivo);
    } else if (tipo == "gold") {
        gerarClasse(nomeArquivo);
    } else {
        cout << "Comando invalido. Use: hello, soma ou classe\n";
        return 1;
    }

    return 0;
}
