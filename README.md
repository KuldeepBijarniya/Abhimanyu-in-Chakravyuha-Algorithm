# Abhimanyu in Chakravyuha Algorithm

## Overview

This repository contains an algorithm to determine if Abhimanyu can cross all 11 circles of the Chakravyuha given his initial power, the powers of enemies, the ability to skip fights, and the ability to recharge. The problem is inspired by the Mahabharata, where Abhimanyu is trapped in a complex military formation and must fight his way through various enemies.

## Problem Statement

Abhimanyu starts in the innermost circle with a certain power `p` and must cross 11 circles, each guarded by an enemy with power `k1, k2, ..., k11`. Abhimanyu has:
- `a` skips that allow him to skip fighting an enemy.
- `b` recharges that boost his power.
- Enemies at positions 3 and 7 have the ability to regenerate and attack from behind.

The algorithm determines if Abhimanyu can successfully cross all 11 circles and reach the Pandavas' army.

## Solution Description

The solution involves simulating Abhimanyu's journey through the 11 circles. At each circle, the algorithm decides whether Abhimanyu should fight, skip, or recharge based on his current power and the constraints provided. Special handling is implemented for regenerating enemies.

## Usage

### Inputs

The inputs to the algorithm are:
1. An array of 11 integers representing the powers of enemies in each circle.
2. An integer `p` representing Abhimanyu's initial power.
3. An integer `a` representing the number of skips.
4. An integer `b` representing the number of recharges.

### Output

The algorithm outputs `Yes` if Abhimanyu can cross all 11 circles successfully, and `No` if he cannot.

### Example

#### Test Case 1
**Input:**
1 2 3 4 5 6 9 8 9 10 11
55 2 0
**Output:**
Yes

#### Test Case 2
**Input:**
1 2 8 4 5 6 9 8 9 10 11
10 1 0
**Output:**
No
