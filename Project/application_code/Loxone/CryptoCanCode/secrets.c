#include "secrets.h"

#error Run the downloadLoxoneAESKeys.py script on your server to generate the needed AES keys!

// The AES key/IV is generated by 4 hash functions from this data:
const uint8_t CryptoEncryptedAESKey[16] = { };
const uint8_t CryptoEncryptedAESIV[16] = { };

//const uint32_t CryptoCanAlgoKey[4] = { DEKHash(CryptoEncryptedAESKey,sizeof(CryptoEncryptedAESKey)), JSHash(CryptoEncryptedAESKey,sizeof(CryptoEncryptedAESKey)), DJBHash(CryptoEncryptedAESKey,sizeof(CryptoEncryptedAESKey)), RSHash(CryptoEncryptedAESKey,sizeof(CryptoEncryptedAESKey)) };
const uint32_t CryptoCanAlgoKey[4] = { };

//const uint32_t CryptoCanAlgoIV[4] = { DEKHash(CryptoEncryptedAESIV,sizeof(CryptoEncryptedAESIV)), JSHash(CryptoEncryptedAESIV,sizeof(CryptoEncryptedAESIV)), DJBHash(CryptoEncryptedAESIV,sizeof(CryptoEncryptedAESIV)), RSHash(CryptoEncryptedAESIV,sizeof(CryptoEncryptedAESIV)) };
const uint32_t CryptoCanAlgoIV[4] = { };

const uint32_t CryptoCanAlgoLegacyKey[4] = { };
const uint32_t CryptoCanAlgoLegacyIV[4] = { };

const uint8_t CryptoMasterDeviceID[12] = { };
