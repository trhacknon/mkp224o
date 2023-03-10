#include "sc25519.h"
#include "compat.h"

#define ull4_mul        CRYPTO_NAMESPACE(ull4_mul)

extern void ull4_mul(unsigned long long r[8], const unsigned long long x[4], const unsigned long long y[4]) SYSVABI;

void sc25519_mul(sc25519 *r, const sc25519 *x, const sc25519 *y)
{
  unsigned long long t[8];
  ull4_mul(t, x->v, y->v);
  sc25519_barrett(r, t);
}
