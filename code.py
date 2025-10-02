import heapq

class BinaryHeap:
    def __init__(self):
        self.heap = []
    
    def push(self, item):
        heapq.heappush(self.heap, item)
    
    def pop(self):
        return heapq.heappop(self.heap) if self.heap else None
    
    def peek(self):
        return self.heap[0] if self.heap else None
    
    def __len__(self):
        return len(self.heap)

# Использование
heap = BinaryHeap()
heap.push(5)
heap.push(2)
heap.push(8)
print(f"Min: {heap.pop()}")  # 2