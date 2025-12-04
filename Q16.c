#include<stdio.h>

int main_list[50]; // Global array, because functions

// Function to print the current state of the list
void print_it(int count) {
    for (int i = 0; i < count; i++) {
        printf("-%d-", main_list[i]);
    }
    printf("\n");
}


void add_front(int current_count)
{
    int new_val;
    printf("Value to insert at the front, dude: ");
    scanf("%d",&new_val);
    
    // Shift everything right
    for (int i = current_count - 1; i >= 0; i--)
    {
        main_list[i + 1] = main_list[i];
    }
    
    main_list[0] = new_val;
    
    printf("\nAfter adding to the start, the list is:\n");
    print_it(current_count + 1);
}

void add_mid(int current_count){
    
    int new_val, target_index;

    printf("Value to insert: ");
    scanf("%d",&new_val);

    printf("Index (where do you want it? 0 to %d): ", current_count - 1);
    scanf("%d",&target_index);
    
    // Shift from the target index up to the end
    for (int i = current_count - 1; i >= target_index; i--)
    {
        main_list[i+1] = main_list[i];
    }
    
    main_list[target_index] = new_val;
    
    printf("\nAfter middle insert:\n");
    print_it(current_count + 1);
}

void add_end(int current_count){
    
    int new_val;

    printf("Value to stick on the end: ");
    scanf("%d",&new_val);
    
    main_list[current_count] = new_val; // This is the next available spot, easy
    
    
    printf("\nAfter end insert:\n");
    print_it(current_count + 1);
}

int main()
{
    int num_elements, user_choice;

    printf("Starting number of elements: ");
    scanf("%d",&num_elements);
    
    for(int i=0;i<num_elements;i++){
        printf("Element #%d: ", i + 1);
        scanf("%d", &main_list[i]);
    }

    printf("\nStarting List:\n");
    print_it(num_elements);

    
    printf("Where to put the new guy?\n1. Start\n2. Middle\n3. End\nChoice: ");
    scanf("%d",&user_choice);
    
    
    if(user_choice==1){
        add_front(num_elements);
    }
    
    else if(user_choice==2){
        
        add_mid(num_elements);
    }
    
    else if(user_choice==3){
        
        add_end(num_elements);
    }
    
    else{
        printf("Seriously!?? Pick 1, 2, or 3 next time.\n");
    }
    //sorry for the unfunny puns Richa mam
    return 0;
}
