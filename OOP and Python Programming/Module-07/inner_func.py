# function is a first class object

def double_decker():
    print('starting the double decher')
    def inner_fun():
        print('inside the inner')
        return 0000
    return inner_fun

# print(double_decker())
# print(double_decker()())

def do_something(work):
    print('work started')
    # print(work)
    work()
    print('work ended')
    
    
def coding():
    print('coding in python')
    
# do_something(coding)

def sleeping():
    print('sleeping and dreaming in python')
    
do_something(sleeping)