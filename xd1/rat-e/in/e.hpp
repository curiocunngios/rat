#pragma once

enum class Error {bMagic, nElf64, tShort, nLilEn};

struct Header {
    uint8_t cls; // class: 32/64, 1 = 32bit, 2 = 64bit
    uint8_t dat; // data: 1 = lil, 2 = big
    uint16_t ty; // type: 2 = exec, 3 = dyn, 4= core, 1=rel
    uint16_t mac; // machine: 243 = riscv, 62=x86-64, 183=aarch64
    uint64_t ent; // entry addr (_start, virtual)
    uint64_t pho; // program headers offset
    uint64_t sho;// section headers offset
    uint16_t phn; // the number of them
    uint16_t shn; // the number
};