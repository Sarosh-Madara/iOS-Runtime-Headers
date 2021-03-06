/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSHashTable, NSObject<OS_dispatch_queue>;

@interface DAAccountMonitor : NSObject {
    NSHashTable *_accounts;
    NSObject<OS_dispatch_queue> *_accountsQueue;
}

@property(retain) NSHashTable * accounts;
@property(retain) NSObject<OS_dispatch_queue> * accountsQueue;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)accounts;
- (id)accountsQueue;
- (id)init;
- (void)monitorAccount:(id)arg1;
- (id)monitoredAccounts;
- (void)setAccounts:(id)arg1;
- (void)setAccountsQueue:(id)arg1;
- (void)unmonitorAccount:(id)arg1;

@end
