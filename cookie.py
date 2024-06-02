import sys
import time
import os
import numbers

def spell(base_time=time.time(), sleep_time=10, duration=400, times=float("inf")):
    while(times>0):
        if(time.time() > base_time + duration):
                os.system("clear")
                print("spell!")
                base_time+=duration
                times-=1
                time.sleep(sleep_time)
        else:
                print(time.time(),  "sleep")
                time.sleep(sleep_time)

def max_efficient_cookie(s=None ,fever=True):
    cps = None
    while cps is None:
        try:
            cps = float(s)
        except:
            s = input("type CpS: ")

    n = 60 * 30 * cps * (7 if fever else 1) / 0.15
    while(n > 1000):
        n/=1000

    gain = n * 0.15 
    print(f"store {n:.4g} cookies to gain {gain:.4g} cookies")

if __name__ == "__main__":
    if len(sys.argv) == 2:
        max_efficient_cookie(sys.argv[1])
    else:
        max_efficient_cookie()

