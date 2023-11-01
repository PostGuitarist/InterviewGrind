greeting = input().strip()
e_count = greeting.count('e')
new_greeting = 'h' + 'e' * (2 * e_count) + 'y'
print(new_greeting)