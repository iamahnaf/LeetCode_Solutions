s=['h','e','l','l','o']
print(s)
slen=len(s)//2
lastIndex=len(s)-1
for i in range(slen):
    s[i],s[lastIndex - i] = s[lastIndex - i],s[i]

print(s)