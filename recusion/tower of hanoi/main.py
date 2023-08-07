"""Tower of Hanoi"""

def tower(disks,start,buffer,end):
    """Gives the logic for tower of hanoi"""
    if disks>0:
        tower(disks-1,start,end,buffer)
        print(f"transfer {start} disk{disks} to {end}")
        tower(disks-1,buffer,start,end)
tower(10,"A","B","C")
