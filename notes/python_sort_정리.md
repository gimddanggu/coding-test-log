# 🧠 Python 정렬 정리

## ✅ 정렬 함수 기본

- `sort()` → 리스트 전용 메서드, 원본을 정렬 (in-place)
- `sorted()` → 모든 iterable을 정렬해 **새 리스트 반환**

예:
```python
arr.sort()
sorted_arr = sorted(arr)
```

- 둘 다 `key`, `reverse` 인자를 받을 수 있음

---

## 🔍 정렬 기준 설정 (key)

- `key` 인자는 정렬 기준을 설정하는 함수
- 자주 사용하는 예시:
  - `key=len` → 길이 기준
  - `key=str.lower` → 대소문자 무시
  - `key=lambda x: (x[0], x[1])` → 다중 조건

### 🧩 다중 조건 정렬

```python
students = [('Amy', 20), ('Bob', 20), ('Charlie', 18)]
students.sort(key=lambda x: (x[1], x[0]))
# 나이 오름차순 → 이름 오름차순
```

### 🔻 내림차순 정렬 조건은 `-` 붙이기

```python
students.sort(key=lambda x: (-x[1], x[0]))
# 나이 내림차순 → 이름 오름차순
```

---

## ✂️ 슬라이싱을 이용한 정렬

- 문자열, 리스트의 일부분을 기준으로 정렬할 수 있다

```python
words = ['apple', 'apply', 'apricot']
sorted(words, key=lambda x: x[:2])
# 앞 두 글자 기준 정렬
```

- 슬라이싱 응용:
  - `x[:1]` → 첫 글자 기준
  - `x[-1]` → 마지막 글자 기준
  - `x[1:]` → 두 번째 글자부터 기준

---

## 🔠 문자열 정렬의 특징

- 사전 순 정렬: `'aac' > 'aab'` → 첫 글자부터 끝까지 비교
- 아스키코드 기준 정렬: `'A'(65) < 'a'(97)` → 대문자가 앞에 온다

---

## ⚙️ stable sort란?

- Python의 `sort()`와 `sorted()`는 Timsort 기반 **stable sort**
- 정렬 기준이 같을 경우 **입력 순서가 유지됨**

예:
```python
data = ['aab', 'aabb']
sorted(data, key=lambda x: x[:2])  # 결과: ['aab', 'aabb']
```

---

## 🔁 기타 팁

- `reverse=True`를 쓰면 전체 정렬 결과가 내림차순이 됨
- `key` 함수 안에서 음수(-)를 붙이면 **특정 조건만 내림차순** 처리 가능

---

이 정리는 문자열/리스트 정렬과 다중 조건 정렬에서 바로 써먹을 수 있습니다! 🔥
