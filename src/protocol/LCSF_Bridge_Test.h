/**
 * \file LCSF_Bridge_Test.h
 * \brief Test LCSF bridge module
 * \author LCSF Generator v1.1
 *
 */

#ifndef Lcsf_bridge_test_h
#define Lcsf_bridge_test_h

// *** Libraries include ***
// Standard lib
#include <stdbool.h>
#include <stdint.h>
// Custom lib
#include <LCSF_Validator.h>
#include "Test_Main.h"

// *** Definitions ***
// --- Public Types ---

// Lcsf protocol identifier
#define LCSF_TEST_PROTOCOL_ID 0x55

// Command identifier enum
enum _lcsf_test_cmd_id {
    LCSF_TEST_CMD_ID_SC1 = 0x0,
    LCSF_TEST_CMD_ID_SC2 = 0x1,
    LCSF_TEST_CMD_ID_SC3 = 0x2,
    LCSF_TEST_CMD_ID_CC1 = 0x3,
    LCSF_TEST_CMD_ID_CC2 = 0x4,
    LCSF_TEST_CMD_ID_CC3 = 0x5,
    LCSF_TEST_CMD_ID_CC4 = 0x6,
    LCSF_TEST_CMD_ID_CC5 = 0x7,
    LCSF_TEST_CMD_ID_CC6 = 0x8,
};

// Attribute identifier enums
enum _lcsf_test_ca1_att_id {
    LCSF_TEST_CA1_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CA1_ATT_ID_SA2 = 0x1,
    LCSF_TEST_CA1_ATT_ID_SA3 = 0x2,
};

enum _lcsf_test_ca10_att_id {
    LCSF_TEST_CA10_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CA10_ATT_ID_CA11 = 0xb,
};

enum _lcsf_test_ca11_att_id {
    LCSF_TEST_CA11_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CA11_ATT_ID_CA12 = 0xa,
};

enum _lcsf_test_ca12_att_id {
    LCSF_TEST_CA12_ATT_ID_SA4 = 0x3,
};

enum _lcsf_test_ca2_att_id {
    LCSF_TEST_CA2_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CA2_ATT_ID_CA3 = 0xb,
};

enum _lcsf_test_ca3_att_id {
    LCSF_TEST_CA3_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CA3_ATT_ID_CA4 = 0xa,
};

enum _lcsf_test_ca4_att_id {
    LCSF_TEST_CA4_ATT_ID_SA4 = 0x3,
};

enum _lcsf_test_ca5_att_id {
    LCSF_TEST_CA5_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CA5_ATT_ID_SA2 = 0x1,
    LCSF_TEST_CA5_ATT_ID_SA3 = 0x2,
};

enum _lcsf_test_ca6_att_id {
    LCSF_TEST_CA6_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CA6_ATT_ID_CA7 = 0xb,
};

enum _lcsf_test_ca7_att_id {
    LCSF_TEST_CA7_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CA7_ATT_ID_CA8 = 0xa,
};

enum _lcsf_test_ca8_att_id {
    LCSF_TEST_CA8_ATT_ID_SA4 = 0x3,
};

enum _lcsf_test_ca9_att_id {
    LCSF_TEST_CA9_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CA9_ATT_ID_SA2 = 0x1,
    LCSF_TEST_CA9_ATT_ID_SA3 = 0x2,
};

enum _lcsf_test_cc1_att_id {
    LCSF_TEST_CC1_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CC1_ATT_ID_SA2 = 0x1,
    LCSF_TEST_CC1_ATT_ID_SA3 = 0x2,
    LCSF_TEST_CC1_ATT_ID_SA4 = 0x3,
    LCSF_TEST_CC1_ATT_ID_SA5 = 0x4,
    LCSF_TEST_CC1_ATT_ID_SA6 = 0x5,
    LCSF_TEST_CC1_ATT_ID_SA7 = 0x6,
    LCSF_TEST_CC1_ATT_ID_SA8 = 0x7,
    LCSF_TEST_CC1_ATT_ID_SA9 = 0x8,
    LCSF_TEST_CC1_ATT_ID_SA10 = 0x9,
};

enum _lcsf_test_cc2_att_id {
    LCSF_TEST_CC2_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CC2_ATT_ID_SA2 = 0x1,
    LCSF_TEST_CC2_ATT_ID_SA3 = 0x2,
    LCSF_TEST_CC2_ATT_ID_SA4 = 0x3,
    LCSF_TEST_CC2_ATT_ID_SA5 = 0x4,
    LCSF_TEST_CC2_ATT_ID_SA6 = 0x5,
    LCSF_TEST_CC2_ATT_ID_SA7 = 0x6,
    LCSF_TEST_CC2_ATT_ID_SA8 = 0x7,
    LCSF_TEST_CC2_ATT_ID_SA9 = 0x8,
    LCSF_TEST_CC2_ATT_ID_SA10 = 0x9,
};

enum _lcsf_test_cc3_att_id {
    LCSF_TEST_CC3_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CC3_ATT_ID_SA2 = 0x1,
    LCSF_TEST_CC3_ATT_ID_SA3 = 0x2,
    LCSF_TEST_CC3_ATT_ID_SA4 = 0x3,
    LCSF_TEST_CC3_ATT_ID_SA5 = 0x4,
    LCSF_TEST_CC3_ATT_ID_SA6 = 0x5,
    LCSF_TEST_CC3_ATT_ID_SA7 = 0x6,
    LCSF_TEST_CC3_ATT_ID_SA8 = 0x7,
    LCSF_TEST_CC3_ATT_ID_SA9 = 0x8,
    LCSF_TEST_CC3_ATT_ID_SA10 = 0x9,
};

enum _lcsf_test_cc4_att_id {
    LCSF_TEST_CC4_ATT_ID_SA1 = 0x0,
    LCSF_TEST_CC4_ATT_ID_CA1 = 0xa,
    LCSF_TEST_CC4_ATT_ID_CA2 = 0xb,
};

enum _lcsf_test_cc5_att_id {
    LCSF_TEST_CC5_ATT_ID_SA2 = 0x1,
    LCSF_TEST_CC5_ATT_ID_CA5 = 0xa,
    LCSF_TEST_CC5_ATT_ID_CA6 = 0xb,
};

enum _lcsf_test_cc6_att_id {
    LCSF_TEST_CC6_ATT_ID_SA4 = 0x3,
    LCSF_TEST_CC6_ATT_ID_CA9 = 0xa,
    LCSF_TEST_CC6_ATT_ID_CA10 = 0xb,
};

// --- Public Constants ---

// Command number
#define LCSF_TEST_CMD_NB TEST_CMD_COUNT
// Command attribute number
#define LCSF_TEST_CMD_CC1_ATT_NB 10
#define LCSF_TEST_CMD_CC2_ATT_NB 10
#define LCSF_TEST_CMD_CC3_ATT_NB 10
#define LCSF_TEST_CMD_CC4_ATT_NB 3
#define LCSF_TEST_CMD_CC5_ATT_NB 3
#define LCSF_TEST_CMD_CC6_ATT_NB 3
// Attribute sub-attributes number
#define LCSF_TEST_ATT_CA1_SUBATT_NB 3
#define LCSF_TEST_ATT_CA2_SUBATT_NB 2
#define LCSF_TEST_ATT_CA3_SUBATT_NB 2
#define LCSF_TEST_ATT_CA4_SUBATT_NB 1
#define LCSF_TEST_ATT_CA5_SUBATT_NB 3
#define LCSF_TEST_ATT_CA6_SUBATT_NB 2
#define LCSF_TEST_ATT_CA7_SUBATT_NB 2
#define LCSF_TEST_ATT_CA8_SUBATT_NB 1
#define LCSF_TEST_ATT_CA9_SUBATT_NB 3
#define LCSF_TEST_ATT_CA10_SUBATT_NB 2
#define LCSF_TEST_ATT_CA11_SUBATT_NB 2
#define LCSF_TEST_ATT_CA12_SUBATT_NB 1

// --- Public Function Prototypes ---

/**
 * \fn bool LCSF_Bridge_TestInit(uint16_t filoSize)
 * \brief Initialize the module
 *
 * \param filoSize size of the module filo (number of element)
 * \return bool: true if operation was a success
 */
bool LCSF_Bridge_TestInit(uint16_t filoSize);

/**
 * \fn bool LCSF_Bridge_TestReceive(lcsf_valid_cmd_t *pValidCmd)
 * \brief Receive valid command from LCSF_Validator and transmit to Test_Main
 *
 * \param pValidCmd pointer to the valid command
 * \return bool: true if operation was a success
 */
bool LCSF_Bridge_TestReceive(lcsf_valid_cmd_t *pValidCmd);

/**
 * \fn bool LCSF_Bridge_TestSend(uint16_t cmdName, test_cmd_payload_t *pCmdPayload)
 * \brief Receive command from Test_Main and transmit to LCSF_Validator
 *
 * \param cmdName name of the command
 * \param pValidCmd pointer to the valid command
 * \return bool: true if operation was a success
 */
bool LCSF_Bridge_TestSend(uint16_t cmdName, test_cmd_payload_t *pCmdPayload);

// *** End Definitions ***
#endif // Lcsf_bridge_test_h
