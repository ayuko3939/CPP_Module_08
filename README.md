# CPP Module 08

42TokyoのCPP_Module_08プロジェクト - C++のSTLコンテナとアルゴリズムを学習します。

## 概要

このモジュールでは以下のC++の応用概念を学習します：
- テンプレート（Template）
- STLコンテナ（STL Containers）
- アルゴリズム（Algorithm）
- イテレータ（Iterator）
- 例外処理（Exception Handling）
- 継承（Inheritance）

## 課題

### Exercise 00: Easy find
**ディレクトリ**: `ex00/`

テンプレート関数`easyfind`を実装し、コンテナ内の値を検索する課題。
- 第一引数：整数のコンテナ（vector、list、deque等）
- 第二引数：検索したい値
- 戻り値：見つかった要素のイテレータ
- 見つからない場合は例外を投げる

**実行**:
```bash
./ex00
```

### Exercise 01: Span
**ディレクトリ**: `ex01/`

`Span`クラスを実装し、数値の集合を管理する課題。
- 指定された数のintを格納
- `addNumber()`: 数値を追加
- `shortestSpan()`: 最短距離を返す
- `longestSpan()`: 最長距離を返す
- 要素が1つ以下の場合や容量超過時は例外を投げる

**実行**:
```bash
./ex01
```

### Exercise 02: Mutant stack
**ディレクトリ**: `ex02/`

`std::stack`を継承した`MutantStack`クラスを実装する課題。
- `std::stack`の全ての機能を継承
- イテレータ機能を追加
- begin()、end()、rbegin()、rend()メソッドを実装
- stackでありながらイテレータでアクセス可能

**実行**:
```bash
./ex02
```

## コンパイル要件

- C++98標準
- フラグ: `-Wall -Wextra -Werror -std=c++98`
- 各exerciseにMakefileが含まれています
