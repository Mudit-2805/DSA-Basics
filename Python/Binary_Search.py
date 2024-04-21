L = [1,3,5,7,9]

def Binary_Search(List, low, high, x):
    
    if low > high:
        print("Element does not exist.")
        return False
    
    mid = (low+high)//2
    
    if x == List[mid]:
        print("Element exists.")
    elif x > List[mid]:
        Binary_Search(L, mid+1, high, x)
    else:
        Binary_Search(L, low, mid-1, x)
        
Binary_Search(L, 0, 5, 7)
