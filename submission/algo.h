#pragma once

#include <deque>


template<class T, class Comp>
std::deque<T> Merge(const std::deque<T>& half1, const std::deque<T>& half2, const Comp& comparator) {
    // Реализуйте слияние, используя компаратор.
         std::deque<T> result;
         auto it_1 = half1.begin();
         auto it_2 = half2.begin();



          while ((it_1!=half1.end())&&(it_2!= half2.end())) {
             if (comparator(*it_1,*it_2)) {
                 result.push_back(*it_1);
                 ++it_1;
             }
             else {
                 result.push_back(*it_2);
                 ++it_2;
             }
        }

          while(it_1 != half1.end()){
            result.push_back(*it_1);
              ++it_1;
        }
          while (it_2 != half2.end()){
            result.push_back(*it_2);
              ++it_2;
        }

         return result;
}



template<class T, class Comp>
std::deque<T> MergeSort(const std::deque<T>& src, const Comp& comparator) {
    // Реализуйте рекурсивную функцию MergeSort
    // на основе задачи из урока о рекурсии.


    if (src.size()<=1){
        return src;
    }


    auto beg = src.begin();
    auto mid = beg + src.size() / 2;
    auto half1 = MergeSort<T>({beg,mid}, comparator);
    auto half2 = MergeSort<T>({mid, src.end()}, comparator);


    return Merge(half1, half2,comparator);

}
