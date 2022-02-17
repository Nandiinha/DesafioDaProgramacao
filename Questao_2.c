#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#define max 12

void VerificaSenha(char senha[]);

int main()
{
  setlocale(LC_ALL, "ptb");
  char senha[max];

  printf("Digite sua senha.\n#Ela deve conter no máximo 6 caracteres.\n#Conter no máximo um caractere numérico.\n#Conter no máximo 1 letra em maiúsculo.\n#Conter no máximo 1 letra em minúsculo.\n#Conter no máximo 1 caractere especial, tais como: !@#$%%^&*()-+\n");
  printf("Senha: ");
  scanf("%s", &senha);
  printf("\n");
  VerificaSenha(senha);

  return 0;
}

void VerificaSenha(char senha[])
{
  int i, tamanho, numerico = 0, minuscula = 0, maiuscula = 0, especial = 0;

  tamanho = strlen(senha);

  for (i = 0; i <= tamanho; i++)
  {
    if (isdigit(senha[i]))
      numerico++;
    if (isupper(senha[i]) < 1)
      maiuscula++;
    if (islower(senha[i]) < 1)
      minuscula++;
    if (senha[i] == '!' || senha[i] == '@' || senha[i] == '#' || senha[i] == '$' || senha[i] == '%' || senha[i] == '^' || senha[i] == '&' || senha[i] == '*' || senha[i] == '(' || senha[i] == ')' || senha[i] == '+' || senha[i] == '-')
      especial++;
  }

  if (tamanho < 6)
    printf("Sua senha deve conter no máximo 6 caracteres! Falta(m) %d caracter(es).\n", 6 - tamanho);
  if (numerico < 1)
    printf("Sua senha deve conter no máximo 1 caractere numérico!\n");
  if (maiuscula < 1)
    printf("Sua senha deve conter no máximo 1 letra maiúscula!\n");
  if (minuscula < 1)
    printf("Sua senha deve conter no máximo 1 letra minúscula!\n");
  if (especial < 1)
    printf("Sua senha deve conter no máximo 1 caractere especial!\n");
  if (tamanho >= 6 && numerico >= 1 && maiuscula >= 1 && minuscula >= 1 && especial >= 1)
    printf("Sua senha foi criada com sucesso!\n");
}