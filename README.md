# cmake-modules
[![en](https://github.com/renatocunha216/common/blob/main/images/lang-en.svg?raw=true)](https://github.com/renatocunha216/cmake-modules/blob/master/README.en.md)
[![pt-br](https://github.com/renatocunha216/common/blob/main/images/lang-pt-br.svg?raw=true)](https://github.com/renatocunha216/cmake-modules/blob/master/README.md)

Projeto de **exemplo** de uso do cmake em um projeto escrito com linguagem C/C++ com multiplos módulos (bibliotecas e executáveis).

| Módulo     | Descrição                              | Dependência           |
|------------|----------------------------------------|-----------------------|
| crypto-lib | Biblioteca com funções criptográficas. |                       |
| math-lib   | Biblioteca com funções matemáticas.    |                       |
| demo1      | Aplicativo demonstração 1.             | math-lib              |
| demo2      | Aplicativo demonstração 2.             | crypto-lib / math-lib |


### Ferramentas utilizadas

- cmake-3.23.1
- Mingw64 distribuição x86_64-8.1.0-release-win32-seh-rt_v6-rev0    

### Utilização

Windows:

1. Defina a variável de ambiente **MINGW_HOME** com o caminho de instalação do mingw.<br>

2. Execute o script batch **cmake-config.bat** para configurar os perfis de construção dos aplicativos.<br>
No exemplo temos os perfis *Debug* e *Release* que cria sistemas de construção (build system generator) *MinGW Makefiles*.<br>
Se necessário altere o arquivo **cmake-config.bat** conforme o caminho do aplicativo **make**.

Exemplo:

```batch
REM Generate make configuration files for MinGW in RELEASE mode (cmake default)
call cmake ^
-D CMAKE_BUILD_TYPE=Release ^
-D "CMAKE_MAKE_PROGRAM:PATH=%MINGW_HOME%/bin/make.exe" ^
-G "MinGW Makefiles" ..
```

Serão criados os seguintes diretórios configurados para uso do MinGW como make.<br>
`
./_debug
`
<br>
`
./_release
`

3. Entre no diretório gerado e execute o comando **make**.
```
>make
[ 10%] Building C object math-lib/CMakeFiles/math-lib.dir/src/_math.c.obj
[ 20%] Building C object math-lib/CMakeFiles/math-lib.dir/src/math-dll.c.obj
[ 30%] Linking C shared library libmath-lib.dll
[ 30%] Built target math-lib
[ 40%] Building C object crypto-lib/CMakeFiles/crypto-lib.dir/src/crypto.c.obj
[ 50%] Building C object crypto-lib/CMakeFiles/crypto-lib.dir/src/crypto-dll.c.obj
[ 60%] Linking C shared library libcrypto-lib.dll
[ 60%] Built target crypto-lib
[ 70%] Building C object demo1/CMakeFiles/demo1.dir/src/demo1.c.obj
[ 80%] Linking C executable demo1.exe
[ 80%] Built target demo1
[ 90%] Building C object demo2/CMakeFiles/demo2.dir/src/demo2.c.obj
[100%] Linking C executable demo2.exe
[100%] Built target demo2
```
