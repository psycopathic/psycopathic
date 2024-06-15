 if(check){
            if(arr[i]==0)
                ++i;
            arr[i] -= 1;
            check = false;
            k--;
        }
        else{
              if(arr[j]==0)
                --j;
            arr[j] -= 1;
            check=true;
            k--;
        }
    }