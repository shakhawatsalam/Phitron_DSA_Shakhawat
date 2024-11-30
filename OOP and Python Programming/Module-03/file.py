# with open('message.txt', 'w') as  file:
#     file.write('I Love Python')
# with open('message.txt', 'a') as  file:
#     file.write(' and lol')
with open('message.txt', 'r') as  file:
    text = file.read()
    print(text)