✅ Sorting Algorithms
একেক ধরনের অ্যালগরিদম একেক টাইপের প্রবলেম সলভ করতে ব্যবহ্রত হয়।

✅ Bubble sort→ধরি, ছোট থেকে বড় সাজাবো।২টা করে item নিব। বামপাশেরটা ডানপাশেরটা থেকে বড় হলে swap করে দিব।পুরো অ্যরেটা ১বার travarse করে শর্তানুযায়ী swap করাকে বলে ১টা pass। প্রতি pass এর শেষে কাঙ্ক্ষিত order অনুযায়ী শেষ sorted digit টা আমরা পেয়ে যাই।
নাম্বার যদি n টা হয়, তাহলে পুরোটা Bubble sort অনুযায়ী sort করতে n-1 টা pass /iteration(পুনরাবৃত্তি) হবে।
এমনও হতে পারে pass-1 এর পরেই অ্যারেটা sorted হয়ে গেছে। কিন্তুু তারপরও n-1 বার pass হবে। এটা যাতে না হয় সেটা পরে শেখাবেন।
পরীক্ষায় dry run থাকতে পারে। তখন pass-1, pass-2,.... এভাবে প্রতি পাসে কি হচ্ছে লিখে দেখাতে হবে।
//j<size-1-i কারণ প্রতি পাসের পর শেষে sort করা লাগবেনা এমন একটা করে item যুক্ত হবে।
Space complexity : O(1)
(Constant time কারণ যে অ্যরেটা দিয়েছে সেটা দিয়েই কাজ শেষ করেছি। অতিরিক্ত কোনো জায়গা নিইনি। হিসাব করার সময় temp এর মতো ছোটোখাটো জিনিস কাউন্ট করবোনা। Main কথা given array ছাড়া অন্য কোনো জায়গা/অ্যারে নিইনি।)
Time complexity : O(n^2)➤হিসাব করার সময় (n-1)~n, (n-1-i)~n ধরব। 
(n হচ্ছে অ্যারের এলিমেন্ট/item সংখ্যা।)

// Bubble Sort
#include <stdio.h>

int main() {
    int arr[5] = {12, 2, 5, 3, 10};
    int size = 5;

    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
