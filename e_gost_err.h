/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2018 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_GOSTERR_H
# define HEADER_GOSTERR_H

# define GOSTerr(f, r) ERR_GOST_error((f), (r), OPENSSL_FILE, OPENSSL_LINE)


# ifdef  __cplusplus
extern "C" {
# endif
int ERR_load_GOST_strings(void);
void ERR_unload_GOST_strings(void);
void ERR_GOST_error(int function, int reason, char *file, int line);
# ifdef  __cplusplus
}
# endif

/*
 * GOST function codes.
 */
# define GOST_F_DECODE_GOST_ALGOR_PARAMS                  100
# define GOST_F_ENCODE_GOST_ALGOR_PARAMS                  101
# define GOST_F_FILL_GOST_EC_PARAMS                       102
# define GOST_F_GET_ENCRYPTION_PARAMS                     103
# define GOST_F_GOST89_GET_ASN1_PARAMETERS                104
# define GOST_F_GOST89_SET_ASN1_PARAMETERS                105
# define GOST_F_GOST_CIPHER_CTL                           106
# define GOST_F_GOST_EC_COMPUTE_PUBLIC                    107
# define GOST_F_GOST_EC_KEYGEN                            108
# define GOST_F_GOST_EC_SIGN                              109
# define GOST_F_GOST_EC_VERIFY                            110
# define GOST_F_GOST_GRASSHOPPER_CIPHER_CTL               111
# define GOST_F_GOST_GRASSHOPPER_SET_ASN1_PARAMETERS      112
# define GOST_F_GOST_IMIT_CTRL                            113
# define GOST_F_GOST_IMIT_FINAL                           114
# define GOST_F_GOST_IMIT_UPDATE                          115
# define GOST_F_GOST_KDFTREE2012_256                      149
# define GOST_F_GOST_KEXP15                               143
# define GOST_F_GOST_KIMP15                               148
# define GOST_F_OMAC_ACPKM_IMIT_CTRL                      144
# define GOST_F_OMAC_ACPKM_IMIT_FINAL                     145
# define GOST_F_OMAC_ACPKM_IMIT_UPDATE                    146
# define GOST_F_OMAC_ACPKM_KEY                            147
# define GOST_F_OMAC_IMIT_CTRL                            116
# define GOST_F_OMAC_IMIT_FINAL                           117
# define GOST_F_OMAC_IMIT_UPDATE                          118
# define GOST_F_OMAC_KEY                                  138
# define GOST_F_PARAM_COPY_GOST_EC                        119
# define GOST_F_PKEY_GOST2001_PARAMGEN                    120
# define GOST_F_PKEY_GOST2012_PARAMGEN                    121
# define GOST_F_PKEY_GOST2018_ECCP_ENCRYPT                150
# define GOST_F_PKEY_GOST2018_ENCRYPT                     151
# define GOST_F_PKEY_GOST_CTRL                            122
# define GOST_F_PKEY_GOST_ECCP_DECRYPT                    123
# define GOST_F_PKEY_GOST_ECCP_ENCRYPT                    124
# define GOST_F_PKEY_GOST_EC_CTRL_STR_256                 125
# define GOST_F_PKEY_GOST_EC_CTRL_STR_512                 126
# define GOST_F_PKEY_GOST_EC_DERIVE                       127
# define GOST_F_PKEY_GOST_GRASSHOPPER_MAC_SIGNCTX_INIT    141
# define GOST_F_PKEY_GOST_MAC_CTRL                        128
# define GOST_F_PKEY_GOST_MAC_CTRL_STR                    129
# define GOST_F_PKEY_GOST_MAC_KEYGEN_BASE                 130
# define GOST_F_PKEY_GOST_MAC_SIGNCTX_INIT                131
# define GOST_F_PKEY_GOST_MAGMA_MAC_SIGNCTX_INIT          142
# define GOST_F_PKEY_GOST_OMAC_CTRL                       139
# define GOST_F_PKEY_GOST_OMAC_CTRL_STR                   140
# define GOST_F_PRINT_GOST_EC_PUB                         132
# define GOST_F_PRIV_DECODE_GOST                          133
# define GOST_F_PUB_DECODE_GOST_EC                        134
# define GOST_F_PUB_ENCODE_GOST_EC                        135
# define GOST_F_UNPACK_CP_SIGNATURE                       136
# define GOST_F_VKO_COMPUTE_KEY                           137

/*
 * GOST reason codes.
 */
# define GOST_R_BAD_KEY_PARAMETERS_FORMAT                 100
# define GOST_R_BAD_MAC                                   133
# define GOST_R_BAD_ORDER                                 132
# define GOST_R_BAD_PKEY_PARAMETERS_FORMAT                101
# define GOST_R_CANNOT_PACK_EPHEMERAL_KEY                 102
# define GOST_R_CIPHER_NOT_FOUND                          103
# define GOST_R_CTRL_CALL_FAILED                          104
# define GOST_R_ERROR_COMPUTING_EXPORT_KEYS               135
# define GOST_R_ERROR_COMPUTING_SHARED_KEY                105
# define GOST_R_ERROR_PARSING_KEY_TRANSPORT_INFO          106
# define GOST_R_ERROR_POINT_MUL                           107
# define GOST_R_INCOMPATIBLE_ALGORITHMS                   108
# define GOST_R_INCOMPATIBLE_PEER_KEY                     109
# define GOST_R_INVALID_CIPHER                            134
# define GOST_R_INVALID_CIPHER_PARAMS                     110
# define GOST_R_INVALID_CIPHER_PARAM_OID                  111
# define GOST_R_INVALID_DIGEST_TYPE                       112
# define GOST_R_INVALID_IV_LENGTH                         113
# define GOST_R_INVALID_MAC_KEY_LENGTH                    114
# define GOST_R_INVALID_MAC_KEY_SIZE                      115
# define GOST_R_INVALID_MAC_PARAMS                        116
# define GOST_R_INVALID_MAC_SIZE                          117
# define GOST_R_INVALID_PARAMSET                          118
# define GOST_R_KEY_IS_NOT_INITIALIZED                    119
# define GOST_R_KEY_PARAMETERS_MISSING                    120
# define GOST_R_MAC_KEY_NOT_SET                           121
# define GOST_R_NO_PARAMETERS_SET                         122
# define GOST_R_NO_PEER_KEY                               123
# define GOST_R_NO_PRIVATE_PART_OF_NON_EPHEMERAL_KEYPAIR  124
# define GOST_R_PUBLIC_KEY_UNDEFINED                      125
# define GOST_R_RNG_ERROR                                 126
# define GOST_R_SIGNATURE_MISMATCH                        127
# define GOST_R_SIGNATURE_PARTS_GREATER_THAN_Q            128
# define GOST_R_UKM_NOT_SET                               129
# define GOST_R_UNSUPPORTED_CIPHER_CTL_COMMAND            130
# define GOST_R_UNSUPPORTED_PARAMETER_SET                 131

#endif
