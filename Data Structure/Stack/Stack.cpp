1)Stack হচ্ছে LIFO (Last In First Out)
2)বস্তায় রাখা বইয়ের বা ক্যান্টিনে রাখা প্লেটের বা ডিস্ক রাখার স্ট্যান্ডের মতো।
3)অর্থাৎ Insertion, Deletion সবসময় top থেকে হয় (from one end)।
4)আবার সবার আগে যে বই/প্লেট/ডিস্কটা রাখা হচ্ছে সেটা সবার পরে ওঠানো লাগছে। তাই Stack কে FILO (First In Last Out) ও বলা হয়।
5)Operations
push()→Element insert করে (top এ)।
pop()→Stack element delete করে (top থেকে। আর সব element delete করে ফেললে বা কোনো element না থাকলে top হবে -1)।
top()→Used to see the element which is at the top of the stack.
display()→Used to see all the elements of the stack. এটার সাহায্যে data গুলো reversely ও print করা যায়।
6)push() এবং pop() এর সাথে related term হচ্ছে overflow এবং underflow।
Overflow→স্ট্যাকের সাইজ ৩।element রাখা যাবে ৩টা (index 0,1,2।নিচ থেকে উপরে।) কিন্তু রাখতে চাচ্ছি ৪ টা। এটাকে বলে stack overflow।
Underflow→stack খালি। তারপরও pop() ব্যবহার করলে হবে underflow। এখন কথা হলো বুঝবো কিভাবে stack খালি কিনা। top=-1 হওয়া মানে খালি। এই -1 আমরা globally declare করে রাখবো। অর্থাৎ implementation এর সময় globally top কে আমরা -1 করে রাখবো তথা -1 দিয়ে initialy stack টা empty করে রাখবো।এরপর ডেটা insert করব delete করবো।
