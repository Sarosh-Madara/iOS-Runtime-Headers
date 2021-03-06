/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, NSSet, TSDAutoscroll, TSDInteractiveCanvasController;

@interface TSDDynamicOperationController : NSObject {
    NSMutableSet *mAllTransformedReps;
    TSDAutoscroll *mAutoscroll;
    TSDInteractiveCanvasController *mICC;
    BOOL mOperationIsDynamic;
    BOOL mPossibleDynamicOperation;
    NSMutableSet *mReps;
    BOOL mResetGuides;
    BOOL mSupportsAlignmentGuides;
}

@property(readonly) NSSet * allTransformedReps;
@property(readonly) NSSet * currentlyTransformingReps;

- (id)allTransformedReps;
- (void)beginOperation;
- (void)beginPossibleDynamicOperation;
- (void)cancelOperation;
- (id)currentlyTransformingReps;
- (void)dealloc;
- (void)handleGestureRecognizer:(id)arg1;
- (void)handleTrackerManipulator:(id)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (void)invalidateGuides;
- (BOOL)isInOperation;
- (BOOL)isInPossibleDynamicOperation;
- (BOOL)isOperationDynamic;
- (void)p_beginDynamicOperationForReps:(id)arg1;
- (void)p_cleanupOperation;
- (void)p_controllingTMDidResetInOperation:(id)arg1;
- (void)p_resetGuidesForCleanup:(BOOL)arg1;
- (void)startTransformingReps:(id)arg1;
- (void)stopTransformingReps:(id)arg1;

@end
