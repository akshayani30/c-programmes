#include<stdio.h>
#include<math.h>
#define MAX_DAYS 7
typedef struct {
    int steps[MAX_DAYS]; 
    float calories[MAX_DAYS];
    int heartRate[MAX_DAYS];
    } FitnessData;
    void inputData(FitnessData *data) {
        for (int i = 0; i < MAX_DAYS; i++) {
            printf("Enter steps for day %d: ", i + 1);
            scanf("%d", &data->steps[i]);
            printf("Enter calories burned for day %d: ", i + 1);
            scanf("%f", &data->calories[i]);
            printf("Enter average heart rate for day %d: ", i + 1);
            scanf("%d", &data->heartRate[i]);
            } 
            }
            void analyzeData(FitnessData data) { 
                int totalSteps = 0; 
                float totalCalories = 0; 
                int totalHeartRate = 0; 
                for (int i = 0; i < MAX_DAYS; i++) { 
                    totalSteps += data.steps[i]; 
                    totalCalories += data.calories[i];
                    totalHeartRate += data.heartRate[i];
                }
                printf("Total Steps: %d\n", totalSteps);
               // int Avgtotalcalories= totalCalories / MAX_DAYS;
                printf(" Total Calories Burned: %.2f\n", totalCalories);
                float avgtotalheartrate=(float)totalHeartRate / MAX_DAYS; 
                printf("Average Heart Rate: %.2f\n", avgtotalheartrate); 
                if (totalSteps>=7000)
                printf("your stpet count is good and above >=7000\n");
                else
                printf("your stpet count is not good and below <7000\n");
                
                if (totalCalories>=2000)
                printf("your calories burn for week is good and >=2000\n");
                else
                printf("your calories burn for week is not good and <2000\n");

                if (60>=avgtotalheartrate<=100 )
                printf("your heart rate is good 60 to 100\n");
                else
                printf("your heart rate is  not between 60 to 100\n");

            }
int main(){
FitnessData myData;
inputData(&myData);
analyzeData(myData);
return 0;
}