import numpy as np
import pandas as pd

def test_print(input: int):
    #print(f"The input was {input} ...")
    list = [[1,2,3],[4,5,6]]
    df = pd.DataFrame(list)
    print(df[0][1])


def main():
    test_print(12)


if __name__ == "__main__":
    main()



    

