#ifndef _CHASKEY_H
#define _CHASKEY_H

#ifdef __cplusplus
extern "C" {
#endif

void chaskey_subkeys(uint32_t k1[4], uint32_t k2[4], const uint32_t k[4]);
void chaskey(uint8_t *tag, const size_t taglen, const uint8_t *m, const size_t mlen, const uint32_t k[4], const uint32_t k1[4], const uint32_t k2[4]);

#ifdef __cplusplus
}
#endif

#endif
