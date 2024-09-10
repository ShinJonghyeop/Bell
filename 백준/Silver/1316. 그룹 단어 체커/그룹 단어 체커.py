def is_group_word(word):
    seen = set()  
    pre = '' 

    for char in word:
        if char != pre: 
            if char in seen:
                return False
            seen.add(char)  
            pre = char   
    return True  

N = int(input())
count = 0 

for _ in range(N):
    word = input()
    if is_group_word(word):
        count += 1

print(count)
