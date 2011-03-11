/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableArray, NSString;

@interface SCROBrailleKey : NSObject <NSCoding> {
    NSMutableArray *_maskArray;
    NSString *_identifier;
    int _routerIndex;
    int _routerToken;
    int _routerLocation;
    BOOL _hasRouterInfo;
    id _appToken;
    int _displayToken;
}


- (id)identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (long)displayToken;
- (BOOL)getRouterIndex:(int*)arg1 token:(int*)arg2 location:(int*)arg3 appToken:(id*)arg4;
- (id)keyMasks;
- (void)addKeyMask:(unsigned long)arg1;
- (void)setRouterIndex:(long)arg1 token:(int)arg2 location:(long)arg3 appToken:(id)arg4;
- (void)setDisplayToken:(long)arg1;

@end