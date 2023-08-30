#!/usr/bin/env python3

l1s = input()
qs = input()

l1l = l1s.split(" ")
s = int(l1l[0])
t = int(l1l[1])
q = list(qs)

while t:
    t -= 1
    p = 0
    while p < s - 1:
        if q[p] == "B" and q[p + 1] == "G":
            q[p], q[p + 1] = q[p + 1], q[p]
            p += 2
        else:
            p += 1
print("".join(q))
