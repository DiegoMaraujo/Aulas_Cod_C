/*
Definição
struct pessoa{
    char nome[30];
    int idade;
}
struct pessoa pai,mae,tio,irmao;
ou
struct pessoa{
    char nome[30];
    int idade;
}pai,mae,tio,irmao;
Declaração com typedef
struct a{
    int x;
    char y;
    typedef struct a MyStruct;
    MyStruct b; declaração da var b , cujo tipo é MyStruct
}
Acesso a dados
 struct a{
    int x;
    char y;
}MyStruct;

int main(void){
    int num;
    MyStruct.x = 10;
    MyStruct.y = 'a';
    num = MyStruct.x;
}

Atribuição
Struct S{
    int x;
    char y;
}a,b;
int main(void){
    a.x = 10;
    b = a;
    printf("%d",b.x);
}
struct S b,a ={10,'a'};
int main(void){
    b =a;
    printf("%d%c",b.x,b.y);
}

Operação

Struct S{
    int x;
    char y;
};
struct S b, a ={10,'a'};
int main(void){
    b.x = a.x * 2;
    b.y += 3;
}
Composição
struct ponto{
    int x;
    int y;
};
struct retangulo{
    struct ponto p1;
    struct ponto p2;
}ret;
ret.p1.x = 10;
ret.p1.y = 10;
ret.p2.x = 50;
ret.p2.y = 20;

Ponteiro
struct ponteiro{
    int x;
    int y;
    struct ponteiro* p;
    
}
*/

