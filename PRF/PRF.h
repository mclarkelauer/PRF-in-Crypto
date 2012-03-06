#include <stdio.h>
#include <openssl/md5.h>
#include "ecrypt-sync.h"
#include "vmac.h"

typedef struct
{
  ECRYPT_ctx  salsa_ctx;
  vmac_ctx_t vmac_ctx;
  uint64_t    key[2];
}prf_ctx_t;


