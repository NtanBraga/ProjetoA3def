# ProjetoA3def

REPOSITORIO: https://github.com/NtanBraga/ProjetoA3def
<br /><br /><br />
Para executar o O ProjetoA3def.exe corretamente você precisará: <br />
<br /><br />
Banco de dados SQL:<br />

 -O arquivo de backup "Projeto.bak" deve ser importado à um aplicativo de banco de dados SQL,para que você consiga fazer Login e Cadastro no programa principal.<br />

<br /><br />
Distribuição .NET : <br />
-O arquivo executavel precisará da distribuição .NET em seu computador para que ele consiga captar as .dll necessarias para o executamento do programa.<br />

-Caso o executavel não funcione,recomenda-se importar a pasta ProjetoA3def para um projeto no Visual Studio e depois Depure,assim fazendo um novo executavel.Vale-se á notar que para este método, o banco de dados deverá ser conectado ao Visual Studio.Para fazer este processo basta ir em "Exibir", depois em "Server Explorar" e ir em "Conectar-se ao Banco de Dados",colocar o nome do servidor onde está o Projeto.bak,"Testar Conexão",e se estiver tudo correto,o Banco de dados está conectado ao seu projeto do Visual Studio.<br /><br />
-Depois do método anterior,caso de problema no banco de dados,deverá ser feita alterações no código.<br /><br />
Primeiro:Copie a cadeia de Conexões,que pode ser encontrada clicando uma vez no banco de dados e depois em propriedades.<br /><br />
Segundo:Mude a Cadeia no código "String^ connString",apague a cadeia atual e cole a sua.<br /><br />
Terceiro:Teste se está funcionado.
