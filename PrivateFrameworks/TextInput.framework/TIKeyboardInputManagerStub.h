/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)serverInterface;
+ (void)setClassesForSelectorsReplyingWithCandidatesInInterface:(id)arg1;

- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(id)arg3;
- (void)candidateRejected:(id)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(id)arg2;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 completionHandler:(id)arg3;
- (void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(id)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(id)arg3;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(id)arg3;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(id)arg3;
- (id)keyboardConfiguration;
- (void)lastAcceptedCandidateCorrected;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(id)arg3;
- (void)setOriginalInput:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id)arg2;
- (void)textAccepted:(id)arg1;
- (void)writeTypologyLogWithCompletionHandler:(id)arg1;

@end
