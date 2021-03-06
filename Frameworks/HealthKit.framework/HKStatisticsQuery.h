/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface HKStatisticsQuery : HKQuery <HKStatisticsQueryClient> {
    id _completionHandler;
    unsigned int _options;
}

@property(readonly) id completionHandler;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property unsigned int options;
@property(readonly) Class superclass;

+ (id)_clientInterfaceProtocol;
+ (void)_configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (id)_queue_errorHandler;
- (void)_queue_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (void)_queue_validate;
- (id)completionHandler;
- (void)deliverStatistics:(id)arg1 forQuery:(id)arg2;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned int)arg3 completionHandler:(id)arg4;
- (unsigned int)options;
- (void)setOptions:(unsigned int)arg1;

@end
