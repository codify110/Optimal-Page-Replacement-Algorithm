# Optimal Page Replacement Algorithm
A page replacement algorithm is required in an operating system that employs paging for memory management to determine which page needs to be replaced when a new page is received.
When a running application accesses a memory page that is mapped into the virtual address space but not loaded in physical memory, a page fault occurs. 
## Page faults: 
Page faults occur because physical memory is substantially smaller than virtual memory. In the event of a page fault, the Operating System may be forced to replace an existing page with the newly required page. Different page replacement algorithms provide various methods for determining which pages should be replaced. All algorithms have the goal of lowering the amount of page faults.
In **Optimal Page Replacement Algorithm** algorithm, pages are replaced which would not be used for the longest duration of time in the future.
## Console Output: 
![OPRA](https://user-images.githubusercontent.com/69696459/126537327-f7a9fb03-0cd3-43a5-a5e1-600eaf595aaf.PNG)

