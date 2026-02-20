🟠 STL হচ্ছে DSA–র practical implementation।

🟠 প্রথমে DSA concept ভালো করে বুঝবে → তারপর STL ব্যবহার করবে।
না বুঝে শুধু STL ব্যবহার করলে interview এ ধরা পড়ে যাবে। 

🟠 কখন Manual Implementation দরকার?
🔹Learning / interview purpose → concept বোঝার জন্য
🔹Custom behavior / optimization দরকার হলে
🔹Library use restricted environment

🟠 কখন STL use করা ভালো?
🔹Competitive programming → speed matters
🔹Production code → কম bug risk
🔹Simple & fast solution needed

🟠 STL vs Manual Implementation
🔹Queue
Manual: array/linked list দিয়ে enqueue/dequeue implement করতে হবে।
STL: queue<int> q; q.push(10); q.pop();
Benefit: দ্রুত code, less bugs, ready-made.

🔹Map / Set (Balanced BST)
Manual: নিজের Balanced BST implement করতে হবে (AVL/Red-Black Tree)।
STL: map<int,int> বা set<int> use করলে O(log n) automatically।
Benefit: Complex tree implement না করেই performance পাওয়া যায়।

🔹Algorithm (Sorting/Search)
Manual: QuickSort, MergeSort, Binary Search লিখতে হবে।
STL: sort(v.begin(), v.end());, binary_search(v.begin(), v.end(), x);
Benefit: Code ছোট, tested, faster.

🟠 Implication
👉 DSA শেখার সময় → Manual implementation শিখতে হবে।
👉 Competitive programming / real project → STL ব্যবহার করতে হবে।
