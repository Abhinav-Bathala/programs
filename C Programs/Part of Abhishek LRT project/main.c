#include <stdio.h>
#include <stdlib.h>
 #define MAX 255
 #define NORTH 0
 #define SOUTH 180
 #define EAST 90
 #define WEST 270
int main()
{
    int arr[MAX];
    int arr1_digit[MAX];
    int arr2_digit[MAX];
    int first_digit = 0;
    int second_digit = 0;
    int vehicle_position = NORTH;
    int num;
    int a = -1;
    int b = 0;

    for(num = 0; num < MAX; num++)
    {
        printf("Enter a number: Ox");
        scanf("%x", &arr[num]);
        first_digit = arr[num] >> 4;
        second_digit = arr[num] & 0xF;
        arr1_digit[num] = first_digit;
        arr2_digit[num] = second_digit;
        if((first_digit != 1) && (second_digit != 1))
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


                if(a > -1)
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

        }

         a++;
         b++;
         }



    return 0;
}
