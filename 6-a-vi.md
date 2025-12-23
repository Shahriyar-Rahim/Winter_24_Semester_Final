# Pros and Cons: Structures vs. Unions in C

### Comparison Table

| Feature | Structure (`struct`) | Union (`union`) |
| :--- | :--- | :--- |
| **Storage** | Stores all members simultaneously. | Stores only one member at a time (overwrites previous data). |
| **Memory** | Uses more memory (Sum of all members' sizes + padding). | Uses less memory (Size of the largest member only). |
| **Use Case** | Records where all data attributes are needed at once. | Situations where a variable can be one of several types, but never both. |

---

### In-Depth Discussion

#### When to Use a Structure
For storing **Student Information**, a **Structure is preferred**.

* **The Logic:** A student possesses an ID, a Name, *and* a CGPA simultaneously. 
* **The Constraint:** If you used a union, assigning the CGPA would overwrite the Name, and assigning the Name would overwrite the ID. You would lose critical data because they share the same memory space.



#### When to Use a Union
Imagine you are processing a **Sensor Input** that can either return a raw integer error code OR a floating-point temperature value, but never both at the same time.

**Example Code:**
```c
union SensorData {
    int errorCode;
    float temperature;
};