int crypto_sign_seckey(unsigned char *sk);
int crypto_sign_seckey_expand(unsigned char *sk,const unsigned char *seed);
int crypto_sign_pubkey(unsigned char *pk,const unsigned char *sk);
int crypto_sign_keypair(unsigned char *pk,unsigned char *sk);
int crypto_sign(
    unsigned char *sm,unsigned long long *smlen,
    const unsigned char *m,unsigned long long mlen,
    const unsigned char *sk
);
int crypto_sign_open(
    unsigned char *m,unsigned long long *mlen,
    const unsigned char *sm,unsigned long long smlen,
    const unsigned char *pk
);
int crypto_sign_open_batch(
    unsigned char* const m[],unsigned long long mlen[],
    unsigned char* const sm[],const unsigned long long smlen[],
    unsigned char* const pk[],
    unsigned long long num
);
