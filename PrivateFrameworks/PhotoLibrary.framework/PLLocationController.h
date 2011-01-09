/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray, CLLocationManager;



@interface PLLocationController : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSInteger _managerRefCount;
    NSMutableArray *_locationPendingPaths;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)isRunning;
- (id)location;
- (id)locationEXIFDictionary;
- (void)addLocationToImageAtPathWhenAvailable:(id)arg1;
- (void)_updatePendingImagePaths;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)_locationlessImageFinishedWriting:(id)arg1 withError:(id)arg2 atPath:(id)arg3;

@end