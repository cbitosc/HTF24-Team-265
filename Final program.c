#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generateSOP(const char* resume, const char* certificates);
void provideFeedback(const char* sopDraft);

int main() {
    char resume[256];
    char certificates[256];

    printf("Enter the path to your resume PDF: ");
    scanf("%s", resume);
    
    printf("Enter the path to your certificates PDF: ");
    scanf("%s", certificates);
    
    generateSOP(resume, certificates);
    
    return 0;
}
void generateSOP(const char* resume, const char* certificates)
{

    printf("\nGenerating Statement of Purpose...\n");
    printf("Based on your resume at: %s\n", resume);
    printf("And your certificates at: %s\n", certificates);
    
    printf("\nYour Statement of Purpose:\n");
    printf("I am passionate about pursuing further studies in my field. My experience includes...\n");
    printf("I believe my background, skills, and dedication will allow me to contribute meaningfully...\n");

    char sopDraft[512];
    printf("\nPlease enter your draft Statement of Purpose:\n");
    scanf(" %[^\n]", sopDraft);

    provideFeedback(sopDraft);
}

void provideFeedback(const char* sopDraft)
{
    
    printf("\nProviding feedback on your draft...\n");

    if (strlen(sopDraft) < 100) {
        printf("Feedback: Your SOP is too short. Consider adding more details.\n");
    } else {
        printf("Feedback: Your SOP has a good length. Consider improving clarity and impact.\n");
    }
}
    