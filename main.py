def maxsubarr (a,size):
    maxsofar = a[0]
    currmax = a[0]
    for i in range(1,size):
        currmax = max(currmax + a[i] , a[i])
        maxsofar = max(maxsofar , currmax)
    return maxsofar

x = int(input())
while x!=0 :
    a = list(map(int, input().split()))
    if int(maxsubarr(a, x)) <= 0:
        print("Losing streak.")
    else:
        print("The maximum winning streak is" , str(maxsubarr(a,x))+".")
    x = int(input())


