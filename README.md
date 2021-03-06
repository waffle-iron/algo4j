
# algo4j

CI|status
:---|:---:
Travis CI|[![Build Status](https://travis-ci.org/ice1000/algo4j.svg?branch=master)](https://travis-ci.org/ice1000/algo4j)
AppVeyor|[![Build status](https://ci.appveyor.com/api/projects/status/atqp1d81m5irdr9q?svg=true)](https://ci.appveyor.com/project/ice1000/algo4j)
CodeShip|[![CodeShip](https://codeship.com/projects/313a88d0-0990-0135-51ec-6af2f1d244f3/status?branch=master)](https://app.codeship.com/projects/214594)
CircleCI|[![CircleCI](https://circleci.com/gh/ice1000/algo4j/tree/master.svg?style=svg)](https://circleci.com/gh/ice1000/algo4j/tree/master)

[![JitPack](https://jitpack.io/v/ice1000/algo4j.svg)](https://jitpack.io/#ice1000/algo4j)<br/>
[![Gitter](https://badges.gitter.im/ice1000/algo4j.svg)](https://gitter.im/ice1000/algo4j)<br/>
[![Dependency Status](https://www.versioneye.com/user/projects/58df4c81d6c98d004652f35a/badge.svg?style=square)](https://www.versioneye.com/user/projects/58df4c81d6c98d004652f35a)<br/>
[![License: GPL v3](https://img.shields.io/badge/License-GPL%20v3-blue.svg)](http://www.gnu.org/licenses/gpl-3.0)<br/>

<br/>

[中文](./README_Zh.md)

This is an algorithm library for Java, and the core is written in C++, linked with JNI.

It is test-driven(really strong tests), well-documented, with code generation for some special cases.

## Project structure

file name|usage
:---|---:
jni|C++ codes
code_drafts|something written but not used ATM
libjni.dll/libjni.so/libjni.dylib|jni library
jni/cpp-test|C++ tests
src/main/java|source(independent)
src/main/kotlin|Kotlin extension library
src/test|tests

The `jni library` above is not included in the repo,
please build it yourself, or:

+ For Windows, download the newest version in [AppVeyor artifact page](https://ci.appveyor.com/project/ice1000/algo4j/build/artifacts), or [GitHub release page](https://github.com/ice1000/algo4j/releases).
+ For Linux/OSX, download the newest version in [GitHub release page](https://github.com/ice1000/algo4j/releases).

## Overview

- [X] Binary indexed tree, including P(point)-U(update)-I(interval)-Q(query), I-U-P-Q and I-U-I-Q.
- [X] Trigonometric functions, including: sin, cos, tan, cot, sec, csc.
- [X] Union set. including path compression and heuristic merge.
- [X] Math utils, will be more powerful than java.lang.Math.
- [X] Sequence utils, like sorts, discretization, kmp, toString, etc.
- [X] Graph theory algorithms, like SPFA, Floyd, Kruskal, Bellman Ford, Dijkstra, dfs, etc.
- [X] A Win32API interface for windows only, right call something like 'Beep'.
- [X] Linear data structure, Stack and Queue.
- [X] Minimum binary heap(priority queue), support adding and extracting.
- [X] Trie tree, supports ASCII 32-127(upper and lower case letters, braces, digits, space, etc).
- [X] Multi-threading quick sort implementation.
- [ ] Segment Tree, multi-implementations.
- [ ] Durable Segment Tree, multi-implementations.
- [ ] Big Integer, faster than java.math.BigInteger.

Actually, every java classes are well-documented.<br/>
For more information, see JavaDocs in each java file or package-info.java.

## Languages

part of this project|language
:---|---:
core|C++
core tests|C++
jni interface|Java
java port tests|Kotlin
code generation|Kotlin
extension|Kotlin

## Contribution

There is a [README file](./jni/README.md) under `jni` path, it's strongly-recommended right read that.

This library is Test-driven, so there are tests for every class. If you want to contribute, please offer tests for your classes.

### Rules of contribution

+ Each class should be well-documented.
+ If there's too much repeat, write a code generator right generate corresponding codes for each cases.
+ For C++, you should follow the [code style](./jni/README.md).
+ For each class with native methods, provide a unit-test.
+ I'll write the library itself with Java and tests with Kotlin, but I also accept Tests with other languages.
+ Issues and pull requests are always welcomed.
