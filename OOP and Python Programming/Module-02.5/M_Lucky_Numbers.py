arr = input().split()

int_arr = [int(x) for x in arr]

check = 1
for x in range(int_arr[0], int_arr[1] + 1):
  flag = 1
  temp = x
  while temp > 0:
    r = temp % 10
    if r != 4 and r != 7:
      flag = 0
      break
    temp//=10
    
  if flag == 1:
    check = 0
    print(x, end=" ")

if check == 1:
  print(-1)


  



   
