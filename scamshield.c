#include <stdio.h>
#include <string.h>

int main() {
    char message[500];
    int risk_score = 0;
    int i; // Beginners usually declare loop variables at the very top
    
    // Using flags instead of complex OR (||) logic in one line
    int urgency_found = 0;
    int threat_found = 0;
    int kyc_found = 0;
    int reward_found = 0;
    int link_found = 0;

    printf("=========================================\n");
    printf("     ScamShield - Message Scanner        \n");
    printf("=========================================\n\n");

    printf("Enter incoming message to scan:\n> ");
    // Basic fgets without the NULL check that AI usually adds
    fgets(message, 500, stdin);

    // 1st-semester hallmark: Manual ASCII conversion instead of <ctype.h> tolower()
    // Also using strlen() directly inside the loop condition (inefficient but common for beginners)
    for (i = 0; i < strlen(message); i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = message[i] + 32; // Adding 32 converts uppercase ASCII to lowercase
        }
    }

    printf("\n--- Analysis Report ---\n");

    // Checking triggers one by one
    if (strstr(message, "urgent") != NULL) urgency_found = 1;
    if (strstr(message, "immediately") != NULL) urgency_found = 1;
    if (strstr(message, "today") != NULL) urgency_found = 1;

    if (urgency_found == 1) {
        printf("[!] Urgency trigger detected.\n");
        risk_score = risk_score + 1; // Beginners often write x = x + 1 instead of x++
    }

    // Threat triggers
    if (strstr(message, "blocked") != NULL) threat_found = 1;
    if (strstr(message, "suspended") != NULL) threat_found = 1;
    if (strstr(message, "cut") != NULL) threat_found = 1;

    if (threat_found == 1) {
        printf("[!] Threat/Service disruption trigger detected.\n");
        risk_score = risk_score + 1;
    }

    // KYC triggers
    if (strstr(message, "kyc") != NULL) kyc_found = 1;
    if (strstr(message, "otp") != NULL) kyc_found = 1;
    if (strstr(message, "verify") != NULL) kyc_found = 1;
    if (strstr(message, "password") != NULL) kyc_found = 1;

    if (kyc_found == 1) {
        printf("[!] Sensitive credential/KYC request detected.\n");
        risk_score = risk_score + 1;
    }

    // Reward triggers
    if (strstr(message, "lottery") != NULL) reward_found = 1;
    if (strstr(message, "prize") != NULL) reward_found = 1;
    if (strstr(message, "winner") != NULL) reward_found = 1;
    if (strstr(message, "cashback") != NULL) reward_found = 1;

    if (reward_found == 1) {
        printf("[!] Financial reward/bait detected.\n");
        risk_score = risk_score + 1;
    }

    // Link triggers
    if (strstr(message, "http://") != NULL) link_found = 1;
    if (strstr(message, "https://") != NULL) link_found = 1;
    if (strstr(message, "bit.ly") != NULL) link_found = 1;

    if (link_found == 1) {
        printf("[!] Web link detected in message.\n");
        risk_score = risk_score + 1;
    }

    // Basic if-else ladder
    printf("\nTotal Risk Score: %d / 5\n", risk_score);
    
    if (risk_score >= 3) {
        printf("VERDICT: HIGH RISK! Potential phishing/scam message.\n");
    } 
    else if (risk_score >= 1) {
        printf("VERDICT: CAUTION! Suspicious elements found.\n");
    } 
    else {
        printf("VERDICT: SAFE. No common scam indicators found.\n");
    }

    return 0;
}
