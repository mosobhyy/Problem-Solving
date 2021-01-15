n = int(input())
word = []
if 1 <= n <= 100:
    for i in range(n):
        word.append(input())
    for i in range(n):
        if len(word[i]) > 10:
            print(word[i][0] + str(len(word[i]) - 2) + word[i][-1])
        else:
            print(word[i])
