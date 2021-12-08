/*
 * From our research paper "High-Performance Hardware Implementation of CRYSTALS-Dilithium"
 * by Luke Beckwith, Duc Tri Nguyen, Kris Gaj
 * at George Mason University, USA
 * https://eprint.iacr.org/2021/1451.pdf
 * =============================================================================
 * Copyright (c) 2021 by Cryptographic Engineering Research Group (CERG)
 * ECE Department, George Mason University
 * Fairfax, VA, U.S.A.
 * Author: Duc Tri Nguyen
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *     http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * =============================================================================
 * @author   Duc Tri Nguyen <dnguye69@gmu.edu>
 */

#ifndef CONFIG_H
#define CONFIG_H

#include "../params.h"

#define BRAM_DEPT (DILITHIUM_N / 4)

template <typename T>
struct BRAM
{
    T coeffs[BRAM_DEPT][4];
};

typedef BRAM<data_t> bram;

enum OPERATION
{
    FORWARD_NTT_MODE,
    INVERSE_NTT_MODE,
    MUL_MODE
};

enum MAPPING
{
    NATURAL,
    AFTER_NTT,
    AFTER_INVNTT
};

#endif
