/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLEngineLibrary, CPLPlatformObject, NSCountedSet, NSDate, NSObject<OS_dispatch_queue>, NSString;

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent> {
    unsigned int _currentRequestGeneration;
    unsigned int _currentSyncState;
    NSCountedSet *_disablingReasons;
    CPLEngineLibrary *_engineLibrary;
    unsigned int _foregroundCalls;
    double _intervalForRetry;
    unsigned int _lastRequestGeneration;
    NSDate *_lastSyncSessionDateCausedByForeground;
    NSDate *_nextScheduledDate;
    BOOL _opened;
    CPLPlatformObject *_platformObject;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _requiredFirstState;
    BOOL _shouldRetryASyncSessionForResourcesUpload;
    NSDate *_unavailabilityLimitDate;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) CPLEngineLibrary * engineLibrary;
@property(readonly) unsigned int hash;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) Class superclass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (void)_backOff;
- (void)_disableRetryAfterLocked;
- (void)_disableSynchronizationWithReasonLocked:(id)arg1;
- (void)_enableSynchronizationWithReasonLocked:(id)arg1;
- (void)_handleResetClientCacheWithError:(id)arg1 completionHandler:(id)arg2;
- (void)_handleResetCloudCacheWithError:(id)arg1 completionHandler:(id)arg2;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)arg1;
- (void)_noteSyncSessionNeededFromState:(unsigned int)arg1;
- (void)_reallyStartSyncSession;
- (void)_reallyUnscheduleSession;
- (void)_scheduleNextSyncSession;
- (void)_startRequiredSyncSession;
- (BOOL)_syncSessionIsPossible;
- (void)_unscheduleNextSyncSession;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id)arg2;
- (id)componentName;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (id)engineLibrary;
- (void)getStatusDictionaryWithCompletionHandler:(id)arg1;
- (void)getStatusWithCompletionHandler:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (BOOL)isClientInForeground;
- (BOOL)isSynchronizationDisabledWithReasonError:(id*)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientIsInSyncWithClientCache;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)noteNetworkStateDidChange;
- (void)notePullQueueIsFull;
- (void)notePushQueueIsEmpty;
- (void)notePushQueueIsFull;
- (void)noteResourceDownloadQueueIsFull;
- (void)noteResourceUploadQueueIsFull;
- (void)noteServerHasChanges;
- (void)noteServerIsUnavailableWithError:(id)arg1;
- (void)noteSyncSessionFailedDuringPhase:(unsigned int)arg1 withError:(id)arg2;
- (void)noteSyncSessionStateWillBeAttempted:(unsigned int)arg1;
- (void)noteSyncSessionSucceeded;
- (void)openWithCompletionHandler:(id)arg1;
- (id)platformObject;
- (void)resetBackoffInterval;
- (void)startRequiredSyncSessionNow;

@end
