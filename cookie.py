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

def max_efficient_cookie(s=None ,ratio=7, second=30*60, limit=0.15):
    ratio=float(ratio)
    second=float(second)
    limit=float(limit)
    cps = None
    while cps is None:
        try:
            cps = float(s)
        except:
            s = input("type CpS: ")

    needed = cps * ratio * second / limit
    while(needed > 1000):
        needed /= 1000

    gain = needed * limit
    print(f"store {needed:.4g} cookies to gain {gain:.4g} cookies")

if __name__ == "__main__":
    if len(sys.argv) >= 2:
        max_efficient_cookie(*sys.argv[1:])
    else:
        max_efficient_cookie()

