/*
 * MustExistSA "Grand Theft Auto: San Andreas" shared source file
 * Authors: BRP Community https://github.com/blefmods/MustExistSA
 * Do not delete this comment block. Please, respect others works
*/

/* ===== MustExistSA.cleo ===================================== */

#include "plugin.h"
#include "cleo.h"

using namespace plugin;

class MustExistSA {
public:
    static OpcodeResult WINAPI OpcodeFunc(CScriptThread* thread) {
        // ========== Opcode Body =============================================================================
        // ====================================================================================================
        return OR_CONTINUE;
    }
    MustExistSA() {
        // ========== Opcode Register =========================================================================
        // CLEO_RegisterOpcode(/*opcode_id*/, OpcodeFunc);
        // ====================================================================================================
    }
} mustExistSA;
