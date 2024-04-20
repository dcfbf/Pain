import numpy
import time
m1h = 1000
m2l = 1000
m1lm2h = 1000
m1 = numpy.random.rand(m1h,m1lm2h)
m2 = numpy.random.rand(m1lm2h,m2l)
m3 = numpy.zeros((m1h,m2l))
def mMatrix(m1,m2):
    for i in range(0,len(m1)):
        for k in range(0,len(m2[0])):
            for j in range(0,len(m1[0])):
                m3[i][j] += m1[i][k]*m2[k][j]
start = time.process_time()
mMatrix(m1,m2)
stop = time.process_time()
"""
for i in range (0,len(m1)):
    print(m3[i])
"""
print("Time Taken: ", stop-start)
'''
i=0
j=0
k=0
l=0
m=0
n=0

def multiplyMatrix(i,j,k,l,m,n):
    for h in range(0,len(m1)):
        m3.append([0,0,0])
    for j in range (0,2):
        print(j)
        if j == 1:
            m3[i][j-1] += m1[i][j]*m2[j][i]
        else:
            m3[i][j] += m1[i][j]*m2[j][i]
    for l in range(0,2):
        if l == 1:
            m3[k][l] += m1[k][l]*m2[l][k+1]
        else:
            m3[k][l+1] += m1[k][l]*m2[l][k+1]
        print(m3)
    for n in range(0,2):
        if n == 1:
            m3[m][n+1] += m1[m][n]*m2[m][n+1]
        else:
            m3[m][n+2] += m1[m][n]*m2[m][n+1]
    for i in range(0,2):
        if i == 1:
            m3[j][i-1] += m1[j][i]*m2[j][i-1]
        else:
            m3[j][i] += m1[j][i]*m2[j-1][i]
    for k in range(0,2):
        if k == 1:
            m3[l][k] += m1[l][k]*m2[l][k]
        else:
            m3[l][k+1] += m1[l][k]*m2[l-1][k+1]
    for m in range(0,2):
        if m == 1:
            m3[n][m+1] += m1[n][m]*m2[n][m+1]
        else:
            m3[n][m+2] += m1[n][m]*m2[n-1][m+2]
    print(m3)
multiplyMatrix(i,j,k,l,m,n)
'''


