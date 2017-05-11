import cs50

def main():
    while True:
        print("height: ", end = "")
        height = cs50.get_int()
        if height >= 0 and height <= 23:
            break
        
    for i in range(height):
        print (" "*(height - i - 1)+ "#"*(i+2)+ "  "+ "#"*(i+2))
            
if __name__ == "__main__":
    main()