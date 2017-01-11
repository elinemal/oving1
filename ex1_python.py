# oving1

from threading import Thread

i = 0

    global i

def add(): #thread1
  for x in range(0,1000000):
      global i
      i+=1
  
def sub(): #thread2
  for x in range(0,1000000):
      global i
      i-=1
  
def main():
    thread1 = Thread(target = add, args = (),)
    thread1.start()
    
    thread2 = Thread(target = sub, args = (),)
    thread2.start()
    
    #thread1.join(thread2)
    print(i)

main()


# Potentially useful thing:
#   In Python you "import" a global variable, instead of "export"ing it when you declare it
#   (This is probably an effort to make you feel bad about typing the word "global")
