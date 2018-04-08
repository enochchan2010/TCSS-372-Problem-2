// lc3.c


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
=======
>>>>>>> master

#include "lc3.h"
// you can define a simple memory module here for this program
unsigned short memory[32]; // 32 words of memory enough to store simple program

void controller () {
    // check to make sure both pointers are not NULL
    // do any initializations here
        unsigned int opcode, Rd, Rs1, Rs2, offset ;// fields for the IR
<<<<<<< HEAD

=======
    
>>>>>>> master
    int state = FETCH;
    // for (;;) { // efficient endless loop to be used in the next problem
        switch (state) {
            case FETCH: // microstates 18, 33, 35 in the book
                printf("Here in FETCH\n");
                // get memory[PC] into IR - memory is a global array
                // increment PC
<<<<<<< HEAD
                //printf("Contents of IR = %04X\n", ir);
=======
                //printf("Contents of IR = %04X\n", cpu->ir);
>>>>>>> master
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// put printf statements in each state and microstate to see that it is
// working
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                state = DECODE;
                break;
            case DECODE: // microstate 32
                // get the fields out of the IR
                // make sure opcode is in integer form
                // hint: use four unsigned int variables, opcode, Rd, Rs, and
                // immed7
                // extract the bit fields from the IR into these variables
                state = EVAL_ADDR;
                break;
            case EVAL_ADDR:
                // Look at the LD instruction to see microstate 2 example
                switch (opcode) {
                // different opcodes require different handling
                // compute effective address, e.g. add sext(immed7) to
                // register
                }
                state = FETCH_OP;
                break;
            case FETCH_OP:
            // Look at ST. Microstate 23 example of getting a value out of a
            // register
                switch (opcode) {
                    // get operands out of registers into A, B of ALU
                    // or get memory for load instr.
                }
                state = EXECUTE;
                break;
            case EXECUTE: // Note that ST does not have an execute microstate
                switch (opcode) {
                    // do what the opcode is for, e.g. ADD
                    // in case of TRAP: call trap(int trap_vector) routine,
                    // see below for TRAP x25 (HALT)
                }
                state = STORE;
                break;
            case STORE: // Look at ST. Microstate 16 is the store to memory
                switch (opcode) {
                    // do what the opcode is for, e.g. ADD
                    // in case of TRAP: call trap(int trap_vector) routine,
                    // see below for TRAP x25 (HALT)
                }
                state = STORE;
                break;
        }
    // if-loop }
}

int main(int argc, char* argv[]) {
<<<<<<< HEAD
    

}

unsigned int intToBinary(unsigned int num) {
    if (num == 0) return 0;
    return (num % 2) + 10 * intToBinary(num / 2);
}

unsigned int * toArray(unsigned int num) {
    int length = log10(num) + 1;
    unsigned int *arr = calloc(16, sizeof(unsigned int));
    int i;
    for (i = 15; i > 15 - length; i--) {
        arr[i] = num % 10;
        num /= 10;
    }
    return arr;
}

void executeAdd(unsigned int Rd, unsigned int Rs1, unsigned int Rs2,
                unsigned int offset, unsigned int mode) {
    if (mode == 0) { // need to parse mode from IR
        Rd = Rs1 + Rs2;
    } else {
        Rd = Rs1 + offset;
    }
    // need to set condition codes
}

void executeAnd(unsigned int Rd, unsigned int Rs1, unsigned int Rs2,
                unsigned int offset, unsigned int mode) {
    unsigned int s1Bin = intToBinary(Rs1);
    unsigned int *s1Arr = toArray(s1Bin);
    unsigned int result;
    int i;
    if (mode == 0) { // need to parse mode from IR
        unsigned int s2Bin = intToBinary(Rs2);
        unsigned int *s2Arr = toArray(s2Bin);
        for (i = 15; i >= 0; i--) {
            if (s1Arr[i] == 1 && s2Arr[i] == 1) {
                result += pow(10, 15 - i);
            }
        }
    } else {
        unsigned int imm5Bin = intToBinary(offset);
        unsigned int *imm5Arr = toArray(imm5Bin);
        for (i = 15; i >= 11; i--) {
            if (s1Arr[i] == 1 && imm5Arr[i] == 1) {
                result += pow(10, 15 - i);
            }
        }
    }

    // convert back from binary to integer
    // store into Rd

    // need to set condition codes
}
=======
    //memory[0] = argv[1];
    printf("Here");

}
>>>>>>> master
