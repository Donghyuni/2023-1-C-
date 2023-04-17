t = int(input()) # 테스트 케이스 수 입력

for i in range(t): # 각 테스트 케이스에 대해 반복
    n = int(input()) # 정수의 개수 입력
    nums = list(map(int, input().split())) # n개의 정수 입력받아 리스트로 저장
    total = sum(nums) # 리스트의 합 계산
    print(total) # 합 출력