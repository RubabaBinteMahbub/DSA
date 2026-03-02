🟠 STL হচ্ছে DSA–র practical implementation।
<br><br>
🟠 প্রথমে DSA concept ভালো করে বুঝবে → তারপর STL ব্যবহার করবে।<br>
<br><br>
🟠 কখন Manual Implementation দরকার?<br>
🔹Learning / interview purpose → concept বোঝার জন্য<br>
🔹Custom behavior / optimization দরকার হলে<br>
🔹Library use restricted environment
<br><br>
🟠 কখন STL use করা ভালো?<br>
🔹Competitive programming → speed matters<br>
🔹Production code → কম bug risk<br>
🔹Simple & fast solution needed<br>

🟠 STL vs Manual Implementation<br>
🔹Queue<br>
Manual: array/linked list দিয়ে enqueue/dequeue implement করতে হবে।<br>
STL: queue<int> q; q.push(10); q.pop();<br>
Benefit: দ্রুত code, less bugs, ready-made.<br><br>

🔹Map / Set (Balanced BST)<br>
Manual: নিজের Balanced BST implement করতে হবে (AVL/Red-Black Tree)।<br>
STL: map<int,int> বা set<int> use করলে O(log n) automatically।<br>
Benefit: Complex tree implement না করেই performance পাওয়া যায়।
<br><br>
🔹Algorithm (Sorting/Search)<br>
Manual: QuickSort, MergeSort, Binary Search লিখতে হবে।<br>
STL: sort(v.begin(), v.end());,binary_search(v.begin(), v.end(), x);<br>
Benefit: Code ছোট, tested, faster.
<br><br>
🟠 Implication<br>
👉 DSA শেখার সময় → Manual implementation শিখতে হবে।<br>
👉 Competitive programming / real project → STL ব্যবহার করতে হবে।
