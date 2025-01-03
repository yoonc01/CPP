# 42 Seoul CPP Modules

이 저장소는 42 Seoul CPP 모듈(00부터 04까지)의 솔루션과 구현 내용을 포함하고 있습니다. 이 모듈들은 C++ 프로그래밍의 기초부터 객체 지향 프로그래밍 원칙 및 고급 기능에 대한 이해를 깊게 하는 것을 목표로 설계되었습니다.

## 저장소 구조

이 저장소는 다음과 같이 구성되어 있습니다:

```
CPP/
├── cpp00/
├── cpp01/
├── cpp02/
├── cpp03/
└── cpp04/
```

각 디렉토리는 특정 모듈에 해당하며, 필요한 과제, 소스 코드, 구현 세부 정보가 포함되어 있습니다.

---

## 모듈 개요

### CPP Module 00
- **중점**: C++ 기초 소개
- **다루는 주제**:
  - 네임스페이스
  - 클래스와 객체
  - 생성자와 소멸자
  - 멤버 함수와 변수
- **학습 목표**:
  - C++의 기본 구문과 구조를 이해합니다.
- **Exercise 개요**:
  1. **ex00**: 기본 클래스와 객체 생성 연습. (정통 캐노니컬 폼으로 작성 연습)
  2. **ex01**: 메모리 할당 및 소멸자 구현. (동적 메모리 관리 학습)
  3. **ex02**: 멤버 함수와 변수의 사용. (다형성과 연산자 오버로딩 이해)

---

### CPP Module 01
- **중점**: 메모리 관리 및 파일 스트림
- **다루는 주제**:
  - 동적 메모리 할당 (`new`와 `delete`)
  - 참조자와 포인터
  - 파일 입출력
- **학습 목표**:
  - 메모리를 효과적으로 관리하고 C++에서 파일 작업을 수행합니다.
- **Exercise 개요**:
  1. **ex00**: 포인터와 참조자 이해. (기본 개념 연습)
  2. **ex01**: 동적 메모리 관리 연습. (Zombie Horde 생성)
  3. **ex02**: 파일 입출력 구현. (연락처 관리 시스템 설계)

---

### CPP Module 02
- **중점**: 연산자 오버로딩 및 고급 클래스 개념
- **다루는 주제**:
  - 연산자 오버로딩
  - 복사 생성자와 대입 연산자
  - 정적 멤버와 함수
- **학습 목표**:
  - 클래스 동작에 대한 심층적인 이해와 사용자 정의 연산자 구현 능력을 습득합니다.
- **Exercise 개요**:
  1. **ex00**: 복사 생성자와 대입 연산자 구현. (Orthodox Canonical Form)
  2. **ex01**: 정적 멤버와 정적 함수 사용.
  3. **ex02**: 고정 소수점 수를 처리하는 Fixed 클래스 구현. (연산자 오버로딩 포함)

---

### CPP Module 03
- **중점**: 상속과 다형성
- **다루는 주제**:
  - 클래스 상속
  - 가상 함수
  - 추상 클래스
- **학습 목표**:
  - 다형적인 동작을 설계하고 구현하는 방법을 배웁니다.
- **Exercise 개요**:
  1. **ex00**: 기본 상속 구조 설계. (다형성의 기초 이해)
  2. **ex01**: 가상 함수 구현. (추상 클래스 활용)
  3. **ex02**: 인터페이스 설계 및 구현.

---

### CPP Module 04
- **중점**: 추상 클래스, 인터페이스 및 서브타입 다형성
- **다루는 주제**:
  - 추상 클래스와 순수 가상 함수
  - 인터페이스 구현
  - 고급 메모리 관리
- **학습 목표**:
  - 추상화를 마스터하고 유연하고 확장 가능한 시스템을 설계합니다.
- **Exercise 개요**:
  1. **ex00**: 추상 클래스 설계 및 다형성 활용. (업캐스팅과 다운캐스팅)
  2. **ex01**: 깊은 복사와 얕은 복사 구현.
  3. **ex02**: 추상 클래스 및 인터페이스 설계. (순수 가상 함수 포함)

---

## 시작하기

이 저장소를 클론하려면 다음 명령어를 실행하세요:

```
git clone https://github.com/yoonc01/CPP.git
```

해당 모듈 디렉토리로 이동하여 솔루션과 구현 세부 정보를 확인하세요.

---

## 사용 방법

1. **빌드 및 실행**:
   각 모듈에는 간단히 컴파일할 수 있는 Makefile이 포함되어 있습니다. 원하는 모듈 디렉토리로 이동한 뒤 다음을 실행하세요:
   ```
   make
   ./program_name
   ```
2. **클린 빌드**:
   컴파일된 파일을 정리하려면:
   ```
   make clean
   ```

---

## 작성자

[GitHub Profile](https://github.com/yoonc01)

질문이나 제안이 있다면 GitHub 이슈를 통해 문의하세요.
