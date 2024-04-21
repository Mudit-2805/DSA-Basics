L = [1,3,5,7,9]

def Binary_Search(L, l, h, x):
    
    if l > h:
        print("Element does not exist.")
        return False
    
    mid = (l+h)//2
    
    if x == L[mid]:
        print("Element Exists.")
    elif x > L[mid]:
        Binary_Search(L, mid+1, h, x)
    else:
        Binary_Search(L, l, mid-1, x)
        
Binary_Search(L, 0, 5, 7)
