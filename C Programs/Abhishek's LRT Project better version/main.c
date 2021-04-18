#include <stdio.h>
#include <stdlib.h>
#define NORTH 0
#define SOUTH 180
#define EAST 90
#define WEST 270

int main()
{
    int MAX;
    printf("How many numbers do you want to type:  ");
    scanf("%d",&MAX);

    int arr[MAX];
    int arr1_digit[MAX];
    int arr2_digit[MAX];
    int vehicle_position = NORTH;
    int num = 0;
    int a = 0;
    int b = 1;

    while(num < MAX)
    {
        printf("Enter a 2 digit number: Ox");
        scanf("%x", &arr[num]);
        arr1_digit[num]= arr[num] >> 4;
        arr2_digit[num] = arr[num] & 0xF;
        num++;
    }

    for(num = 1; num < MAX; num++)
    {
        if((arr1_digit[num] != arr1_digit[NORTH]) && (arr2_digit[num] != arr2_digit[NORTH]))
        {
            if(vehicle_position == NORTH)
             {
                 if(arr1_digit[a] < arr1_digit[b])
                 {
                    printf("Go forward\n");
                    vehicle_position = NORTH;
                 }
                 else if(arr1_digit[a] > arr1_digit[b])
                 {
                     printf("Go Backwards\n");
                     vehicle_position = SOUTH;

                 }
                 else if(arr2_digit[a] < arr2_digit[b])
                 {
                     printf("Go Right\n");
                     vehicle_position = EAST;
                 }
                 else
                 {
                     printf("Go left\n");
                     vehicle_position = WEST;

                 }
             }
             else if(vehicle_position == EAST)
             {
                 if(arr1_digit[a] < arr1_digit[b])
                    {
                        printf("Go left\n");
                        vehicle_position = NORTH;
                    }
                 else if(arr1_digit[a] > arr1_digit[b])
                 {
                     printf("Go Right\n");
                     vehicle_position = SOUTH;

                 }
                 else if(arr2_digit[a] < arr2_digit[b])
                 {
                     printf("Go forward\n");
                     vehicle_position = EAST;
                 }
                 else
                 {
                     printf("Go Backwards\n");
                     vehicle_position = WEST;

                 }
             }
             else if(vehicle_position == WEST)
             {
                 if(arr1_digit[a] < arr1_digit[b])
                    {
                        printf("Go Right\n");
                        vehicle_position = NORTH;
                    }
                 else if(arr1_digit[a] > arr1_digit[b])
                 {
                     printf("Go Left\n");
                     vehicle_position = SOUTH;

                 }
                 else if(arr2_digit[a] < arr2_digit[b])
                 {
                     printf("Go backwards\n");
                     vehicle_position = EAST;
                 }
                 else
                 {
                     printf("Go forward\n");
                     vehicle_position = WEST;

                 }

            }
            else
            {
                if(arr1_digit[a] < arr1_digit[b])
                    {
                        printf("Go Backwards\n");
                        vehicle_position = NORTH;
                    }
                 else if(arr1_digit[a] > arr1_digit[b])
                 {
                     printf("Go forward\n");
                     vehicle_position = SOUTH;

                 }
                 else if(arr2_digit[a] < arr2_digit[b])
                 {
                     printf("Go Left\n");
                     vehicle_position = EAST;
                 }
                 else
                 {
                     printf("Go Right\n");
                     vehicle_position = WEST;

                 }
            }
         }
         else
         {
            if(vehicle_position == NORTH)
              {

                 if(arr1_digit[a] < arr1_digit[b])
                    {
                        printf("Go forward\n");
                        vehicle_position = NORTH;
                    }
                 else if(arr1_digit[a] > arr1_digit[b])
                 {
                     printf("Go Backwards\n");
                     vehicle_position = SOUTH;

                 }
                 else if(arr2_digit[a] < arr2_digit[b])
                 {
                     printf("Go Right\n");
                     vehicle_position = EAST;
                 }
                 else
                 {
                     printf("Go left\n");
                     vehicle_position = WEST;

                 }
             }
             else if(vehicle_position == EAST)
             {
                 if(arr1_digit[a] < arr1_digit[b])
                    {
                        printf("Go left\n");
                        vehicle_position = NORTH;
                    }
                 else if(arr1_digit[a] > arr1_digit[b])
                 {
                     printf("Go Right\n");
                     vehicle_position = SOUTH;

                 }
                 else if(arr2_digit[a] < arr2_digit[b])
                 {
                     printf("Go straight\n");
                     vehicle_position = EAST;
                 }
                 else
                 {
                     printf("Go Backwards\n");
                     vehicle_position = WEST;

                 }

             }
             else if(vehicle_position == WEST)
             {
                 if(arr1_digit[a] < arr1_digit[b])
                    {
                        printf("Go Right\n");
                        vehicle_position = NORTH;
                    }
                 else if(arr1_digit[a] > arr1_digit[b])
                 {
                     printf("Go Left\n");
                     vehicle_position = SOUTH;

                 }
                 else if(arr2_digit[a] < arr2_digit[b])
                 {
                     printf("Go backwards\n");
                     vehicle_position = EAST;
                 }
                 else
                 {
                     printf("Go straight\n");
                     vehicle_position = WEST;

                 }

                 }
            else
            {
                if(arr1_digit[a] < arr1_digit[b])
                    {
                        printf("Go Backwards\n");
                        vehicle_position = NORTH;
                    }
                 else if(arr1_digit[a] > arr1_digit[b])
                 {
                     printf("Go straight\n");
                     vehicle_position = SOUTH;

                 }
                 else if(arr2_digit[a] < arr2_digit[b])
                 {
                     printf("Go Left\n");
                     vehicle_position = EAST;
                 }
                 else
                 {
                     printf("Go Right\n");
                     vehicle_position = WEST;

                 }
            }
        }

         a++;
         b++;
         }


    }





