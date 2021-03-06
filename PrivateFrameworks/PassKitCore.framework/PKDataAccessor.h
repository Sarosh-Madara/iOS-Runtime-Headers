/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSBundle, NSData, NSObject<OS_dispatch_queue>, PKRemoteAssetManager;

@interface PKDataAccessor : NSObject {
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property(retain,readonly) NSData * archiveData;
@property(retain,readonly) NSBundle * bundle;
@property(retain,readonly) NSData * manifestHash;
@property(retain,readonly) PKRemoteAssetManager * remoteAssetManager;
@property(readonly) BOOL remoteAssetsDownloaded;
@property(retain,readonly) NSData * serializedFileWrapper;

- (id)archiveData;
- (id)bundle;
- (id)content;
- (void)contentWithCompletion:(id)arg1;
- (id)dictionary;
- (void)dictionaryWithCompletion:(id)arg1;
- (id)displayProfileOfType:(int)arg1;
- (void)downloadRemoteAssetsWithCompletion:(id)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(float)arg1 suffix:(id)arg2 completion:(id)arg3;
- (void)imageSetForType:(int)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3 withCompletion:(id)arg4;
- (id)imageSetForType:(int)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3;
- (void)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(id)arg6;
- (id)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5;
- (id)manifestHash;
- (void)noteShared;
- (id)remoteAssetManager;
- (BOOL)remoteAssetsDownloaded;
- (void)requestUpdateWithCompletion:(id)arg1;
- (id)resourceValueForKey:(id)arg1;
- (void)revocationStatusWithCompletion:(id)arg1;
- (id)serializedFileWrapper;
- (void)updateSettings:(int)arg1;

@end
