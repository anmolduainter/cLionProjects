#ifndef HEAPS_HEAP_H
#define HEAPS_HEAP_H

#include<bits/stdc++.h>
using namespace std;

class Heap{

    bool minHeap;
    vector<long int> v;

    bool compare(long int parent,long int child){
        if (minHeap){
            return (parent>child)?true:false;
        }
        else{
            return parent>child?false:true;
        }
    }

    void Heapify(int i){

        int left=2*i;
        int right=2*i+1;

        int min=i;

        if (left<v.size() && compare(v[i],v[left])){
            min=left;
        }

        else if (right<v.size() && compare(v[min],v[right])){
            min=right;
        }

        if (min!=i){
                swap(v[i],v[min]);
                Heapify(min);
        }

    }


public:
    Heap(bool minHeap=true,long int size=100){
        this->minHeap=minHeap;
        v.push_back(-1);
        v.reserve(size);
    }

    void push(long int data){
        v.push_back(data);
        long int index=v.size()-1;
        while(index>1){
            long int parent=index/2;
            if (compare(v[parent],v[index])){
               swap(v[parent],v[index]);
                index=parent;
            }
            else{
                break;
            }
        }
    }

    bool empty(){
        return v.size()==1;
    }

    int top() const{
        return v[1];
    }

    void pop(){
        swap(v[1],v[v.size()-1]);
        v.pop_back();

        //Heapify
        Heapify(1);

    }

};
#endif //HEAPS_HEAP_H
