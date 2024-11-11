def infix_to_postfix(expression):
    precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '(': 0}
    stack = []
    result = ""

    for char in expression:
        if char.isalpha():
            result += char
        elif char == '(': 
            stack.append(char)
        elif char == ')': 
            while stack and stack[-1] != '(':
                result += stack.pop()
            stack.pop()  
        else:  
            while stack and precedence[stack[-1]] >= precedence[char]:
                result += stack.pop()
            stack.append(char)

    while stack:
        result += stack.pop()

    return result

expression = input().strip()

postfix_expression = infix_to_postfix(expression)

print(postfix_expression)
