/* bn_sample.c */
#include <stdio.h>
#include <openssl/bn.h>
#define NBITS 256
void printBN(char *msg, BIGNUM *a)
{
/*
Use BN_bn2hex(a) for hex string*
Use BN_bn2dec(a) for decimal string
*/
char *number_str = BN_bn2hex(a);
printf("%s %s\n", msg, number_str);
OPENSSL_free(number_str);
}



int main ()
{
//declare necessary variables
BN_CTX *ctx = BN_CTX_new();
BIGNUM *p = BN_new();
BIGNUM *p_1 = BN_new();
BIGNUM *q = BN_new();
BIGNUM *q_1 = BN_new();
BIGNUM *e = BN_new();
BIGNUM *d = BN_new();
BIGNUM *n = BN_new();
BIGNUM *n_1 = BN_new();
BIGNUM *one = BN_new();

//Initialize p,q,e,one
BN_hex2bn(&p, "F7E75FDC469067FFDC4E847C51F452DF");
BN_hex2bn(&q, "E85CED54AF57E53E092113E62F436F4F");
BN_hex2bn(&e, "0D88C3");
BN_dec2bn(&one,"1");

// P_1=p-1
BN_sub(p_1,p,one);

//q_1=q-1
BN_sub(q_1,q,one);

//n_1=(p-1)(q-1)
BN_mul(n_1,p_1,q_1,ctx);

//d=e^-1 mod (n-1)
BN_mod_inverse(d,e,n_1,ctx);

//printing out the value of d
printBN("d is ",d);

return 0;
}








