# Doit
- 알아서 문제풀고 백준 정답코드 올리기 (월) (수) (금)
- 파트를 1명씩 맡아서 개념 리뷰
    - 마음대로 블로그를 가져오든, 영상 활용가능
- 문제에 관해선 질문만 하고 리뷰는 따로 진행안함

## 자료구조 
### C++ 코딩테슷트 시간줄이기
```
    ios::sync_with_stdio(false); //stdio 비활성화, C++ 독립 버퍼사용
    cin.tie(NULL); 
    cout.tie(NULL); //cout 출력 버터지우는 작업 생략
    
    endl -> "\n" 사용
```
### C++에서 형변환
```
#include <string>
string num = "1234";
int inum = stoi(num);
int lnum = stol(num);
int double = stod(num);
int float = stof(num);

int num = 1234;

string intoString = to_string(num);
```

### C++ 템플릿
```
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define PRECISION 0

// 전역변수 선언부

void Main(){
    // 코드 작성부
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.setf(ios::fixed);
    cout.precision(PRECISION); // 부동소수점 PRECISION 자리까지 출력
    Main();
    return 0;
}
```

## 정렬

## 탐색

## 그리디

## 정수론

## 그래프

## 트리

## 조합

## 동적계획법

## 기하
