def merge(X, Y):
    xLen = len(X)
    yLen = len(Y)
    for i in range(xLen):
        if X[i] > Y[0]:
            temp = X[i]
            X[i] = Y[0]
            Y[0] = temp

            yFirst = Y[0]
            yNextIndex = 1
            while yNextIndex < yLen and Y[yNextIndex] < yFirst:
                Y[yNextIndex - 1] = Y[yNextIndex]
                yNextIndex += 1
            Y[yNextIndex - 1] = yFirst

if __name__ == "__main__":
    X = [1, 4, 7, 8, 10]
    Y = [2, 3, 9]
 
    merge(X, Y)
 
    print("X:", X)
    print("Y:", Y)