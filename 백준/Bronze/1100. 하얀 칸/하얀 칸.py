# 체스판 상태 입력 받기
chessboard = [input().strip() for _ in range(8)]
count = 0
for i in range(8):
    for j in range(8):
        if (i + j) % 2 == 0:
            if chessboard[i][j] == 'F':
                count += 1

print(count)
