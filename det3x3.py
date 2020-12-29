print("welcome to 3X3 matrix determinant calculator\n")
mat=[[0,0,0],[0,0,0],[0,0,0]]
for i in range(3):
    print("please enter the",i+1," row of matrix")
    x=input()
    row=x.split()
    for j in range(3):
        mat[i][j]=int(row[j])
dat={}
dat[mat[0][0]]=(mat[1][1]*mat[2][2])-(mat[2][1]*mat[1][2])
dat[mat[0][1]]=(mat[1][0]*mat[2][2])-(mat[2][0]*mat[1][2])
dat[mat[0][2]]=(mat[1][0]*mat[2][1])-(mat[2][0]*mat[1][1])
c=t=0
k=list(dat.keys())
v=list(dat.values())
while(c<len(dat)):
    if c%2==0:
        t+=k[c]*v[c]
    else:
        t-=(k[c]*v[c])
    c+=1
print("determinant of entered matrix =",t)