str = "/../"
arr = str.split('/')
print(arr)
str=[]
for i in arr:
    if i == '':
        continue
    if i == '.':
        continue
    if i == '..':
        if len(str)!=0:
            str.pop()
    else:
        str.append(i)
print(str)
ans ="/"
for it in str:
    ans+=it
    ans+='/'
if len(ans) > 1:
    ans=ans[:-1]
print(ans)
